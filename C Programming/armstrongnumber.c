#include <stdio.h>
int main()
   {
    int m, n, r,f = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &m);
   n = m;
   
    while (n != 0) 
    {
        r = n% 10;
        
      f += r * r * r;
      n /= 10;
    }

    if (f == m)
        printf("%d is an Armstrong number.", m);
    else
        printf("%d is not an Armstrong number.", m);

    return 0;
   }
