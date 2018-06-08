#include "quizfuncs.h"
#include <stdio.h>
#include <string.h>

int main()
{
  //Define variables
  char category[256];
  char name [256];
  int answerq1;
  int answerq2;
  int answerq3;
  int answerq4;
  FILE *file;
  int score = 0;
  char choice[256];

  printf("Hi! Welcome to Quizzy, all about the dopest subject: MATH!\n");
  printf("First, let's start by getting your name\n");
  verifystring(name);
  printf("Welcome %s, you're dope\n", name);
  file = fopen("answers", "wt");
  fprintf(file, "Player: %s\n", name);
  

  printf("We're about to get going, what category would you like?\n Here are your options:\n Addition\n Subtraction\n Calculus\n Geometry\n");

  while (1)
  {
    verifystring(category);

    //Subtraction
    if (strcmp ("Subtraction", category) == 0 || strcmp ("subtraction", category) == 0) 
    {
      //Question 1
      printf("OK, your chose category is %s, let's load up your first question.\n", category);
      printf("What is 6 - 5? \n");
      answerq1 = verifyint(answerq1);
      fprintf(file, "Your answer to first question is: %d\n The Correct Answer is: 1", answerq1);
      
      if (answerq1 == 1)
      {
	printf("Correct! You're a math wizard, %s\n", name);
	fprintf(file, "\nCorrect!\n");
	score++;
      }
      else
      {
	printf("You're wrong, sorry bro\n");
	fprintf(file, "\n Incorrect!\n");
      }

      //Question 2
      printf("OK, your chose category is %s, let's load up your first question.\n", category);
      printf("What is 76-9? \n");
      answerq2 = verifyint(answerq2);
      fprintf(file, "Your answer to second question is: %d\n The Correct Answer is: 67", answerq2);
      
      if (answerq2 == 67)
      {
	printf("Correct! You're a math wizard, %s\n", name);
	fprintf(file, "\nCorrect!\n");
	score++;
      }
      else
      {
	printf("You're wrong, sorry bro\n");
	fprintf(file, "\n Incorrect!\n");
      }

      //Question 3
      printf("OK, your chose category is %s, let's load up your first question.\n", category);
      printf("What is 546 - 343? \n");
      answerq3 = verifyint(answerq3);
      fprintf(file, "Your answer to third question is: %d\n The Correct Answer is: 203", answerq3);

      if (answerq3 == 203)
      {
	printf("Correct! You're a math wizard, %s\n", name);
	fprintf(file, "\nCorrect!\n");
	score++;
      }
      else {
	printf("You're wrong, sorry bro\n");
	fprintf(file, "\n Incorrect!\n");
      }
      
      printf("Your Score is %d\n", score);
      contingame(choice);
      
    }
    
    //Addition
    else if (strcmp ("Addition", category) == 0 || strcmp ("addition", category) == 0) 
    {
      //Question 1
      printf("OK, your chose category is %s, let's load up your first question.\n", category);
      printf("What is 6 + 7? \n");
      answerq1 = verifyint(answerq1);
      fprintf(file, "Your answer to first question is: %d\n The Correct Answer is: 13", answerq1);
      
      if (answerq1 == 13)
      {
	printf("Correct! You're a math wizard, %s\n", name);
	fprintf(file, "\nCorrect!\n");
	score++;
      }
      else
      {
	printf("You're wrong, sorry bro\n");
	fprintf(file, "\n Incorrect!\n");
      }

      //Question 2
      printf("On to the next question...\n ");
      printf("What is 566 + 77? \n");
      answerq2 = verifyint(answerq2);
      fprintf(file, "Your answer to second question is: %d\n The Correct Answer is: 643", answerq2);
      
      if (answerq2 == 643)
      {
	printf("Correct! You're a math wizard, %s\n", name);
	fprintf(file, "\nCorrect!\n");
	score++;
      }
      else
      {
	printf("You're wrong, sorry bro\n");
	fprintf(file, "\n Incorrect!\n");
      }

      //Question 3
      printf("On to the next question...\n ");
      printf("What is 372 + 783? \n");
      answerq3 = verifyint(answerq3);
      fprintf(file, "Your answer to third question is: %d\n The Correct Answer is: 1155", answerq3);
      
      if (answerq1 == 1155)
      {
	printf("Correct! You're a math wizard, %s\n", name);
	fprintf(file, "\nCorrect!\n");
	score++;
      }
      else {
	printf("You're wrong, sorry bro\n");
	fprintf(file, "\n Incorrect!\n");
      }
      
      printf("Your score is %d\n", score);
      contingame(choice);
    }
    
    //Calculus
    else if (strcmp ("Calculus", category) == 0 || strcmp ("calculus", category) == 0) 
    {
      //Question 1
      printf("OK, your chose category is %s, let's load up your first question.\n", category);
      printf("What is the limit as x approaches 4 of f(x) = x + 7 \n");
      answerq1 = verifyint(answerq1);
      fprintf(file, "Your answer to first question in the category of %s is: %d\n The Correct Answer is  11\n", category, answerq1);
      
      if (answerq1 == 11)
      {
	printf("Correct! You're a math wizard, %s\n", name);
	fprintf(file, "\nCorrect!\n");
	score++;
      }
      else
      {
	printf("You're wrong, sorry bro\n");
	fprintf(file, "\n Incorrect!\n");
      }

      //Question 2
      printf("What is the derivative of f(x) = 6 ? \n");
      answerq2 = verifyint(answerq2);
      fprintf(file, "Your answer to second question in the category of %s  is: %d\n The Correct Answer is 0\n", category, answerq2);

      if (answerq2 == 0)
      {
	printf("Correct! You're a math wizard, %s\n", name);
	fprintf(file, "\nCorrect!\n");
	score++;
      }
      else
      {
	printf("You're wrong, sorry bro\n");
	fprintf(file, "\n Incorrect!\n");
      }

      //Question 3
      printf("What is the derivative of f(x) = 24x ? \n");
      answerq3 = verifyint(answerq3);
      fprintf(file, "Your answer to third question in the category of %s  is %d\n and the correct answer is 24\n", category, answerq3);
      
      if (answerq3 == 24)
      {
	printf("Correct! You're a math wizard, %s\n", name);
	fprintf(file, "\nCorrect!\n");
	score++;
      }
      else
      {
	printf("You're wrong, sorry bro\n");
	fprintf(file, "\n Incorrect!\n");
      }

      //Question 4
      printf("What is the limit as x approaches 4 of f(x) = x + 9\n");
      answerq4 = verifyint(answerq4);
      fprintf(file, "Your answer to fourth question in the category of %s  is %d\n and the correct answer is 13\n", category, answerq4);
      
      if (answerq4 == 13)
      {
	printf("Correct! You're a math wizard, %s\n", name);
	fprintf(file, "\nCorrect!\n");
	score++;
      }
      else
      {
	printf("You're wrong, sorry bro\n");
	fprintf(file, "\n Incorrect!\n");
      }
      
      printf("Your score is: %d\n", score);
      contingame(choice);
    }
    
    //Geometry
    else if (strcmp ("Geometry", category) == 0 || strcmp ("geometry", category) == 0) 
    {
      //Question 1
      printf("OK, your chose category is %s, let's load up your first question.\n", category);
      printf("What is the volume of a cube with side lengths of 8?\n");
      answerq1 = verifyint(answerq1);
      fprintf(file, "Your answer to first question in the category of %s  is %d\n and the correct answer is 512\n", category, answerq1);        
      
      
      if (answerq1 == 512)
      {
	printf("Correct! You're a math wizard, %s\n", name);
	fprintf(file, "\nCorrect!\n");
	score++;
      }
      else
      {
	printf("You're wrong, sorry bro\n");
	fprintf(file, "\n Incorrect!\n");
      }      

      //Question 2
      printf("OK, your chose category is %s, let's load up your first question.\n", category);
      printf("What is the surface area of a cube with side lengths of 8?\n");
      answerq2 = verifyint(answerq2);
      fprintf(file, "Your answer to second question in the category of %s is %d\n and the correct answer is 192\n", category, answerq2);
      
      if (answerq2 == 384)
      {
	printf("Correct! You're a math wizard, %s\n", name);
	fprintf(file, "\nCorrect!\n");
	score++;
      }
      else
      {
	printf("You're wrong, sorry bro\n");
	fprintf(file, "\n Incorrect!\n");
      }
      
      printf("Your score is: %d\n", score);
      contingame(choice);
      
    }
    else
    {
      printf("Not a valid category - Try again! :(\n");
    }
  }
}
