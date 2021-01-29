#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr)/sizeof(arr[1]));
//	return 0;
//}
int main()
{
	int a = 0;//4个字节，32个bit位
	int b = ~a;
	printf("%d\n", b);
	//a的二进制=00000000000000000...
	//b在内存中的二进制是11111111111111111...
	//原码，反码，补码
	//负数在内存中储存的时候，储存的是二进制的补码
	//从储存中的补码1111111111111...
	//到原码的过程
	//1111111111111111...11
	//1111111111111111...10
	//1000000000000000...01
	//结果为-1
	return 0;
}