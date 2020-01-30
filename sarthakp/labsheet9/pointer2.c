#include<stdio.h>
void main()
{
int i,j,a[5],k;
int *ptr;
for(i=0;i<5;i++)
scanf("%d",&a[i]);
ptr=a;
for(i=0;i<5;i++)
{for(j=0;j<5;j++)
{ 
if(*(ptr+j)>=*(ptr+i))
{
k=*(ptr+i);
*(ptr+i)=*(ptr+j);
*(ptr+j)=k;}}}
printf("sorted array is\n");
for(i=0;i<5;i++)
{printf("%d\n",ptr[i]);}}
