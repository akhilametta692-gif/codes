#include<stdio.h>
struct student
{
	int marks;
};
int main()
{
	int n,i,total=0;
	float avg;
	struct student s[100];
	printf("enter the no of students:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("enter marks of students %d:",i);
		scanf("%d",&s[i].marks);
		total=total+s[i].marks;
	}
	avg=(float)total/n;
	printf("total=%d\n",total);
	printf("average=%.2f",avg);
	return 0;
}
