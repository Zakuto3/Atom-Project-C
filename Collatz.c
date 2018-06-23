#include <stdlib.h>
#include <stdio.h>

int main()
{
int x,r;
while (1)
{
  x=0;
  r=0;
  printf("\nEnter starting point(Number): ");
  scanf("%d", &x);
  //fflush(stdin);
  do
  {
    r++;
    printf("%d\n",x);
    if (x%2 == 0)
    {
      x = x/2;
    }
    else
    {
      x = 3*x+1;
    }
  } while(x != 1);
  printf("%d\nTimes of Operation: %d",x,r);
}
  return 0;
}
