#include "main.h"

/**
 * print_binary - function to print binary rep of a num.
 * @n: number to be printed in binary.
 *
 */ 

void print_binary(unsigned long int n) 
{
    unsigned int num = sizeof(unsigned long int) * 8;
    for (unsigned int i = num - 1; i < num; i--) {
        unsigned long int mask = 1UL << i;
        putchar((n & mask) ? '1' : '0');
    }
    putchar('\n');
}
