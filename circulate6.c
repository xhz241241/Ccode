////编写程序数一下 1到 100 的所有整数中出现多少个数字9
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	int i, count = 0;
//
//	for (i = 1; i <= 100; i++) {
//		if (i % 10 == 9){//取个位数
//			count++;
//		}
//		if (i / 10 == 9) {//取十位数 
//			count++; //此处要用if而非elae if 因为99里面有两个9 需要个位十位都判断
//		}
//	}
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//}
