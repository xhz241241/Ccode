////写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
////例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int DigitSum(int n) {
//	if (n < 0) {
//		return 0;
//	}else if (n < 10) {
//		return n;
//	}else {
//		return (n % 10) + DigitSum(n / 10);
//	}
//}
//
//int main() {
//	int num = 0;
//	printf("please inter one number:\n");
//	scanf("%d", &num);
//	printf("result = %d \n", DigitSum(num));
//
//	system("pause");
//	return 0;
//}
