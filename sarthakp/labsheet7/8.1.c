#include<stdio.h>
int iseven(int);
int isodd(int);
int isprime(int);
int SOFN(int ,int ,int ,int ,int);
float avg(int ,int ,int ,int ,int);
int min(int ,int ,int);
int max(int ,int ,int);
int amst(int);
int rev(int);
int sod(int);
int main()
{
	int x,y,z,o,p,a,b,c,d,f,g,h,i,j,k;
	float e;

	printf("Enter the 5 nos:\n");
	scanf("%d %d%d%d%d",&x,&y,&z,&o,&p);
	
	a=iseven(x);
		if(a==1)
			printf("The no %d is even.\n",x);
		else
			printf("The no % is not even.\n",x);
	b=isodd(x);
		if(b==1)
			printf("The no %d is odd.\n",x);
		else
			printf("The no %d is not odd.\n",x);
	c=isprime(x);
		if(c==1)
			printf("The no %d is prime.\n",x);
		else
			printf("The no %d is not prime.\n",x);
	d=SOFN(x ,y ,z ,o ,p);
		printf("The sum of nos is :%d.\n",d);
	e=avg(x ,y ,z ,o ,p);
		printf("The average of nos is :%.2f.\n",e);
	f=min(x ,y ,z);
		printf("The min of nos is :%d.\n",f);
	g=max(x ,y ,z);
		printf("The max of nos is :%d.\n",g);
	h=amst(x);
		if(a==1)
			printf("The no %d is Amstrong no.\n",x);
		else
			printf("The no %d is not Amstrong.\n",x);
	i=rev(x);
		printf("The reverse of %d is :%d.\n",x,i);
	j=sod(x);
		printf("The sum of %d is :%d.\n",x,j);
return 0;
}
int iseven(int x)
{
int z=0;
	if(x%2==0)
	  z=1;
     return z;
}
int isodd(int x)
{
int z=0;
	if(x%2!=0)
	  z=1;
     return z;
}
int isprime(int x)
{
int z=0,c=0;
	for(int i=1;i<=x;i++)
	  {
		if(z%i==0)
		  c++;
	  }
	if(c==2)
	  z=1;
     return z;
}
int SOFN(int x ,int y ,int z ,int o ,int p)
{
int sum;
sum=x+y+z+o+p;
return sum;
}
float avg(int x,int y,int z,int o,int p)
{
float a,sum;
sum=x+y+z+o+p;
a=sum/5.0;
return a;
}
int min(int a,int b,int c)
{
int min;
if(a<=b&&a<=c)
min=a;
if(a>=b&&b<=c)
min=b;
if(c<=b&&a>=c)
min=c;
return min;
}
int max(int a,int b,int c)
{
int max;
if(a>=b&&a>=c)
max=a;
if(a<=b&&b>=c)
max=b;
if(c>=b&&a<=c)
max=c;
return max;
}
int amst(int x)
{
int i,a[10],sum=0,k,z=0;
k=x;
for(i=0;x!=0;i++)
{
a[i]=x%10;
a[i]=a[i]*a[i]*a[i];
sum=a[i]+sum;
x=x/10;
}
if(sum==k)
z=1;
return z;
}
int rev(int x)
{
int i,j,k=10,sum=0;
for(i=0;x!=0;i++)
{
sum=sum*k+x%10;
x=x/10;
}
return sum;
}
int sod(int x)
{
int i,sum=0;
for(i=0;x!=0;i++)
{
sum=sum+x%10;
x=x/10;
}
return sum;
}
