#include<stdio.h>
int main()
{
    int i,n,r,ds=0,c=1;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        ds=ds+r;
        c=c*r;
        n=n/10;
    }
    if(ds==c)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}