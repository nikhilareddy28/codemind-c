#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,sum=0,s=0;
    scanf("%d",&n);
     int a[n];
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
     for(i=0;i<n;i++)
     {
         if(a[i]%2==0)
         {
             sum=sum+a[i];
         }
         if(a[i]%2!=0)
         {
             s=s+a[i];
         }
     }
     int x=abs(sum-s);
     printf("%d ",x);
}