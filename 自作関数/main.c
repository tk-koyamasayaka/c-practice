#include <stdio.h>

int sum(int);

int main(void)
{
  sum(50);
  return 0;
}

int sum(int max)
{
  printf("Hello world%d", max);
  return 0;
}