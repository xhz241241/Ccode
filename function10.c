////дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
////���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
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
