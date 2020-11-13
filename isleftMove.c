////写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
////例如：给定s1 = AABCD和s2 = BCDAA，返回1
////给定s1 = abcd和s2 = ACBD，返回0.
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int compare(char arr1[], char arr2[]) {
//	int size = strlen(arr1);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < size - 1; i++) {
//		char tem = arr1[0];
//		for (j = 0; j < size - 1; j++) {
//			arr1[j] = arr1[j + 1];
//		}
//		arr1[size - 1] = tem;
//		if (strcmp(arr1, arr2) == 0) {
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main() {
//	char arr1[] = "ABCDEFG";
//	char arr2[] = "CDEFGAB";
//	char arr3[] = "CDBAGEF";
//	printf("arr1:%s\n", arr1);
//	printf("arr2:%s\n", arr2);
//	printf("arr3:%s\n", arr3);
//	if (compare(arr1, arr2)) {
//		printf("arr2是arr1旋转之后得到的\n");
//	}
//	else {
//		printf("arr2不是arr1旋转之后得到的\n");
//	}
//
//	system("pause");
//	return 0;
//}