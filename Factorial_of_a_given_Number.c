#include<stdio.h>
int main()
{
    int i,n,r=1,c;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        r=i*r;
    }
    printf("%d ",r);
}