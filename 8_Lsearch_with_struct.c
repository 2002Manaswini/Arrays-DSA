#include<stdio.h>

struct array
{
  int a[10];
  int size;
  int length;
};

int search(struct array arr,int key)
{
  int i;
for(i=0;i<arr.length;i++)
  {
      if( key == arr.a[i])
           return i; //return the index where the key value is present
  }
     return -1;
}


int main()
{
    struct array arr={{33,5,44,89,90},10,5};
    printf("%d " , search(arr,44));
    return 0;
}