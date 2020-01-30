#include<stdio.h>
int sum(int n)
{
if(n==1)
return 1;
return (n+ sum(n-1));}
int fact(int n)
{
if(n==1)
return 1;
return(n*n + sum(n-1));
}
void main()
{
int i,j,n;
printf("enter the number\n");
scanf("%d",&n);
i=sum(n);
j=fact(n);
printf("the sum is");
printf("%d",i);
printf("\nthe factorial is");
printf("%d",j);
}
