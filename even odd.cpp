#include<stdio.h>
int main()
{
	int even,odd,num;
	printf("enter number");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("even number",num);
	}
	else
	{
		printf("odd number",num);
	}
	return 0;
}
