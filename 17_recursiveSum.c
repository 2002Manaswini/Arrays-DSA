// time taken --> o(n)

#include<stdio.h>
#include<stdlib.h>

struct array
{
    int a[20];
    int size;
    int length;
};

int sum(struct array arr,int n)
{
   if(n<0)
     return 0;
   else
     return (sum(arr,n-1)+arr.a[n]);
}

int main()
{
    struct array arr1={{2,3,40,5,6},20,5};
    printf("sum is %d ",sum(arr1,4));  // 5-1 = 4 
    return 0;
}