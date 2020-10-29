////实现一个函数，判断一个数是不是素数。
////利用上面实现的函数打印100到200之间的素数。
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int isPrime(int x) {
//	if (x == 1 || x == 0) {
//		return 0;
//	}
//	for (int i = 2; i < x; i++) {
//		if (x % i == 0) {
//			return 0;
//		}
//		else {
//			return 1;
//		}
//	}
//}
//
//int main() {
//	int x = 0;
//	printf("please inter one data:\n");
//	scanf("%d", &x);
//	if (isPrime(x) == 1) {
//		printf("Is Prime!\n");
//	}
//	else {
//		printf("Not Prime!\n");
//	}
//
//	for (int i = 100; i < 200; i++) {
//		if (isPrime(i) == 1) {
//			printf("%d is Prime!\n", i);
//		}
//		else {
//		}
//	}
//
//	system("pause");
//	return 0;
//}
//
