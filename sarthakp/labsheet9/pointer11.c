#include<stdio.h>

void main()
{
int n,i,k;
printf("enter the size of array");
scanf("%d",&n);
int a[n],b[n];
int *pa,*pb;
         pa=a;
         pb=b;
for(i=0;i<n;i++)
{scanf("%d",&a[i]);}
for(i=0;i<n;i++)
{scanf("%d",&b[i]);}


printf("the array is this\n");
for(i=0;i<n;i++)
{printf("%d",a[i]);
printf("\n");}
for(i=0;i<n;i++)
{printf("%d",b[i]);
printf("\n");}

for(i=0;i<n;i++)
{
     k=*pa;
     *pa=*pb;
     *pb=k;
pa++;
pb++;



}
printf("the reverse array is\n");
for(i=0;i<n;i++)
{printf("%d",a[i]);printf("\n");}
for(i=0;i<n;i++)
{printf("%d",b[i]);printf("\n");}}
