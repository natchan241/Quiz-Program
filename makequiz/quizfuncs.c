#include "quizfuncs.h"
#include <stdio.h>
#include <string.h>

void printAnswersByPtr(struct Answer* Answer)
{
  printf("RESULTS:\n");
  printf("  Category Chosen: %s\n", Answer->category);
  printf("  Number of Questions: %d\n", Answer->numbquest);
  printf("  Number of Questions Correct: %d\n", Answer->correct);
  printf("  Number of Questions Incorrect: %d\n", Answer-> incorrect);
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
