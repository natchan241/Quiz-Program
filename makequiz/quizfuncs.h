void printAnswersByPtr(struct Answer* Answer)
{
  printf("RESULTS:\n");
  printf("  Category Chosen: %s\n", Answer->category);
  printf("  Number of Questions: %d\n", Answer->numbquest);
  printf("  Number of Questions Correct: %d\n", Answer->correct);
  printf("  Number of Questions Incorrect: %d\n", Answer-> incorrect);
  printf("To find out details on what you got on your quiz, visit: http://rpi09/nat241/quizappres.html");
}

void verifystring(char name);

void verifyint(float a);
