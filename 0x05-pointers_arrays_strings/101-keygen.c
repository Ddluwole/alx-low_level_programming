#include "stdlib.h"
#include "time.h"
#include "stdio.h"

/**
 * main - Generates random valid passwords for the
 *  program 101-crackme.
 *
 *  Return: Always 0
 */

int main(void)
{
	int num;
	int sum;

	srand(time(NULL));
	sum = 0;
	while (sum <= 2645)
	{
		num = (rand() % 128);
		sum += num;
		printf("%c", num);
	}

	printf("%c", 2772 - sum);

	return (0);
}
