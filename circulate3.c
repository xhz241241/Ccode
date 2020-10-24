////求两个数的最大公约数
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	int a, b, c;
//	int num = 0;
//	int i = 0;
//	printf("please enter two data:\n");
//	scanf("%d %d", &a, &b);
//
//	c = (a > b) ? b : a;//选出A和B中较小的那个
//
//	for (i = c; i < 1; i--) {//将较小者赋给i 让i循环到2
//		if (a % i != 0 && b % i != 0) {//若a和b对i取余都为0 则说明a和b都能整除i
//			i = c;
//			break;
//		}
//	}
//	printf("最大公约数为: %d\n", i);
//
//	system("pause");
//	return 0;
//}