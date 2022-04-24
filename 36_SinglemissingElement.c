//time taken --> o(n)


#include<stdio.h>

int main()
{
    int arr[8]={6,7,8,9,11,12,13,14};

    int i;
    int n=8;
    int l=6;
    int h=14;
 
    int diff=l-0;
    int missing;

    for(i=0;i<n;i++)
    {
       if(arr[i]-i != diff)
                  missing=i+diff;
    }
    
    printf("The missing number is : %d",missing);

    return 0;
}
