#include<stdio.h>                      //n的阶乘
int factorial(int x)
{
	int i=0;
	i++;
	if(x > 1)
	{
		return x*factorial(x-1);
	}
	else
	return 1;
}
int main()
{
	int n=0,ret=0;
	scanf("%d",&n);
	ret=factorial(n);
	printf("%d\n",ret);
	return 0;
}