//练习使用库函数，qsort排序各种类型的数据
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
//字符型
int cmp(const void* a, const void* b) {
	return *(char*)a - *(char*)b;
}

int main() {
	char arr[] = "akvhelb";
	int size = strlen(arr);
	for (int i = 0; i < size; i++) {
		printf("s", arr[i]);
	}
	printf("\n");
	qsort(arr, size, sizeof(char), cmp);
	for (int i = 0; i < size; i++) {
		printf("%s", arr[i]);
	}

	system("pause");
	return 0;
}

*/

/*
//double型
int cmp(const void* a, const void* b) {
	return *(double*)a - *(double*)b;
}

int main() {
	double arr2[] = {8.4, 6.3, 7.7, 9.3, 5.1, 1.0};
	int size = sizeof(arr2) / sizeof(arr2[0]);
	for (int i = 0; i < size; i++) {
		printf("%f ", arr2[i]);
	}
	printf("\n");
	qsort(arr2, size, sizeof(double), cmp);
	for (int i = 0; i < size; i++) {
		printf("%f ", arr2[i]);
	}

	system("pause");
	return 0;
}
*/

int cmp(const void* a, const void* b) {
	return strcmp(*(char**)a, *(char**)b);
}

int main() {
	char* arr3[] = {"kkk", "hhh", "bbb", "rrr"};
	int size = sizeof(arr3) / sizeof(arr3[0]);
	for (int i = 0; i < size; i++) {
		printf("%s", arr3[i]);
	}
	printf("\n");
	qsort(arr3, size, sizeof(char*),cmp);
	for (int i = 0; i < size; i++) {
		printf("%s", arr3[i]);
	}

	system("pause");
	return 0;
}