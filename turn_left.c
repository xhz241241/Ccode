//ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

//�����Ĺ��̷�Ϊ����:(������һ���ַ�Ϊ��)
//1.���Ƚ���һ���ַ�����tem������
//2.�ٽ��ӵڶ����ַ���ĺ��������ַ�������ǰ��һλ
//3.���tem�б���ĵ�һ���ַ��������һ��λ����
//������k���ַ���ǰk���ַ�����tem������, Ȼ��ͬ2, ���tem�е�ǰk���ַ�����β��
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
	printf("��������Ҫ�����ĸ���:\n");
	scanf("%d", &k);
	int size = strlen(arry);
	left_Move(arry, k, size);
	printf("������Ϊ:\n");
	for (int i = 0; i < size; i++) {
		printf("%c ", arry[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}