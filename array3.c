////将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//#include<stdio.h>
//#include<stdlib.h>
//
//void swap(int arr1[], int arr2[], int size) {
//	for (int i = 0; i < size; i++) {
//		int tem = arr2[i];
//		arr2[i] = arr1[i];
//		arr1[i] = tem;
//	}
//}
//
//void print(int arr[], int size) {
//	for (int i = 0; i < size; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main() {
//	int arr1[] = {1, 2, 3, 4};
//	int arr2[] = {6, 7, 8, 9};
//	int size = sizeof(arr1) / sizeof(arr1[0]);
//	print(arr1, size);
//	print(arr2, size);
//	swap(arr1, arr2, size);
//	printf("after:\n");
//	print(arr1, size);
//	print(arr2, size);
//
//	system("pause");
//	return 0;
//}