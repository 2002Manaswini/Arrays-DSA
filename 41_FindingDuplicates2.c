// time --> O(n)

for(i=0;i<n;i++)
{
    H[arr[i]]++;
}

for(i=0;i<=max;i++)
{
    if(H[i] >1)
      printf("%d  %d",i,H[i]);
}