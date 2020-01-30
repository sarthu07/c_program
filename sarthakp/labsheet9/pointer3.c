#include<stdio.h>
void sort_array(int *ptr)
{int i,j,k;
for(i=0;i<5;i++)
{for(j=0;j<5;j++)
{ if(*(ptr+j)>=*(ptr+i))
{k=*(ptr+i);
*(ptr+i)=*(ptr+j);
*(ptr+j)=k;}}}}
     
    void main()
{int a,s,e[5],f[5],t;
int *pe,*pf;
printf("enter the values of first array");
for(a=0;a<5;a++)
   scanf("%d",&e[a]);
   printf("enter the values of second array");
for(a=0;a<5;a++)
  scanf("%d",&f[a]);
int g[10];
 sort_array(e);
 sort_array(f);
    pe=e;
    pf=f;

for(t=0;t<10;t++)
{
if(*(pe)<=*(pf))
{g[t]=*pe;
pe++;}
else if(*(pe)>*(pf))
{
g[t]=*pf;
pf++;}
}
for(t=0;t<10;t++)
{printf("%d \n",g[t]);
}}
