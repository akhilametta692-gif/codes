#include<stdio.h>
int main ()
{
	int a,b,c;
	printf("enter 2 values:");
	scanf("%d%d",&a,&b);
	c=a&b;
	printf("bitwise and:&d\n",c);
	c=a|b;
	printf("bitwise or :%d\n",c);
	c=a^b;
	printf("bitwise ex-or:%d\n",c);
	c=a<<b;
	printf("bitwise left shift:%d\n",c);
	c=a>>b;
	printf("bitwise right shift:%d\n",c);

}
