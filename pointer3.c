////写一个函数，可以逆序一个字符串的内容。
//#include <stdio.h>
//#include<stdlib.h>
//
//void my_Reverse(char* str) {
//	char* left = str;
//	char* right = str + strlen(str) - 1;
//	for (; left < right; left++, right--) {
//		char tem = *left;
//		*left = *right;
//		*right = tem;
//	}
//}
//
//int main() {
//	char str[] = "abcdefg";
//	printf("before : %s\n", str);
//	my_Reverse(str);
//	printf("after : %s\n", str);
//
//	system("pause");
//	return 0;
//}