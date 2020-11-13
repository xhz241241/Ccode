//实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

//左旋的过程分为三步:(以左旋一个字符为例)
//1.首先将第一个字符存在tem变量中
//2.再将从第二个字符起的后面所有字符依次往前移一位
//3.最后将tem中保存的第一个字符放在最后一个位置上
//若左旋k个字符则将前k个字符存在tem变量中, 然后同2, 最后将tem中的前k个字符放在尾部
void left_Move(char arry[], int k, int size) {
	for (int i = 0; i < k; i++) {
		char tem = arry[0];
		for (int j = 0; j < size; j++) {
			arry[j] = arry[j + 1];
		}
		arry[size - 1] = tem;
	}
}

int main() {
	char arry[] = "ABCDEFG";
	int k = 0;
	printf("请输入您要左旋的个数:\n");
	scanf("%d", &k);
	int size = strlen(arry);
	left_Move(arry, k, size);
	printf("左旋后为:\n");
	for (int i = 0; i < size; i++) {
		printf("%c ", arry[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}