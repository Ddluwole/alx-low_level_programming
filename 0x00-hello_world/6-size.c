#include <stdio.h>
/**
 * main - prints the size of various types on the computer it is compiled and run on
 *
 * Description: Using the main function
 * this program prints "prints the size of various types on the computer it is compiled and run on"
 * Return: 0;
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of a char is: %ld byte(s)\n", sizeof(c));
	printf("Size of an int is: %ld byte(s)\n", sizeof(i));
	printf("Size of a long int is: %ld byte(s)\n", sizeof(li));
	printf("Size of a long long int is: %ld byte(s)\n", sizeof(lli));
	printf("Size of a float is: %ld byte(s)\n", sizeof(f));
	return (0);
}
