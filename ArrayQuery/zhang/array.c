/*
����Ĳ��Ҳ�����

��ϰ����һ����������飬��Ҫ��һ��Ԫ�ز��뵽�������У�
��Ҫ��֤������������ġ���λ�ȡ��Ԫ���������е�λ�á�

*/
#include <stdio.h>
#define length 10

void main()
{
//	int arr[length]={3,1,5,4,2,9};
//	int index=getIndex(arr,2);
//	printf("index=%d\n",index);
	
	int arr[length]={2,4,5,7,19,32,45,55,62,88};
	int index=getIndex_2(arr,61);
	printf("index=%d\n",index);
}


int getIndex(int arr[],int key)
{
	int x;
	for(x=0;x<length;x++)
	{
		if(arr[x]==key)
			return x;
	}
	return -1;
}
int getIndex_2(int arr[],int key)
{
	int min=0,max=length-1,mid;

	while(min<=max)
	{
		mid=(max+min)>>1;
		if(key>arr[mid])
			min=mid+1;
		else if(key<arr[mid])
			max=mid-1;
		else
			return mid;
	}
	return min;
}

/*
	�۰���ҡ����Ч�ʣ����Ǳ���Ҫ��֤����������������顣
*/
int halfsearch(int arr[],int key)
{
	int min,max,mid;
	min=0;
	max=length-1;
	mid=(max+min)/2;
	while(arr[mid]!=key)
	{
		if(key>arr[mid])
			min=mid+1;
		else if(key<arr[mid])
			max=mid-1;
		if(min>max)
			return -1;
		mid=(min+max)/2;
	}
	return mid;
}
/*
�۰�ĵڶ��ַ�ʽ��
*/
int halfsearch_2(int arr[],int key)
{
	int min=0,max=length-1,mid;

	while(min<=max)
	{
		mid=(max+min)>>1;
		if(key>arr[mid])
			min=mid+1;
		else if(key<arr[mid])
			max=mid-1;
		else
			return mid;
	}
	return -1;
}