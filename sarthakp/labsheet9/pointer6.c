#include <stdio.h> 
#include <string.h> 

void reverseString(char* str) 
{ int l, i; 
char *bptr, *eptr, ch; 
l = strlen(str); 
bptr = str; 
eptr = str; 
for(i=0;i< l-1 ;i++)
 eptr++;

for (i = 0; i < l / 2; i++) 
{ ch = *eptr; 
*eptr = *bptr; 		
*bptr = ch; 
   bptr++;
   eptr--; } 
} 

void main() 
{ 

char str[100] ;
gets(str);
printf("Enter a string: %s\n", str); 

reverseString(str); 

printf("Reverse of the string: %s\n", str); 

 
} 


