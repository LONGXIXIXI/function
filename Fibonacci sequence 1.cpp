#include<stdio.h>
int fib(int x)
{
	int a=1;
	int b=1;
	int c=1;
	while(x>=3)
	{
		c=a+b;
		a=b;
		b=c;
		x--;
	}
	return b;
}
int main()
{
	int n=0;
	int ret=0;
	scanf("%d",&n);
	ret=fib(n);
	printf("第%d个斐波那契数为%d\n",n,ret);
	return 0;
}