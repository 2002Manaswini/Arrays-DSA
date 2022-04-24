// set(index) --> replacing value at a particular index by a new value

//  time taken --> constant

#include<stdio.h>
#include<stdlib.h>

struct array
{
    int a[20];
    int size;
    int length;
};

void display(struct array arr)
{
    int i;
    printf("Displaying elements : ");
    for(i=0;i<arr.length;i++)
    {
      printf("%d ",arr.a[i]);
    }
}

void set(struct array *arr,int x,int index)
{
  if(index>=0 && index<arr->length)
  {
     arr->a[index]=x;
  }
}

int main()
{
    struct array arr1={{2,3,4,5,6},20,5};
    set(&arr1,33,3);
    display(arr1);
    return 0;
}