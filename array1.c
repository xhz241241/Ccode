////ʵ��һ�������������ð������
//#include<stdio.h>
//#include<stdlib.h>
//
//void bubbleSort(int arr[], int size) {
//	//����Ԫ�ؽ��бȽϣ���������
//	//�ϴ��߷ŵ����棬��С�߱���һ���ŵ�������λ
//	//������ ���������� �� ���������� ����
//	//[0��bound)�������������� ע�� bound��ʼֵΪ0
//	//��bound, size]����δ��������
//	for (int bound = 0; bound < size; bound++) {//bound�������һ��Ԫ�ؿ�ʼ����
//		for (int cur = size - 1; cur > bound; cur--) {//cur���������һ��Ԫ�ز���
//			if (arr[cur - 1] > arr[cur]) {//���ǰһ���Ⱥ�һ���� ��������ߵ�λ��
//				int tem = arr[cur -1];
//				arr[cur - 1] = arr[cur];
//				arr[cur] = tem;
//			}
//		}
//	}
//
//}
//
//int main() {
//	/*int arry[3][4] = {
//		{0, 1, 2, 3},    //��ά����Ķ���
//		{4, 5, 6, 7},
//		{8, 9, 10, 11},
//	};*/
//
//	int arry[] = {8, 6, 9, 5};
//	bubbleSort(arry, sizeof(arry) / sizeof(arry[0]));
//
//	for (int i = 0; i < 4; i++) {
//		printf("%d ", arry[i]);
//	}
//
//	system("pause");
//	return 0;
//}