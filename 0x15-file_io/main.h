#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/**
 * struct Elf_Info - Structure to hold ELF information
 * @e_ident: ELF identification array
 * @e_type: ELF file type
 * @e_entry: Entry point address
 */
typedef struct
{
	unsigned char *e_ident;
	unsigned int e_type;
	unsigned long int e_entry;
} Elf_Info;

void print_os_abi(unsigned char *e_ident);
void print_data_encoding(unsigned char *e_ident);
void print_abi_version(unsigned char *e_ident);
void print_file_type(unsigned int e_type, unsigned char *e_ident);
void check_elf_format(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_entry_point(unsigned long int e_entry, unsigned char *e_ident);
void close_file(int file_descriptor);
void print_version(unsigned char *e_ident);
void print_class(unsigned char *e_ident);

#endif
