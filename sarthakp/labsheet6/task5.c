#include<stdio.h>

void main()
{
int a,b,i,j,k;
scanf("%d",&i);
scanf("%d",&j);
float m[i][j];
for(a=0;a<i;a++)
{for(b=0;b<j;b++)
{
scanf("%f",&m[a][b]);
}}
for(a=0;a<i;a++)
{for(b=0;b<j;b++)
{
printf("%f",m[a][b]);
}
}
for(a=0;a==i-1 || a==0;a++)
{for(b=0;b==j-1 || b==0;b++)
{
         k=m[a][b];
         m[a][b]=k;
}}
     for(a=0;a!=i-1 || a!=0;a++)
     {for(b=0;b!=j-1 || b!=0;b++)
{
         k=m[a][b]+1;
         m[a][b]=k;
}}
for(a=0;a<i;a++)
{for(b=0;b<j;b++)
{
printf("%f",m[a][b]);
}printf("\n");
}
}
