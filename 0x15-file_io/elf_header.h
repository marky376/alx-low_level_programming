/* elf_header.h*/
#ifndef ELF_HEADER_H
#define ELF_HEADER_H
#include <stdint.h>
#include <stddef.h>

typedef struct
{
	unsigned char e_ident[16];
	uint16_t e_type;
	uint16_t e_machine;
	uint32_t e_version;
	uint64_t e_entry;
	uint64_t e_phoff;
	uint32_t e_flags;
	uint16_t e_ehsize;
	uint16_t e_phentsize;
	uint16_t e_phnum;
	uint16_t e_shentsize;
	uint16_t e_shnum;
	uint16_t e_shdtrndx;
}ElfHeader;
int readElfHeader(const char *filename, ElfHeader *header);
void printElfHeader(const ElfHeader *header);

#endif

