#include <stdlib.h>
#include <stdio.h>

int main()
{
int x,y,z;
  x=0;
  y=1;

  do
  {
    printf("%d\n",x);
    z=x+y;
    x=y;
    y=z;
  } while(x < 1337);

  return 0;
}
