#include "elf_header.h"
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * readElfHeader - function to read the Elf file
 * @filename: the file name
 * @header: the header of the file
 */

int readElfHeader(const  char *filename, ElfHeader *header)
{
	/*Open the ELF file*/
	int fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		return (98);	
	}

	/*Read the ELF header*/
	if (read(fd, header, sizeof(ElfHeader)) != sizeof(ElfHeader))
	{
		fprintf(stderr, "Error reading ELF header\n");
		close(fd);
		return(98);
	}

	close(fd);
	return (0);
}

/**
 * printElfHeader - function that prints the Elf header contents
 * @heade: the header of the file
 */

void printElfHeader(const ElfHeader *header)
{
	int i;

	printf("ELF Header:\n");
	printf(" Magic: ");

	for (i = 0; i < 16; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");

	printf("Class: %s\n", header->e_ident[4] == 1 ? "ELF" : "ELF64");
	printf("  Data:                              %s\n", header->e_ident[5] == 1 ? "2's complement, little-endian" : "2's complement, big-endian");
	printf("  Version:                           %d (current)\n", header->e_ident[6]);
	printf("  OS/ABI:                            %d\n", header->e_ident[7]);
	printf("  ABI Version:                       %d\n", header->e_ident[8]);
	printf("  Type:                              %d (EXEC)\n", header->e_type);
	printf("  Entry point address:               0x%lx\n", header->e_entry);
	printf("  Start of program headers:          %ld (bytes into file)\n", header->e_phoff);
	printf("  Start of section headers:          %ld (bytes into file)\n", header->e_phoff);
	printf("  Flags:                             0x%x\n", header->e_flags);
	printf("  Size of this header:               %d (bytes)\n", header->e_ehsize);
	printf("  Size of program headers:           %d (bytes)\n", header->e_phentsize);
	printf("  Number of program headers:         %d\n", header->e_phnum);
	printf("  Size of section headers:           %d (bytes)\n", header->e_shentsize);
	printf("  Number of section headers:         %d\n", header->e_shnum);
	printf("  Section header string table index: %d\n", header->e_shdtrndx);
}
int main(int argc, char *argv[])
{
	ElfHeader header;
	int result;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (1);
	}

	result = readElfHeader(argv[1], &header);
	if (result == 0)
	{
		fprintf(stderr, "Error: Unable to read ELF header\n");
		return (98);
	}

	printElfHeader(&header);

	return (0);
}
