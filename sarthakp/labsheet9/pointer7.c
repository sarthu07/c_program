#include<stdio.h>
#include<string.h>
void stcat (char *str1, char *str2,int len)
{
int i = 0;
while(*(str2+i)!='\0')
{
*(str1+len) = *(str2+i);
i++;
len++;
}
*(str1+len) = '\0';
}
void main()
{int a;
char str1[100], str2[100];
printf(" ENTER THE FIRST STRING…: ");
gets(str1);
printf("\n ENTER THE SECONDARY STRING…: ");
gets(str2);
a=strlen(str1);
stcat(str1,str2,a);
printf(" \n THE CONCATENATED STRING IS…: ");
puts(str1);

}

