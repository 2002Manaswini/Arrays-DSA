
#include<stdio.h>

int main()
{

int n=10;
int arr[]={3,4,6,6,7,20,25,25,30,80};

int i,j=0;

for(i=0;i<n;i++)
{
    if(arr[i]==arr[i+1])
            {
                j=i+1;
                while(arr[j]==arr[i])
                      j++;
                
                printf("\n%d is appearing %d times.",arr[i],j-i);
                i=j-1;
            } 
}

return 0;
}