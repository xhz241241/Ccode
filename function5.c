////递归方式实现打印一个整数的每一位
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int print(int x) {
//	if (x < 10) {
//		printf("%d\n", x);
//	}
//	else {
//		print(x / 10);
//		printf("%d\n", x % 10);
//	}
//}
//
//int main() {
//	int x = 0;
//	printf("please inter one data:\n");
//	scanf("%d", &x);
//	print(x);
//
//	system("pause");
//	return 0;
//}