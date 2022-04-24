// avg() -->  finding the average of all the elements of the array

#include<stdio.h>
#include<stdlib.h>

struct array
{
    int a[20];
    int size;
    int length;
};

int average(struct array arr,int n)
{
  int avg=0;
  int sum=0;
  for(int i=0;i<arr.length;i++)
  {
    sum=sum+arr.a[i];
  }
     avg=sum/n;
  return avg;
}

int main()
{
    struct array arr1={{2,3,4,5,6},20,5};
    printf("%d ",average(arr1,5));

    return 0;
}