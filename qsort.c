////ģ��qsort�Ĺ���ʵ��һ��ͨ�õ�ð������
//#include<stdio.h>
//#include<stdlib.h>
//
////qsort�ı�׼���÷���
////void qsort (void* base, size_t num, size_t size,
////int (*compar)(const void*, const void*));
////base�����������, num�������鳤��
////size����������һ��Ԫ����ռ���ֽ���
////(��Ϊbase��������void*, ���Ա����ֶ����߱�������ȡ�׵�ַ��������ֽڵ�����)
////comper����һ������ָ��, ��������޸ıȽϵ�����
//
////�Խ���Ϊ��
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
//		printf("%d ", arr[i]);//��ӡ����ǰ������
//	}
//	printf("\n");
//	bubble_Sort_Qsort(arr, num, sizeof(int), cmp);
//	for (int i = 0; i < num; i++) {
//		printf("%d ", arr[i]);//��ӡ�����������
//	}
//	printf("\n");
//
//	system("pause");
//	return 0;
//}