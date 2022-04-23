#include<stdio.h>

int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d",&n);

    int arr[n],i;

    printf("Enter elements :");
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Displaying elements :\n");

   for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }


    return 0;
}