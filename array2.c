////����һ���������飬��ɶ�����Ĳ���
////ʵ�ֺ���init() ��ʼ������Ϊȫ0
////ʵ��print()  ��ӡ�����ÿ��Ԫ��
////ʵ��reverse()  �����������Ԫ�ص����á�
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
////�������þ������м��±�Ϊ�ᣬ�������Ҷ�Ӧλ�õ���
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
//	init(arr);//��ʼ������
//	print(arr);//��ӡ����
//	int num = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr, num);//��������
//	print(arr);//�ٴδ�ӡ����
//
//	system("pause");
//	return 0;
//}