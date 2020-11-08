////喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
////一共喝的汽水的数量等于 money的数量+ 空瓶子/2的数量(只要空瓶子不为零就可以继续喝)
//int drink_Soda(int money){
//	int empty = money;
//	int totle = money;
//	while (empty > 1){
//		totle = totle + empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	return totle;
//}
//
//int main() {
//	int money = 0;
//	printf("请输入您有多少钱:\n");
//	scanf("%d", &money);
//	printf("您一共可以喝 %d 瓶饮料\n", drink_Soda(money));
//
//	system("pause");
//	return 0;
//}