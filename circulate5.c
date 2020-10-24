////打印100~200之间的素数
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//
//	int a, b, c;
//	for (a = 100; a <= 200; a++) {
//		for (b = 2; b < a; b++) {
//			if (a % b == 0) {//判断是否是素数 若能整除则break
//				break;
//			}
//		}
//		if (b == a) {//若不能整除 则判断b是否循环到a
//			printf("%d\n", a);
//		}
//	}
//	system("pause");
//	return 0;
//}