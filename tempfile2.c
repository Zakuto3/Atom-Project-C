#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#define Length 10

void berakna(int arrf[Length],int *pnoll, int *ppos, int *pneg)
{
  assert(arrf[0] == 1);
  int i;
  for (i=0;i<Length;i++)
  {
    if (arrf[i]==0)
    {
      *pnoll = *pnoll +1;
    }
    else if(arrf[i]>0)
    {
      *ppos = *ppos+1;
    }
    else
    {
      *pneg=*pneg+1;
    }
  }
}

int main()
{
  int arr[Length];
  int i, noll=0,pos=0,neg=0;
  for (i = 0; i < Length; i++)
  {
    printf("ange tal %d: ",i+1);
    scanf("%d", &arr[i]);
  }
  berakna(arr,&noll,&pos,&neg);
  printf("\narrayen: \n");
  for (i = 0; i <Length; i++)
  {
    printf("\t%d  ",arr[i]);
  }
  printf("\nantal pos tal: %d",pos );
  printf("\nantal neg tal: %d",neg );
  printf("\nantal noll tal: %d",noll );
  return 0;
}
int removeElement(List *list, const Data data)
{
   if (isEmpty(*list))
   {
        printf("List is Empty");
        return 0; //Ersatt med ratt returvarde
   }

    List current = *list;
    do
    {
        if (!(current->data==data))
        {
            current=current->next;
        }
        else if(current == *list)
        {
            removeFirst(list);
            return 1;
        }
        else
        {
            removeLast(&current->next);
            return 1;
        }
    }
    while (*list != current->next->prev);//ends at the last node
}
