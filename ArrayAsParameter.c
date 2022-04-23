#include<stdio.h>

void dis(int arr[],int n)
{
    int i;
    printf("Elements are displayed : ");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}

int main()
{
    int n,i;

    printf("Enter n :");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    dis(arr,n);

    return 0;
}