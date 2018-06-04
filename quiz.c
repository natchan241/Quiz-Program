#include <stdio.h>
#include <string.h>

int main()
{

char category[400];
char input[500];

printf("Hi! Welcome to Quizzy, all about the dopest facts in the world!\n");
printf("We're about to get going, what category would you like?\n Here are your options:\n Gross\n Kardashians\n Countries\n Animals\n Natalee and Alina\n");

fgets(input, 256, stdin);
sscanf(input, "%s", &category);

if (strcmp ("gross", category) == 0) 
	{
	printf("OK, your chose category is %s, let's load up your first question.\n", category);
	//randquest

	}





}
