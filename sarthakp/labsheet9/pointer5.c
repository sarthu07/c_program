#include<stdio.h>
#include<string.h>
void main()
{
int n,i;
printf("enter the size of array");
scanf("%d",&n);
int a[n],b[n],k[n],s[n],m[n];
int *pa,*pb,*pk,*ps,*pm;
         pa=a;
         pb=b;
         pk=k;
         ps=s;
for(i=0;i<n;i++)
{scanf("%d",&a[i]);}
for(i=0;i<n;i++)
{scanf("%d",&b[i]);}
for(i=0;i<n;i++)
{
*pk= *pa + *pb;
pk++;
pb++;
pa++;
}printf("the sum is\n");
for(i=0;i<n;i++)
{
printf("%d",k[i]);
printf("\n");
}
              pa=a;
              pb=b;
for(i=0;i<n;i++)
{if( *pa >  *pb )
*ps= *pa - *pb;
else
*ps= *pb - *pa;
ps++;
pb++;
pa++;
}
printf("the subtrated array is\n");
for(i=0;i<n;i++)
{
printf("%d",s[i]);
printf("\n");}

    


}
