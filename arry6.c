////编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//#include<stdlib.h>
//
//int count_Dif(int a, int b) {
//	int count = 0;
//	int tem = a ^ b;
//	while (tem != 0) {
//		if ((tem & 1 )== 1) {
//			count++;
//		}
//		tem >>= 1;
//	}
//	return count;
//}
//
//int main(){
//	int a, b = 0;
//	printf("请输入两个数字:\n");
//	scanf("%d %d", &a, &b);
//	printf("不同的比特位有 %d 个\n", count_Dif(a, b));
//
//	system("pause");
//	return 0;
//}