#include<stdio.h>
my_strlen(char* str)
{
	if(*str != '\0')                           //1+my_strlen("ihao")
	{                                          //1+1+my_strlen("hao")
		return 1+my_strlen(str+1);             //1+1+1+my_strlen("ao")                
	}                                          //1+1+1+1+my_strlen("o") 
	else                                       //1+1+1+1+1+my_strlen("\0")
	return 0;                                  //1+1+1+1+1+0
}
int main()
{
	char arr[]="nihao";
	int len=my_strlen(arr);               //arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
	printf("字符串长度为%d ",len);
	return 0;
}