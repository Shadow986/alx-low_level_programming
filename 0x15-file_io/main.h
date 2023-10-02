#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
char *allocate_buffer(char *y);
void close_file_descriptor(int x);
int main(int argc, char *argv[]);
void check_elf_file(unsigned char *e_ident);
void print_magic_numbers(unsigned char *e_ident);
void print_elf_class(unsigned char *e_ident);
void print_elf_data(unsigned char *e_ident);
void print_elf_version(unsigned char *e_ident);
void print_elf_osabi(unsigned char *e_ident);
void print_elf_type(unsigned int e_type, unsigned char *e_ident);
void print_elf_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf_file(int elf);

#endif
