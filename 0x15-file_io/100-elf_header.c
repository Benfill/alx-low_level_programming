#include <fcntl.h>
#include <elf.h>

/**
 * exit_with_error - Exits the program with an error code
 * and prints an error message.
 * @code: The exit code to use.
 * @message: The error message format string.
 * @arg1: The first argument to substitute in the error message (can be NULL).
 * @fd: The file descriptor to close (-1 if not applicable).
 */

void print_error(const char *msg) {
    fprintf(stderr, "%s\n", msg);
    exit(98);
}

/**
 * print_elf_header - Prints the ELF header information.
 * @header: A pointer to the ELF header structure.
 */

/**
 * main - The entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 * Return: The exit status of the program.
 */

void print_elf_header(const Elf64_Ehdr *header) {
    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\n");
    printf("  Class:                             ");
    switch (header->e_ident[EI_CLASS]) {
        case ELFCLASS32:
            printf("ELF32\n");
            break;
        case ELFCLASS64:
            printf("ELF64\n");
            break;
        default:
            printf("<unknown: %x>\n", header->e_ident[EI_CLASS]);
            break;
    }
    printf("  Data:                              ");
    switch (header->e_ident[EI_DATA]) {
        case ELFDATA2LSB:
            printf("2's complement, little endian\n");
            break;
        case ELFDATA2MSB:
            printf("2's complement, big endian\n");
            break;
        default:
            printf("<unknown: %x>\n", header->e_ident[EI_DATA]);
            break;
    }
    printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            ");
    switch (header->e_ident[EI_OSABI]) {
        case ELFOSABI_SYSV:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_NETBSD:
            printf("UNIX - NetBSD\n");
            break;
        case ELFOSABI_SOLARIS:
            printf("UNIX - Solaris\n");
            break;
        default:
            printf("<unknown: %x>\n", header->e_ident[EI_OSABI]);
            break;
    }
    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
    printf("  Type:                              ");
    switch (header->e_type) {
        case ET_NONE:
            printf("NONE (Unknown type)\n");
            break;
        case ET_EXEC:
            printf("EXEC (Executable file)\n");
            break;
        case ET_DYN:
            printf("DYN (Shared object file)\n");
            break;
        default:
            printf("<unknown: %x>\n", header->e_type);
            break;
    }
    printf("  Entry point address:               0x%lx\n", header->e_entry);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        print_error("Usage: elf_header elf_filename");
    }

    const char *filename = argv[1];
    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        print_error("Error opening file");
    }

    Elf64_Ehdr header;
    if (read(fd, &header, sizeof(header)) != sizeof(header)) {
        print_error("Error reading ELF header");
    }

    if (header.e_ident[EI_MAG0] != ELFMAG0 || 
        header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 ||
        header.e_ident[EI_MAG3] != ELFMAG3) {
        print_error("Not an ELF file");
    }

    print_elf_header(&header);

    close(fd);
    return 0;
}