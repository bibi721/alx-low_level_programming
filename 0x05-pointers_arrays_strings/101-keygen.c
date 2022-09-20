include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - a program to generate random password
 * Return: 0
 */
int main(void)
{
	srand((unsigned int)(time(NULL)));
	int index = 0;

	 char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789/,.-+=~`<>:";

	 for(index = 0; index < 12; index++)
	 {
		 printf("%c", characters[rand() % (sizeof characters - 1)]);

	 }
	 printf('\n');
