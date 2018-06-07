
#include <stdio.h>
#include <string.h>

int main()
{

char category[400];
char input[500];
int answerq1;
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
        



printf("We're about to get going, what category would you like?\n Here are your options:\n Addition\n Subtraction\n Calculus\n Geometry\n");

fgets(input, 256, stdin);
sscanf(input, "%s", &category);

if (strcmp ("Subtraction", category) == 0) 
	{
	printf("OK, your chose category is %s, let's load up your first question.\n", category);
	printf("What is 6 - 7? \n");
        fgets(input, 256, stdin);
        sscanf(input, "%d", &answerq1);
        fprintf(file, "Your answer to first question is: %d\n The Correct Answer is: -1", answerq1);
	
	if (answerq1 == -1)
        {printf("Correct! You're a math wizard, %s\n", name);
        fprintf(file, "\nCorrect!\n");
        score++;}
        else {printf("You're wrong, sorry bro\n");
        fprintf(file, "\n Incorrect!\n");
        }
	
	printf("OK, your chose category is %s, let's load up your first question.\n", category);
        printf("What is 76-9? \n");
        fgets(input, 256, stdin);
        sscanf(input, "%d", &answerq1);
        fprintf(file, "Your answer to second question is: %d\n The Correct Answer is: 67", answerq1);

	if (answerq1 == 67)
        {printf("Correct! You're a math wizard, %s\n", name);
        fprintf(file, "\nCorrect!\n");
        score++;}
        else {printf("You're wrong, sorry bro\n");
        fprintf(file, "\n Incorrect!\n");
        }

	printf("OK, your chose category is %s, let's load up your first question.\n", category);
        printf("What is 546 - 343? \n");
        fgets(input, 256, stdin);
        sscanf(input, "%d", &answerq1);
        fprintf(file, "Your answer to third question is: %d\n The Correct Answer is: 203", answerq1);

	if (answerq1 == 203)
        {printf("Correct! You're a math wizard, %s\n", name);
        fprintf(file, "\nCorrect!\n");
        score++;}
        else {printf("You're wrong, sorry bro\n");
        fprintf(file, "\n Incorrect!\n");
        }

printf("Your Score is %d\n", score);

}


if (strcmp ("Addition", category) == 0) 
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
        fprintf(file, "Your answer to third question is: %d\n The Correct Answer is: 1155", answerq1);

	if (answerq1 == 1155)
        {printf("Correct! You're a math wizard, %s\n", name);
        fprintf(file, "\nCorrect!\n");
        score++;}
        else {printf("You're wrong, sorry bro\n");
        fprintf(file, "\n Incorrect!\n");}


printf("Your score is %d\n", score);
	}


if (strcmp ("Calculus", category) == 0) 
        {
        printf("OK, your chose category is %s, let's load up your first question.\n", category);
        printf("What is the limit as x approaches 4 of f(x)= x +7 \n");
        fgets(input, 256, stdin);
        sscanf(input, "%d", &answerq1);
        fprintf(file, "Your answer to first question in the category of %s is: %d\n The Correct Answer is  11\n", category, answerq1);

	 if (answerq1 == 11)
        {printf("Correct! You're a math wizard, %s\n", name);
        fprintf(file, "\nCorrect!\n");
        score++;}
        else {printf("You're wrong, sorry bro\n");
        fprintf(file, "\n Incorrect!\n");}

	printf("What is the derivative of f(x)= 6 ? \n");
        fgets(input, 256, stdin);
        sscanf(input, "%d", &answerq1);
        fprintf(file, "Your answer to second question in the category of %s  is: %d\n The Correct Answer is 0\n", category, answerq1);

	if (answerq1 == 0)
        {printf("Correct! You're a math wizard, %s\n", name);
        fprintf(file, "\nCorrect!\n");
        score++;}
        else {printf("You're wrong, sorry bro\n");
        fprintf(file, "\n Incorrect!\n");}

  printf("What is the derivative of f(x)= 24x ? \n");
        fgets(input, 256, stdin);
        sscanf(input, "%d", &answerq1);
        fprintf(file, "Your answer to third question in the category of %s  is %d\n and the correct answer is 24\n", category, answerq1);

	if (answerq1 == 24)
        {printf("Correct! You're a math wizard, %s\n", name);
        fprintf(file, "\nCorrect!\n");
        score++;}
        else {printf("You're wrong, sorry bro\n");
        fprintf(file, "\n Incorrect!\n");}

	printf("What is the limit as x approaches 4 of f(x)=x+9\n");
	fgets(input, 256, stdin);
        sscanf(input, "%d", &answerq1);
        fprintf(file, "Your answer to fourth question in the category of %s  is %d\n and the correct answer is 13\n", category, answerq1);

	if (answerq1 == 13)
        {printf("Correct! You're a math wizard, %s\n", name);
        fprintf(file, "\nCorrect!\n");
        score++;}
        else {printf("You're wrong, sorry bro\n");
        fprintf(file, "\n Incorrect!\n");}	


printf("Your score is: %d\n", score);

	}


if (strcmp ("Geometry", category) == 0) 
        {
        printf("OK, your chose category is %s, let's load up your first question.\n", category);
	printf("What is the volume of a cube with side lengths of 8?\n");
        fgets(input, 256, stdin);
        sscanf(input, "%d", &answerq1);
        fprintf(file, "Your answer to first question in the category of %s  is %d\n and the correct answer is 512\n", category, answerq1);        

	
        if (answerq1 == 512)
        {printf("Correct! You're a math wizard, %s\n", name);
        fprintf(file, "\nCorrect!\n");
        score++;}
        else {printf("You're wrong, sorry bro\n");
        fprintf(file, "\n Incorrect!\n");}      

	printf("OK, your chose category is %s, let's load up your first question.\n", category);
        printf("What is the surface area of a cube with side lengths of 8?\n");
        fgets(input, 256, stdin);
        sscanf(input, "%d", &answerq1);
        fprintf(file, "Your answer to second question in the category of %s is %d\n and the correct answer is 192\n", category, answerq1);        

        




	}


}
