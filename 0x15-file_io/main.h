#ifndef PUTIN
#define PUTIN
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <strings.h>
#include <elf.h>

/**
 * struct header - ELF header structure for 64-bit ELF files
 *
 * @e_ident:   ELF identification bytes and format information
 * @e_type:    Type of the ELF file (e.g., ET_EXEC for executable)
 * @e_machine: Target architecture (e.g., EM_X86_64 for x86_64)
 * @e_version: ELF format version (usually 1 for current)
 * @e_entry:   Entry point virtual address for executables
 * @e_phoff:   Offset to the program header table in the file
 * @e_shoff:   Offset to the section header table in the file
 * @e_flags:   Processor-specific flags
 * @e_ehsize:  Size of this ELF header (in bytes)
 * @e_phentsize: Size of a program header table entry (in bytes)
 * @e_phnum:   Number of entries in the program header table
 * @e_shentsize: Size of a section header table entry (in bytes)
 * @e_shnum:   Number of entries in the section header table
 * @e_shstrndx: Index of the section header containing section names
 */

/*typedef struct header
{
	unsigned char e_ident[EI_NIDENT];
	Elf64_Half e_type;
	Elf64_Half e_machine;
	Elf64_Word e_version;
	Elf64_Addr e_entry;
	Elf64_Off e_phoff;
	Elf64_Off e_shoff;
	Elf64_Word e_flags;
	Elf64_Half e_ehsize;
	Elf64_Half e_phentsize;
	Elf64_Half e_phnum;
	Elf64_Half e_shentsize;
	Elf64_Half e_shnum;
	Elf64_Half e_shstrndx;
} Elf64_Ehdr;*/

void	_putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_elf(const Elf64_Ehdr *header);

#endif
