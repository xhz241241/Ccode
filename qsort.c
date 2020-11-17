////模仿qsort的功能实现一个通用的冒泡排序
//#include<stdio.h>
//#include<stdlib.h>
//
////qsort的标准调用方法
////void qsort (void* base, size_t num, size_t size,
////int (*compar)(const void*, const void*));
////base代表传入的数组, num代表数组长度
////size代表数组内一个元素所占的字节数
////(因为base的类型是void*, 所以必须手动告诉编译器读取首地址往后多少字节的数据)
////comper代表一个函数指针, 里面可以修改比较的条件
//
////以降序为例
//int cmp(void* a, void* b) {
//	return *(int*)a - *(int*)b;
//}
//
//void bubble_Sort_Qsort(void* arr, int num, int size, int(*cmp)(void*, void*)) {
//	for (int bound = 0; bound < num - 1; bound++) {
//		for (int cur = 0; cur < num - 1 - bound; cur++) {
//			int ret = cmp((int *)arr + cur*size, (int *)arr + (cur+1)*size);
//			if (ret < 0) {
//				int tem = *((int *)arr + cur);
//				*((int *)arr + cur) = *((int*)arr + (cur+1));
//				*((int *)arr + (cur+1)) = tem;
//			}
//		}
//	}
//}
//
//int main() {
//	int arr[] = {9, 7, 8, 2, 6};
//	int num = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < num; i++) {
//		printf("%d ", arr[i]);//打印交换前的数组
//	}
//	printf("\n");
//	bubble_Sort_Qsort(arr, num, sizeof(int), cmp);
//	for (int i = 0; i < num; i++) {
//		printf("%d ", arr[i]);//打印交换后的数组
//	}
//	printf("\n");
//
//	system("pause");
//	return 0;
//}