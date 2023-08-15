#include "main.h"

/**
 * _putchar - Print a single character
 * @c: The character to be printed
 */
void _putchar(char c)
{
    // Assuming you have a method 'output_char' to print a character
    asm volatile (
        "mov $0x02, %%eax\n"  // syscall number for write
        "mov $0x01, %%ebx\n"  // file descriptor 1 (stdout)
        "mov %[ch], %%ecx\n"  // character to print
        "mov $0x01, %%edx\n"  // length of data
        "int $0x80\n"
        :
        : [ch] "r" (c)
        : "eax", "ebx", "ecx", "edx"
    );
}

/**
 * print_alphabet - Print all alphabets in lowercase
 */
void print_alphabet(void)
{
    char character;

    for (character = 'a'; character <= 'z'; character++)
        _putchar(character);

    _putchar('\n');
}

int main(void)
{
    print_alphabet();
    return (0);
}
