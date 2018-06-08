#include "quizfuncs.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
  int yesno = 0;
  printf("Would you like to choose another category to quiz yourself on? Yes/No.\n");
  while (yesno < 1)
  {
    while (1)
    {
      fgets(input, 256, stdin);
      if (sscanf(input, "%s", choice) == 1) break;
      printf("Not a valid choice - Try again! :(\n");
    }
    
    if (strcmp("No", choice) == 0 || strcmp("no", choice) == 0)
    {
      printf("Ok! Good job, nano/emacs answers to see your results! Or visit http://rpi09/nat241/quizappres.html\n");
      exit(0);
    }
    else if (strcmp("Yes", choice) == 0 || strcmp("yes", choice) == 0)
    {
      printf("Choose another category! Your choices are:\n Addition\n Subtraction\n Calculus\n Geometry\n");
      yesno++;
    }
    else
    {
      printf("Not a valid answer. Type yes or no please.\n");
    }
  }
}
