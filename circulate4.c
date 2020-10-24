////打印1000年到2000年之间的闰年
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//
//	int year;
//	for (year = 1000; year <= 2000; year++) {
//		if ((year %4 == 0 && year %100 != 0) || (year % 400 == 0)) {//闰年是能被4 整除但不能被100整除
//			printf("%d\n", year);
//		}
//	}
//	system("pause");
//	return 0;
//}