#include<stdio.h>
int main()
{
   int i,j,r,c;
   scanf("%d%d",&r,&c);
   int a[r][c];
   for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
           scanf("%d",&a[i][j]);
       }
   }
   int se,flag;
   scanf("%d",&se);
   for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
           if(se==a[i][j])
           {
               flag=1;
               break;
           }
           
       }
   }
   if(flag==1)
   {
       printf("1");
   }
   else
   {
       printf("0");
   }
}
