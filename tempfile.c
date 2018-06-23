#include <stdlib.h>
#include <stdio.h>
int multiply(int x, int y)
{
  if(x==0)
  return 0;
  if(x==1)
  {return y;}

  return y+multiply(x-1,y);

}
int main()
{
  int x=5,y=5;
  scanf("%d",&x);
  scanf("%d",&y);
  int sum = multiply(x,y);
  printf("SUMMA: %d\n",sum);

return 0;
}
//cr8 & add 2 file
/*fpointer = fopen("test.txt", "w");

fprintf(fpointer,"LETS PROGG DIS SHIIIZ");

fclose(fpointer);*/
/*
FILE * fpointer;
fpointer = fopen("test.txt","w+");
fprintf(fpointer, "And it was I who made that first point!");
fseek(fpointer,9,SEEK_SET);
fprintf(fpointer, " I");

fclose(fpointer);
return 0;*/
//open and read from file
/*
  FILE * fpointer;
  fpointer = fopen("test.txt", "r");

  char storeinfo[150];

  while (!feof(fpointer))
  {
      fgets(storeinfo,150,fpointer);
      puts(storeinfo);
  }

  fclose(fpointer);*/

// IF open check
/*
if(fp == NULL)
{
print("error");
}

(pcity+i)
pcity is pointer, +i is the index value

TO REMOVE \n
lastchar=strlen((pCities+i))->name);
(pCities+i)->name[ilastchar-1] = '\0';


AKTUEL:: "skicka ut pekare"
*/
