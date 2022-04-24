#include<stdio.h>

int main()
{
    int arr[]={5,8,3,9,6,2,10,7,-1,4};

    int min=arr[0];
    int max=arr[0];
    int n=10;
    int i;

    for(i=1;i<n;i++)
    {
        if(arr[i] < min)
          min=arr[i];
        
        else
         if(arr[i] > max)
           max=arr[i];
    }

    printf("%d is maximum.\n",max);
    printf("%d is minimum.\n",min);

    return 0;
}