#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main() {
    char *line = NULL;
    size_t size = 0;
    char *token = NULL;
    char *commands[100]; // Assuming a maximum of 100 tokens (adjust as needed)
    while(1){
    if(issaty(stdin) != 0){
        printf("$prompt");
    }
    if (getline(&line, &size, stdin) != -1) {
        int i = 0;
        
        // Tokenize the input line
        token = strtok(line, " \n\t");
        
        while (token) {
            commands[i] = token;
            i++;
            token = strtok(NULL, " \n\t");
        }
        
        // Null-terminate the commands array
        commands[i] = NULL;

        // Execute the command using execvp
        if (execvp(commands[0], commands) == -1) {
            perror("execvp");
            exit(EXIT_FAILURE);
        }
    } else {
        perror("getline");
        exit(EXIT_FAILURE);
    }

    free(line);
    }
    return 0;
}
