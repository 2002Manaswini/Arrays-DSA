// find a single missing element in the sequence of sorted array.


#include<stdio.h>

int main()
{
    int arr[8]={1,2,3,4,6,7,8,9};

    int i,missing;
    int sum=0;
    int s;
    int n=9;
    for(i=0;i<8;i++)
    {
        sum=sum+arr[i];
    }
    s=n*(n+1)/2; //using sum of first n natural numbers formula
 
    missing=s-sum;

    printf("The missing number is : %d",missing);

    return 0;
}
