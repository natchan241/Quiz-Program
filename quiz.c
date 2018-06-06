
#include <stdio.h>
#include <string.h>

int main()
{

char category[400];
char input[500];
int answerq1;\
char name[400];
FILE *file;
int score = 0;


printf("Hi! Welcome to Quizzy, all about the dopest subject: MATH!\n");
printf("First, let's start by getting your name\n");
fgets(input, 256, stdin);
sscanf(input, "%s", &name);
printf("Welcome %s, you're dope\n", name);
file = fopen("answers", "wt");
fprintf(file, "Player: %s\n", name);
        



printf("We're about to get going, what category would you like?\n Here are your options:\n Addition\n Subtraction\n Calculus\n Geometry\n Natalee Creators\n");

fgets(input, 256, stdin);
sscanf(input, "%s", &category);

if (strcmp ("Addition", category) == 0) 
	{
	printf("OK, your chose category is %s, let's load up your first question.\n", category);
	//randquest
	}


if (strcmp ("Subtraction", category) == 0) 
        {
        printf("OK, your chose category is %s, let's load up your first question.\n", category);
        printf("What is 6 + 7? \n");
        fgets(input, 256, stdin);
        sscanf(input, "%d", &answerq1);
	fprintf(file, "Your answer to first question is: %d\n The Correct Answer is: 13", answerq1);

	if (answerq1 == 13)
	{printf("Correct! You're a math wizard, %s\n", name);
	fprintf(file, "\nCorrect!\n");
	score++;}
	else {printf("You're wrong, sorry bro\n");
	fprintf(file, "\n Incorrect!\n");
	}
	printf("On to the next question...\n ");
	printf("What is 566 + 77? \n");
        fgets(input, 256, stdin);
        sscanf(input, "%d", &answerq1);
        fprintf(file, "Your answer to second question is: %d\n The Correct Answer is: 643", answerq1);

	if (answerq1 == 643)
        {printf("Correct! You're a math wizard, %s\n", name);
        fprintf(file, "\nCorrect!\n");
        score++;}
        else {printf("You're wrong, sorry bro\n");
        fprintf(file, "\n Incorrect!\n");}
	
	printf("On to the next question...\n ");
        printf("What is 372 + 783? \n");
        fgets(input, 256, stdin);
        sscanf(input, "%d", &answerq1);
        fprintf(file, "Your answer to second question is: %d\n The Correct Answer is: 1155", answerq1);

	if (answerq1 == 1155)
        {printf("Correct! You're a math wizard, %s\n", name);
        fprintf(file, "\nCorrect!\n");
        score++;}
        else {printf("You're wrong, sorry bro\n");
        fprintf(file, "\n Incorrect!\n");}


	}


if (strcmp ("Calculus", category) == 0) 
        {
        printf("OK, your chose category is %s, let's load up your first question.\n", category);
        //randquest
	}


if (strcmp ("Geometry", category) == 0) 
        {
        printf("OK, your chose category is %s, let's load up your first question.\n", category);
        //randquest
	}


if (strcmp ("Creators", category) == 0) 
        {
        printf("OK, your chose category is %s, let's load up your first question.\n", category);
        //randquest
	}

}
