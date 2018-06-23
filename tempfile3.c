#include <stdlib.h>
#include <stdio.h>
struct kurs
{
  char kursnamn[30];
  char kurskod[10];
  float hp;
  int betyg;
};

void inmatning(struct kurs *tempkurs)
{

  printf("ange kursnamn: ");
  gets(tempkurs->kursnamn);
  printf("ange kurskod: ");
  gets(tempkurs->kurskod);
  printf("antal hp: ");
  scanf("%f",&tempkurs->hp);
  printf("ange betyg: ");
  scanf("%d", &tempkurs->betyg);

}

void funk(int x)
{
  if (x>0)
  {
    printf("!");
    funk(x-1);
  }
}

int main()
{
  int x=0;
  struct kurs kurs1;
  scanf("%d",&x);
  printf("%d\n",x );
  funk(x);
  //inmatning(&kurs1);
  //printf("kursen:\n%s\n%s\n%.1f\n%d\n",kurs1.kursnamn,kurs1.kurskod,kurs1.hp,kurs1.betyg);
  return 0;
}




/*
struct bil {
char model[10];
int hast;
int antaldor;
int tillvar;
};

int main(void)
{
struct bil flerabilar[3];
}

inmatning(struct bil *tempbil)
inmatning(&minbil);
scanf(%s,(*tempbil).model); = tempbil->model
*/
/*int removeElement(List *list, const Data data)
{
   if (!isEmpty(*list)==1)
   {
      List current = *list;
      do
      {
         if (current->data==data)
         {
            if (current == *list)
            {
               removeFirst(list);
            }
            else
            {1
               removeLast(&current->next);
            }
            return 1;
         }
         current=current->next;
      }
      while (*list != current->next->prev);//ends at the last node
   }
   printf("List is Empty");
   return 0;
}
*/
