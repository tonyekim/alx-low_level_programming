#include <stdio.h>
#include "main.h"

/**
 * main - Entry Point
 * @argc: arguments
 * @argv: array pointing to arguments
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *arg[])
{
	if (argc > 0)

		printf("%d\n", argc -1);
	return (0);
}
