#include <stdio.h>
int main()
   {

  int a, b;

  // initialize first and second terms
  int c1 = 0, c2 = 1;

  // initialize the next term (3rd term)
  int nextTerm = c1 + c2;

  // get no. of terms from user
  printf("Enter the number of terms: ");
  scanf("%d", &b);

  // print the first two terms t1 and t2
  printf("Fibonacci Series: %d, %d, ", c1, c2);

  // print 3rd to nth terms
  for (a = 3; a <= b; ++a) {
    printf("%d, ", nextTerm);
    c1 = c2;
    c2 = nextTerm;
    nextTerm = c1 + c2;
  }
  
   }
