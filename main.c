#include <stdio.h>
#include <stdlib.h>

void func(void)
{
     int x;
     printf("func x is at %p\n", &x);
}

int main(void)
{
    int x;
    printf("main x is at %p\n", &x);
    func();
    
  system("PAUSE");	
  return 0;
}
