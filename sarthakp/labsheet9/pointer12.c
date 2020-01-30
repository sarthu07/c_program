#include<stdio.h>
void main()
{
int n,i,k;
printf("the size of array");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);}
printf("the orignal array is this \n");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
printf("\n");}

int *pa,*pe;
pa=a;
pe=a;
for(i=0;i<n-1;i++)
{pe++;}

for(i=0;i<n/2;i++)
{
k=*pa;
*pa=*pe;
*pe=k;
pe--;
pa++;
}printf("the reverse array is this \n");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
printf("\n");
}



}
