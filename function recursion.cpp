#include<stdio.h>
void print(int n)
{
	if(n>9)                          //判断是否为一位数
	{
		print(n/10);              //1234->123->12->1         
	}
	printf("%d",n%10);
}
int main()
{
	unsigned int num = 0;
	scanf("%d",&num);
	print(num);
	return 0;
}