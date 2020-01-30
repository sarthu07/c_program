#include<stdio.h>
#include<string.h>
void main()
{int len=0;
char a[100];
gets(a);
char *i;
i=a;
for (i ; *i!='\0'; i++) 
       len++; 
       
printf("%d",len);

}
