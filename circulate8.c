////���ֲ���
////��д������һ���������������в��Ҿ����ĳ����
////Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main() {
//	int arr[] = { 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30,};
//	int toFind;//�����Ѱ�ҵ�ֵ
//	printf("please enter what data you want to find:\n");
//	scanf("%d", &toFind);//�û�����ҪѰ�ҵ�����
//
//	int left = 0;//�Զ�����������ֵ ����������������� 
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;//�Զ��������������ֵ(ע�����Ҷ��±�Ϊ���鳤�ȼ�һ)
//
//	while(left <= right){
//		int mid = (left + right) / 2;//�����м�ֵmid
//		if (toFind < arr[mid]) {//���м�ֵ�ȴ�Ѱ�ҵ�ֵ�� ֤����Ѱ�ҵ�ֵ����� ���ų��Ҳ�����
//			right = mid - 1;//�����������Ҷ˱�Ϊmid-1
//		}
//		else if (toFind > arr[mid]) {//���м�ֵ�ȴ�Ѱ�ҵ�ֵС ֤����Ѱ�ҵ�ֵ���Ҳ� ���ų��������
//			left = mid + 1;//������������˱�Ϊmid+1
//		}
//		else {//���м�ֵ���Ѱ�ҵ�ֵ��ȼȲ���Ҳ��С ��֤���м�ֵ���Ǵ�Ѱ�ҵ�ֵ
//			printf("�ҵ���%d���±�Ϊ %d\n", toFind, mid);//��ӡ�±�
//			break;//�ҵ���������ѭ��
//		}
//	}
//	if (left > right) {//��������˴����Ҷ���˵����Ѱ�ҵ�ֵ���ڸ�������
//		printf("δ�ҵ�! \n");
//	}
//
//	system("pause");
//	return 0;
//}
