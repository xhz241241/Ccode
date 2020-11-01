////创建一个整形数组，完成对数组的操作
////实现函数init() 初始化数组为全0
////实现print()  打印数组的每个元素
////实现reverse()  函数完成数组元素的逆置。
//#include<stdio.h>
//#include<stdlib.h>
//#define ROW 10
//
//void init(int arr[ROW]) {
//	for (int r = 0; r < ROW; r++) {
//		arr[r] = r;
//	}
//}
//
//void print(int arr[ROW]) {
//	for (int r = 0; r < ROW; r++) {
//		printf("%d ", arr[r]);
//	}
//	printf("\n");
//}
//
////数组逆置就是以中间下标为轴，交换左右对应位置的数
//void reverse(int arr[ROW], int size) {
//	for (int i = 0; i < size / 2; i++) {
//		int tem = arr[i];
//		arr[i] = arr[size - 1 - i];
//		arr[size - 1 - i] = tem;
//	}
//}
//
//int main() {
//	int arr[ROW] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
//	init(arr);//初始化数组
//	print(arr);//打印数组
//	int num = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr, num);//数组逆置
//	print(arr);//再次打印数组
//
//	system("pause");
//	return 0;
//}