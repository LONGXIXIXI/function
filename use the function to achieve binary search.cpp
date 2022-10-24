#include<stdio.h>                           //用函数实现二分查找
int binary_search(int arr[],int k,int sz)    //这里的arr本质上是一个指针
{
	int left=0;
	int right=sz-1;
	while(left<=right)
	{
		int mid=(left+right)/2;
		if(arr[mid]<k)
		{
			left=mid+1;
		}
		else if(arr[mid]>k)
		{
			right=mid-1;
		}
		else
		return mid;
	}
	return  -1;
}
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int k=7;
	int sz=sizeof(arr)/sizeof(arr[1]);
	int ret=binary_search(arr,k,sz);
	if(ret == -1)
	{
		printf("找不到指定的数");
	}
	else
	{
		printf("找到了，下标为%d\n",ret);
	}
	return 0;
}