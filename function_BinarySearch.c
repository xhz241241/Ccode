//���ֲ��ң�����ʵ�֣�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int BinarySearch(int arr[], int len, int toFind) {
	int left = 0;//�Զ�����������ֵ ����������������� 
	int right = len - 1;//�Զ��������������ֵ(ע�����Ҷ��±�Ϊ���鳤�ȼ�һ)

	while (left <= right) {
		int mid = (left + right) / 2;//�����м�ֵmid
		if (toFind < arr[mid]) {//���м�ֵ�ȴ�Ѱ�ҵ�ֵ�� ֤����Ѱ�ҵ�ֵ����� ���ų��Ҳ�����
			right = mid - 1;//�����������Ҷ˱�Ϊmid-1
		}
		else if (toFind > arr[mid]) {//���м�ֵ�ȴ�Ѱ�ҵ�ֵС ֤����Ѱ�ҵ�ֵ���Ҳ� ���ų��������
			left = mid + 1;//������������˱�Ϊmid+1
		}
		else {//���м�ֵ���Ѱ�ҵ�ֵ��ȼȲ���Ҳ��С ��֤���м�ֵ���Ǵ�Ѱ�ҵ�ֵ
			printf("�ҵ���!\n%d���±�Ϊ %d\n", toFind, mid);//��ӡ�±�
			break;//�ҵ���������ѭ��
		}
	}
	if (left > right) {//��������˴����Ҷ���˵����Ѱ�ҵ�ֵ���ڸ�������
		printf("δ�ҵ�! \n");
	}

}

int main() {
	int arr[] = { 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, };//��㶨��һ����������;
	int toFind;//�����Ѱ�ҵ�ֵ
	printf("please enter what data you want to find:\n");
	scanf("%d", &toFind);//�û������Ѱ�ҵ�����
	int size = sizeof(arr) / sizeof(arr[0]);
	BinarySearch(arr, size, toFind);

	system("pause");
	return 0;
}
