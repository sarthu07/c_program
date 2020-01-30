#include<stdio.h>
void main()
{
int i,j,a,b;
scanf("%d",&i);
scanf("%d",&j);
int c[i][j];
int *pa;
pa=c;
for(a=0;a<i;a++)
     {for(b=0;b<j;b++)
        {scanf("%d",((pa+a)+b));}
       
     }

for(a=0;a<i;a++)
     {for(b=0;b<j;b++)
    { printf("  %d   ",(*(pa+a)+b));}
        printf("\n");                     }
     
     
     
     }
