#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return : Always 0
 *
 */
int main(void)
{
  int n;

  srand(time(0));

  n = rand() + RAND_MAX / 2;
  printf("%d\n", n);
}

