
/*C Program To Sort data in ascending order using bubble sort.*/
#include <stdio.h>
void bubbleSort(int data[],int n);
void quicksort(int number[],int first,int last);

int main()
{
  int data[100],i,n;
  printf("Enter the number of elements to be sorted: ");
  scanf("%d",&n);
  for(i=0;i<n;++i)
  {
      printf("%d. Enter element: ",i+1);
      scanf("%d",&data[i]);
  }
  //bubbleSort(data,n);
  quicksort(data,0,n-1);

  printf("In ascending order: ");
  for(i=0;i<n;++i)
    printf("%d  ",data[i]);

  return 0;
}
//gain globe puppy sight before lemon symptom sample hover cave vague jump

void quicksort(int *number,int first,int last){
   int i, j, pivot, temp;

   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(number[i]<=number[pivot]&&i<last)
            i++;
         while(number[j]>number[pivot])
            j--;
         if(i<j){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }

      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      quicksort(number,first,j-1);
      quicksort(number,j+1,last);

   }
}

void bubbleSort(int data[],int n)
{
  int i,step,temp;
  for(step=0;step<n-1;++step)
  for(i=0;i<n-step-1;++i)
  {
      if(data[i]>data[i+1])   /* To sort in descending order, change > to < in this line. */
      {
          temp=data[i];
          data[i]=data[i+1];
          data[i+1]=temp;
      }
  }
}
/*
#define  MAX_LEVELS  1000
int  piv, beg[MAX_LEVELS], end[MAX_LEVELS], i=0, L, R;

beg[0]=0; end[0]=size;

while (greaterThanOrEqualTo(i,0,statistics)) {
  L=beg[i];
  R=end[i]-1;

  if (lessThan(L,R,statistics)) {
    piv=arrayToSort[L];
    while (lessThan(L,R,statistics))
    {
      while (greaterThanOrEqualTo(arrayToSort[R],piv,statistics) && lessThan(L,R,statistics))
        R--;
      if (lessThan(L,R,statistics))
      {
        arrayToSort[L]=arrayToSort[R];
        L++;
      }
      while (lessThanOrEqualTo(arrayToSort[L],piv,statistics) && lessThan(L,R,statistics))
        L++;
      if (lessThan(L,R,statistics))
      {
        arrayToSort[R]=arrayToSort[L];
        R--;
      }
    }

    arrayToSort[L]=piv;
    beg[i+1]=L+1;
    end[i+1]=end[i];
    end[i]=L;
    i++;
  }
else {
i--; }}
*/
