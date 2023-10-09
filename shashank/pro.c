#include<stdio.h>
void main()
{
    int a[50],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i+=2)
    {
        printf("%d",(a[i])*2);
    }
}