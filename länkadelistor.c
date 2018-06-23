#include <stdlib.h>
#include <stdio.h>

int main()
{
  int test=5;
  int test2=5;

  printf("%d", (test+test2)/2%10 );
  return 0;
}

/*int data[10], i = 0, j = 0;
for ( j = 0; j < 10; j++)
{
  printf("I IS: %d DATA IS %d \n ",i,data[j]);
  data[i++] = i;

}*/
