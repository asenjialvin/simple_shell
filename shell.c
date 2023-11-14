#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(void)
{
	char *Lineptr = NULL;
	size_t n = 120;

	Lineptr = malloc(n);
	if (Lineptr == NULL)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}

	printf("$ ");
	while (getline(&Lineptr, &n, stdin) != EOF)
	{
		printf("%s\n", Lineptr);
		printf("$ ");
	}

	printf("\n");
	free(Lineptr);
	exit(EXIT_SUCCESS);
}
