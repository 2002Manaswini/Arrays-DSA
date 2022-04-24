#include<stdio.h>

int main()
{

int n=10;
int arr[]={3,4,6,6,7,20,25,25,30,80};

int i=0;
int lastdup=0;

for(i=0;i<n;i++)
{
    if(arr[i]==arr[i+1] && arr[i]!=lastdup)
             printf("%d\n",arr[i]);
             lastdup=arr[i];
}

return 0;
}