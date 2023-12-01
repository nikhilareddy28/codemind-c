#include<stdio.h>
int main()
{
    int m,n,max,lcm;
    scanf("%d %d",&m,&n);
    max=(m>n)?
    m:n;
    while(1)
    {
       if(max % m==0 && max % n==0) 
       {
           lcm=max;
           break;
       }
       ++max;
    }
    printf("%d ",lcm);
}