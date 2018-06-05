
#include <stdio.h>
#include <string.h>

int main()
{

char category[400];
char input[500];
char answerq1[40];
FILE *file;



printf("Hi! Welcome to Quizzy, all about the dopest facts in the world!\n");
printf("We're about to get going, what category would you like?\n Here are your options:\n Gross\n Kardashians\n Countries\n Animals\n Natalee and Alina\n");

fgets(input, 256, stdin);
sscanf(input, "%s", &category);

if (strcmp ("Kardasians", category) == 0) 
	{
	printf("OK, your chose category is %s, let's load up your first question.\n", category);
	//randquest
	}


if (strcmp ("Gross", category) == 0) 
        {
        printf("OK, your chose category is %s, let's load up your first question.\n", category);
        printf("Why are jelly beans so shiny? (what are they covered with?)\n");
        fgets(input, 256, stdin);
        sscanf(input, "%s", &answerq1);
	file = fopen("answers", "wt");
	fprintf(file, "Your nswer to first question is: %s\n The Correct Answer is: shellac", answerq1);
	

	if (strcmp ("shellac", answerq1) == 0)
	{printf("Correct! It's actually made from insect poop!\n");
	fprintf(file, "Correct!\n");}
	else printf("You're wrong, sorry bro\n");
	}


if (strcmp ("Countries", category) == 0) 
        {
        printf("OK, your chose category is %s, let's load up your first question.\n", category);
        //randquest
	}


if (strcmp ("Animals", category) == 0) 
        {
        printf("OK, your chose category is %s, let's load up your first question.\n", category);
        //randquest
	}


if (strcmp ("Best", category) == 0) 
        {
        printf("OK, your chose category is %s, let's load up your first question.\n", category);
        //randquest
	}

}
