#include<stdio.h>                       //交换两个数
void change(int* pa,int* pb)
{
	int t=0;
	t=*pa;
	*pa=*pb;
	*pb=t;
}
int main()
{
	int a=10,b=20;
	change(&a,&b);                   //传送 a和b 的地址
	printf("a=%d b=%d",a,b);
	return 0;
}