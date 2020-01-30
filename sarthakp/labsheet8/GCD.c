#include<stdio.h>
int main()
{
 int i,j,k;
 scanf("%d%d",&i,&j);
 k=gcd(i,j);
 printf("%d\n",k);
}

int gcd(int x, int y)
{
 int min,i;
   if(x>y)
   min=y;
   else
   min=x;
   for(i=min;i>0;i--)
   {
    if(x%i==0&&y%i==0)
     break;
   }
  return i;
}

