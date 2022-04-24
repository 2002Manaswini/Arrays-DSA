//finding duplicates in unsorted array

#include<stdio.h>

int main()
{

int n=10;
int arr[]={8,3,6,4,6,5,6,8,2,7};

int i,j;
int count;


for(i=0;i<n-1;i++)
{
    count=1;
    if(arr[i]!= -1)
    {
       for(j=i+1;j<n;j++)
      {
        if(arr[i]==arr[j])
         {
          count++;
          arr[j]=-1;
         }
      }
   if(count>1)
        printf("%d is printed %d times.\n",arr[i],count);
   }
}


return 0;
}