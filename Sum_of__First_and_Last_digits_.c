#include<stdio.h>
int main()
{
    int i,n,a;
    scanf("%d",&n);
    a=n%10;
    while(n>0)
    {
        i=n%10;
        n=n/10;
    }
    printf("%d ",a+i);
}