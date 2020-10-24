////计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	int i, flag = 1;//定义一个变量tem来改变正负号
//	double sum = 0.0;
//
//	for (i = 1; i <= 100; i++) {
//		sum = sum + flag * (1.0)/i;
//		flag = -flag;
//	}
//	printf("%f\n", sum);
//
//	system("pause");
//	return 0;
//}