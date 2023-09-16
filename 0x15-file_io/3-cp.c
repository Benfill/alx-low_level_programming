#include    "main.c"
#define BUFFER_SIZE 1024

/**
 * exit_with_error - Exits the program with an error code and prints an error message.
 * @code: The exit code to use.
 * @message: The error message format string.
 * @arg1: The first argument to substitute in the error message (can be NULL).
 * @fd: The file descriptor to close (-1 if not applicable).
 */

void exit_with_error(int code, const char *message, const char *arg1, int fd)
{
    dprintf(2, message, arg1);
    if (fd != -1)
    {
        close(fd);
    }
    exit(code);
}

/**
 * main - program that copies the content of a file to another file
 * @ac: arg count
 * @av: args
 * Return: 0
 */

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        exit_with_error(97, "Usage: cp file_from file_to\n", NULL, -1);
    }

    char *file_from = argv[1];
    char *file_to = argv[2];

    int fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1)
    {
        exit_with_error(98, "Error: Can't read from file %s\n", file_from, -1);
    }

    int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
    if (fd_to == -1)
    {
        exit_with_error(99, "Error: Can't write to file %s\n", file_to, fd_from);
    }

    char buffer[BUFFER_SIZE];
    ssize_t bytes_read, bytes_written;

    while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
    {
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written == -1)
        {
            exit_with_error(99, "Error: Can't write to file %s\n", file_to, fd_from);
        }
    }

    if (bytes_read == -1)
    {
        exit_with_error(98, "Error: Can't read from file %s\n", file_from, fd_from);
    }

    if (close(fd_from) == -1)
    {
        exit_with_error(100, "Error: Can't close fd %d\n", file_from, fd_from);
    }

    if (close(fd_to) == -1)
    {
        exit_with_error(100, "Error: Can't close fd %d\n", file_to, fd_to);
    }

    return 0;
}
