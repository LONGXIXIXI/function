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
	int len=my_strlen(arr);               //arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
	printf("�ַ�������Ϊ%d ",len);
	return 0;
}