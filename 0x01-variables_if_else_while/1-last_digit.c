#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* more headers goes there */

/**
 * main - Entry point of program
 * Return: 0
 * Betty style doc for function main goes there
 */

int main(void) {
  int n;
  int l;

  srand(time(0));
  n = rand() - RAND_MAX / 2;

  /* your code goes there */

  l = (n % 10);

  if (l > 5) {
    printf("Last digit of %d is %d and is greater than 5\n", n, l);

  }

  else if ((l < 6) && (l != 0))

  {
    printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);

  }

  else {
    printf("Last digit of %d is 0 and is 0\n", n);
  }

  return (0);
}