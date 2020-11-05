////交换两个变量（不创建临时变量）
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	int a = 5;
//	int b = 9;
//
//	printf("before:%d %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("after:%d %d\n", a, b);
//
//	system("pause");
//	return 0;
//}