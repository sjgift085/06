#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
    int i;
    int res = 1;
    
    for(i = 1; i <= n; i++)
          res = res * i;
          
    return res;
}

int combination(int n, int r)
{
     return(factorial(n)/factorial(n-r)/factorial(r));
}

int main(void)
{
    int n, r;
    int res;
    
    printf("n과 r을 입력하시오: ");
    scanf("%i %i", &n, &r);
    
    res = combination(n, r);
    
    printf("combination result is : %i\n", res);
    
  system("PAUSE");	
  return 0;
}
