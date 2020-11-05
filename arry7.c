////打印整数二进制的奇数位和偶数位
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	int n = 0;
//	printf("请输入一个数字:\n");
//	scanf("%d", &n);
//
//	for (int i = 31; i >= 0; i = i - 2) {
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	for (int j = 30; j >= 0; j = j - 2) {
//		printf("%d ", (n >> j) & 1);
//	}
//	printf("\n");
//
//	system("pause");
//	return 0;
//}