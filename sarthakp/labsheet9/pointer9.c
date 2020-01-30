#include <stdio.h> 
#include <string.h> 
void main()
{
  char a[100],b[100];
gets(a);
gets(b);
int l1,l2,i,count=0,k;
l1=strlen(a);
l2=strlen(b);
if(l1>l2)
{k=l1;}
else
k=l2;

char *pa,*pb;
pa=a;
pb=b;
for(i=0;i<k;i++)
{
if(*pa!=*pb)
{printf("the string is  not equal");
break;}
else 
count++;
}
if(count!=0)
{printf("the string is equal");}


}
