#include <stdio.h>
/**
  * main - Entry point
  * Return: Always 0 (Success)
  */
int main(void)
{
	printf("the size of char is: %lu byte(s)\n", sizeof(char));
	printf("the size of int is: %lu byte(s)\n", sizeof(int));
	printf("the size of long int is: %lu byte(s)\n", sizeof(long int));
	printf("the size of long long int is: %lu byte(s)\n", sizeof(long long int));
	printf("the size of float is: %lu byte(S)\n", sizeof(float));
	return(0);
}
