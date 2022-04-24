//with pointers
//creating array in heap

#include<stdio.h>
#include<stdlib.h>

struct array
{
    int *a;
    int size;
    int length;
};

void dis(struct array arr)
{
    int i;
    printf("Displaying elements : ");
    for(i=0;i<arr.length;i++)
    {
      printf("%d ",arr.a[i]);
    }
}

int main()
{
    struct array arr;
    int i,n;
    arr.length=0;

    printf("Enter size of array : ");
    scanf("%d",&arr.size);

    arr.a=(int *)malloc(arr.size*sizeof(int));
      
    printf("Enter the number of elements :");
    scanf("%d",&n);

    printf("Enter elements :");
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr.a[i]);
    }

    arr.length=n;
   
    dis(arr);
    return 0;
}