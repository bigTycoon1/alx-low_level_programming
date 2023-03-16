#include <stdio.h>
/**
 *main - Size is not grandeur, and territory does not make a nation
 *Return: Always zero (success)
 */
int main(void)
{
	printf("size of char: %d byte(s)", sizeof(char));
	printf("size of int: %d byte(s)", sizeof(int));
	printf("size of long int: %d byte(s)", sizeof(long int));
	printf("size of long long int: %d byte(s)", sizeof(long long int));
	printf("size of float: %d bytes((s)", sizeof(float));
	return (0);
}
