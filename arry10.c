////����Ļ�ϴ�ӡ������ǡ�
//#include <stdio.h>
//#include <stdlib.h>
//#define ROW 9
//#define COL 9
//
////�������������
//void set_Triangle(int arry[ROW][COL]) {
//	for (int row = 0; row < ROW; row++) {
//		for (int col = 0; col < COL; col++) {
//			arry[row][0] = 1;//��ÿһ�еĵ�һ�ж���Ϊ1
//			if (row >= 1 && col >= 1) {
//				//�ӵ�һ�е�һ�п�ʼ, ��λ�õ����ֵ��������Ϸ������Ϸ�����֮��
//				arry[row][col] = arry[row - 1][col - 1] + arry[row - 1][col];
//			}
//		}
//	}
//}
//
////��ӡ���������
//void print_Triangle(int arry[ROW][COL]) {
//	for (int row = 0; row < ROW; row++) {
//		for (int col = 0; col <= row; col++) {
//			printf("%d ", arry[row][col]);
//		}
//		printf("\n");
//	}
//}
//
//int main() {
//	int arry[ROW][COL] = {0};
//	set_Triangle(arry);
//	print_Triangle(arry);
//
//	system("pause");
//	return 0;	
//}