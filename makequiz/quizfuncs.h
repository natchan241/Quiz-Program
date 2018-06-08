struct Answer {
  char category[256];
  int numbquest;
  int correct;
  int incorrect;
};

void printAnswersByPtr(struct Answer* Answer);

void verifystring(char name[]);

int verifyint(int a);

void contingame(char choice[]);
