#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum,s;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            sum=a[i];
            printf("%d ",a[i]);
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            s=a[i];
            printf("%d ",a[i]);
        }
    }
    
}

