////ɨ��
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define ROW 9
//#define COL 9
//#define MINE_COUNT 10
//
////��������:
//int menu();
//void game();
//void init(char playerMap[ROW][COL], char mineMap[ROW][COL]);
//void myPrint(char theMap[ROW][COL]);
//void updateMineCount(char playerMap[ROW][COL], char mineMap[ROW][COL], int row, int col);
//
////���ڸ��·���������Χ���׵����� ����ʾ����ҵ�ͼ��
//void updateMineCount(char playerMap[ROW][COL], char mineMap[ROW][COL], 
//					int row, int col) {
//	int count = 0;
//
//	for (int r = row - 1; r <= row + 1; r++) {
//		for (int c = col - 1; c <= col + 1; c++) {
//			if (r < 0 || r > row + 1 || c < 0 || c > col + 1)  {
//				continue;//����߽Ǹ���ʱ��������Χ���Ӳ����ڵ���� ֱ����������
//			}
//			if (mineMap[r][c] == '1') {
//				count++;
//			}
//		}
//	}
//	//������ɺ�ͳ�Ƶ�������ʾ����ҵ�ͼ��
//	//���ڵ�ͼ�е���������char��ӡ�� ������Ҫ�������������ַ��ʹ�ӡ����
//	playerMap[row][col] = count + '0';
//}
//
////��ӡ��ͼ
//void myPrint(char theMap[ROW][COL]) {
//	printf("  |");
//	for (int col = 0; col < COL; col++) {
//		printf("%d ", col);
//	}
//	printf("\n");
//	for (int row = 0; row < ROW; row++) {
//		printf(" %d|", row);//��ӡÿһ��ǰ����к�
//		for (int col = 0; col < COL; col++) {
//			printf("%c ", theMap[row][col]);
//		}
//		printf("\n");
//	}
//}
//
////��ʼ����ͼ
////*��ʾδ�����ĸ���
////0��ʾ�����Ĳ����׵ĸ���
////1��ʾ���׵ĸ���
//void init(char playerMap[ROW][COL], char mineMap[ROW][COL]) {
//	for (int row = 0; row < ROW; row++) {
//		for (int col = 0; col < COL; col++) {
//			playerMap[row][col] = '*';//*��ʾδ�����ĸ���
//		}
//	}
//
//	for (int row = 0; row < ROW; row++) {
//		for (int col = 0; col < COL; col++) {
//			mineMap[row][col] = '0';//0��ʾ�����׵ĸ���
//		}
//	}
//	//�ֲ��׵�λ��
//	int mine = MINE_COUNT;
//	int row = 0;
//	int col = 0;
//	while (mine > 0) {
//		row = rand() % ROW;
//		col = rand() % COL;
//		//�ж����˴������� ��Ӧ�����²���
//		if (mineMap[row][col] == '1') {
//			continue;
//		}
//		mineMap[row][col] = '1';
//		//ÿ����һ��whileѭ�� ���ʾ������һ����,��ʮ���������ʱ��Ͳ�������
//		mine--;
//	}
//}
//
////0.�������ŵ�ͼ(һ�Ÿ���ҵ� һ�ű����׵ĵ�ַ�ĵ�ͼ)��ʼ����ͼ���ֲ��׵�λ��
////1.��ӡ��ͼ(���Խ׶�������Ŷ���ӡ����, �������)
////2.�������Ҫ�����ĸ��ӵ�����,��У��
////3.�жϴ˴��Ƿ�����,����,��ֱ��ʧ��,�˳���Ϸ.
////4.��û�����жϸø�����Χ����������ʾ���ø����� ����������
////5.�ж���Ϸ�Ƿ�ʤ��(1.�ж�û���׵ĸ����Ƿ�ȫ������)
////�ص�1������Ϸ
//
//void game() {
//	char playerMap[ROW][COL] = { 0 };
//	char mineMap[ROW][COL] = { 0 };
//
//	init(playerMap, mineMap);
//	while (1) {
//		int openedCount = 0;
//		printf("��ʼ��Ϸ!\n");
//		//�˴���ӡ�ֲ����׵ĵ�ͼ��Ϊ�˸��õĲ���
//		myPrint(mineMap);
//		printf("========================\n");
//		myPrint(playerMap);
//		//2.�������Ҫ�����ĸ��ӵ�����,��У��
//		int row = 0;
//		int col = 0;
//		printf("��������Ҫ�����ĸ��ӵ�����:\n");
//		scanf("%d %d", &row, &col);
//
//		if (row < 0 && row > ROW && col < 0 && col > COL) {
//			printf("������������!\n");
//			continue;
//		}
//		if (playerMap[row][col] != '*') {
//			printf("���Ѿ������˸�����!\n");
//			continue;
//		}
//
//		//3.�жϴ˴��Ƿ�����,����,��ֱ��ʧ��,�˳���Ϸ.
//		if (mineMap[row][col] == '1') {
//			printf("��Ϸ����!\n");
//			myPrint(mineMap);
//			printf("=====================\n");
//			break;
//		}
//
//		//4.��û�����жϸø�����Χ����������ʾ���ø����� ����������
//		updateMineCount(playerMap, mineMap, row, col);
//		openedCount++;
//
//		//5.�ж���Ϸ�Ƿ�ʤ��(1.�ж�û���׵ĸ����Ƿ�ȫ������)
//		if (openedCount == ROW * COL - MINE_COUNT) {
//			printf("��Ϸʤ��!\n");
//			myPrint(mineMap);
//			break;
//		}
//	}
//}
//
//int menu() {
//	int choice = 0;
//	printf("==============\n");
//	printf("����������ѡ��:\n");
//	printf("1. ������Ϸ:   \n");
//	printf("0. �˳���Ϸ:   \n");
//	printf("==============\n");
//	scanf("%d", &choice);
//	return choice;
//}
//
//int main() {
//
//	srand((unsigned int)time(0));
//	int choice = menu();
//	while (1) {
//		if (choice == 1) {
//			game();
//		}
//		else if (choice == 0) {
//			printf("�ɹ��˳���Ϸ!\n");
//			break;
//		}
//		else {
//			printf("�������ֵ����,����������;\n");
//		}
//	}
//	system("pause");
//	return 0;
//}