////编写一个函数实现n的k次方，使用递归实现。
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//double power(int n, int k) {
//	if (k < 0) {
//		k == -k;
//		return 1 / (n * power(n, k - 1));
//	}
//	else if (k == 0) {
//		return 1;
//	}
//	return n * power(n, k - 1);
//}
//
//int main() {
//	int n = 0, k = 0;
//	printf("please inter base number and index:\n");
//	scanf("%d %d", &n, &k);
//	printf("result = %lf\n", power(n, k));
//
//	system("pause");
//	return 0;
//}
