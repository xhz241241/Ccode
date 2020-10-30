////递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
////递归实现阶乘
///*
//int factor(int x) {
//	if (x == 1) {
//		return 1;
//	}
//	return x * factor(x - 1);
//}
//
//int main() {
//	int x = 0;
//	printf("please inter one data:\n");
//	scanf("%d", &x);
//	printf("%d 的阶乘为 %d\n", x, factor(x));
//
//	system("pause");
//	return 0;
//}
//*/
//
////非递归实现阶乘
//int main() {
//	int x = 0;
//	int result = 1;
//	printf("please inter one data:\n");
//	scanf("%d", &x);
//	
//	for (int i = 1; i <= x; i++) {
//		result = i * result;
//	}
//	printf("%d 的阶乘为 %d\n", x, result);
//
//	system("pause");
//	return 0;
//}