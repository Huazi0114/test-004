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
	int a = 0;//4���ֽڣ�32��bitλ
	int b = ~a;
	printf("%d\n", b);
	//a�Ķ�����=00000000000000000...
	//b���ڴ��еĶ�������11111111111111111...
	//ԭ�룬���룬����
	//�������ڴ��д����ʱ�򣬴�����Ƕ����ƵĲ���
	//�Ӵ����еĲ���1111111111111...
	//��ԭ��Ĺ���
	//1111111111111111...11
	//1111111111111111...10
	//1000000000000000...01
	//���Ϊ-1
	return 0;
}