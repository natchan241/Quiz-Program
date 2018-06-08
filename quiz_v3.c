#include <stdio.h>
#include <string.h>

struct Answer {
  char category[256];
  int numbquest;
  int correct;
  int incorrect;
};

void printAnswersByPtr(struct Answer* Answer)
{
  printf("RESULTS:\n");
  printf("  Category Chosen: %s\n", Answer->category);
  printf("  Number of Questions: %d\n", Answer->numbquest);
  printf("  Number of Questions Correct: %d\n", Answer->correct);
  printf("  Number of Questions Incorrect: %d\n", Answer->incorrect);
  printf("To find out details on what you got on your quiz, visit: http://rpi09/nat241/quizappres.html");
}

void verifystring(char string[])
{
  while (1)
  {
    char input[256];
    fgets(input, 256, stdin);
    if (sscanf(input, "%s", string) == 1) break;
    printf("Not a valid string - Try again! :(\n");
  }
}

int verifyint(int a)
{
  char input[256];
  while (1)
  {
    fgets(input, 256, stdin);
    if (sscanf(input, "%d", &a) == 1) break;
    printf("Not a valid integer number - Try again! :(\n");
  }
  return a;
}

void contingame(char choice[])
{
  char input[256];
  printf("Would you like to choose another category to quiz yourself on? Yes/No.\n");
  while (1)
  {
    fgets(input, 256, stdin);
    if (sscanf(input, "%s", choice) == 1) break;
    printf("Not a valid choice - Try again! :(\n");
  }
  if (strcmp("No", choice) == 0 || strcmp("no", choice) == 0)
  {
    printf("Ok! Good job, here are the results!");
  }
  else
  {
    printf("Choose another category!\n");
  }
}


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
    else if (strcmp ("Addition", category) == 0, strcmp ("addition", category) == 0) 
    {
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
      else {
	printf("You're wrong, sorry bro\n");
	fprintf(file, "\n Incorrect!\n");
      }
      
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
    else if (strcmp ("Calculus", category) == 0, strcmp ("calculus", category) == 0) 
    {
      printf("OK, your chose category is %s, let's load up your first question.\n", category);
      printf("What is the limit as x approaches 4 of f(x)= x +7 \n");
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
      
      printf("What is the derivative of f(x)= 6 ? \n");
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
      
      printf("What is the derivative of f(x)= 24x ? \n");
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
      
      printf("What is the limit as x approaches 4 of f(x)=x+9\n");
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
    else if (strcmp ("Geometry", category) == 0, strcmp ("geometry", category) == 0) 
    {
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
