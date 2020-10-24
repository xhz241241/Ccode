////求10 个整数中最大值
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	int a[10];
//	printf("please enter ten data :\n");
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &a[i]);//通过for循环实现十个数字的输入
//	}
//	int max = a[0];//定义一个最大值
//	for (int j = 0; j < 10; j++) {
//		if (a[j] > max) {//分别让a[0]到a[9]跟max进行比较
//			max = a[j];//将较大者赋给max
//		}
//	}
//	printf("最大值为%d\n", max);
//	system("pause");
//	return 0;
//}