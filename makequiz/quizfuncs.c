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

void verifystring(char name)
{
  while (1)
  {
    fgets(input, 256, stdin);
    if (sscanf(input, "%s", &name) == 1) break;
    printf("Not a valid string - Try again! :(\n");
  }
}

void verifyint(float a)
{
  while (1)
  {
    fgets(input, 256, stdin);
    if (sscanf(input, "%d", &a) == 1) break;
    printf("Not a valid float number - Try again! :(\n");
  }
}
