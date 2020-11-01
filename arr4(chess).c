////������
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//#define ROW 3
//#define COL 3
//
////��������
//int menu();
//void game();
//void init(char chessBoard[ROW][COL]);
//void print(char chessBoard[ROW][COL]);
//void playerMove(char chessBoard[ROW][COL]);
//void computerMove(char chessBoard[ROW][COL]);
//char isWin(char chessBoard[ROW][COL]);
//int isFull(char chessBoard[ROW][COL]);
//
////��Ϸ����:
////������ʼ�˵� menu()
////����һ������ game()
////��ʼ������ init()
////��ӡ������ print()
////������� 
////�ж�ʤ������ӡ���̣�
////��������
////�ж�ʤ������ӡ���̣�
//
////������� 
//void playerMove(char chessBoard[ROW][COL]) {
//	while(1){
//		int row = 0; //�����������������
//		int col = 0;
//		printf("��������Ҫ���ӵ�����:\n");
//		scanf("%d %d", &row, &col);
//		//�ж��������������Ƿ�Ϸ�
//		if (row < 0 || row >= ROW || col < 0 || col >= COL) {
//			printf("���������������,����������:\n");
//			continue;
//		}
//		//�ж��������������Ƿ�������
//		if (chessBoard[row][col] != ' ') {
//			printf("�����������������,����������:\n");
//			continue;
//		}
//		chessBoard[row][col] = 'x';
//		break;
//	}
//}
//
////��������
//void computerMove(char chessBoard[ROW][COL]) {
//	while (1) {
//		//��rand�����õ����������һ������
//		// % ��Ϊ����������������ںϷ���Χ��(��С�������������)
//		int row = rand() % ROW;
//		int col = rand() % COL;
//		if (chessBoard[row][col] != ' ') {
//			continue;
//		}
//		chessBoard[row][col] = 'o';
//		break;
//	}
//}
//
////��ӡ������
//void print(char chessBoard[ROW][COL]) {
//	printf("  +------------\n");
//	printf("  +0    1    2   \n");
//	printf("--+---+---+---+\n");//���������Ϊ��ʹ�߿������
//	for (int row = 0; row < ROW; row++) {
//		printf("%d | %c | %c | %c |\n", row, chessBoard[row][0],
//			chessBoard[row][1], chessBoard[row][2]);
//		printf("--+---+---+---+\n");
//	}
//}
//
////��ʼ������
//void init(char chessBoard[ROW][COL]) {
//	for (int r = 0; r < ROW; r++) {
//		for (int c = 0; c < COL; c++) {
//			chessBoard[r][c] = ' ';//����ʼ������Ϊȫ�ո�״̬
//		}
//	}
//}
//
////�ж������Ƿ�����
//int isFull(char chessBoard[ROW][COL]) {
//	for (int row = 0; row < ROW; row++) {
//		for (int col = 0; col < COL; col++) {
//			if (chessBoard[row][col] == ' ') {
//				return 0;
//			}
//		}
//	}
//	return 1;
//}
//
////�ж�ʤ��
////'x'��ʾ���Ӯ��
////'o'��ʾ����Ӯ��
////' '��ʾʤ��δ��
////'h'��ʾ����
//char isWin(char chessBoard[ROW][COL]) {
//	//�ж����������Ƿ�����ͬ������
//	for (int col = 0; col < COL; col++) {
//		if (chessBoard[0][col] != ' ' 
//			&&chessBoard[0][col] == chessBoard[1][col] 
//			&&chessBoard[0][col] == chessBoard[2][col]) {
//			return chessBoard[0][col];
//		}
//	}
//	//�ж����������Ƿ�����ͬ������
//	for (int row = 0; row < ROW; row++) {
//		if (chessBoard[row][0] != ' '
//			&& chessBoard[row][0] == chessBoard[row][1]
//			&& chessBoard[row][0] == chessBoard[row][2]) {
//			return chessBoard[row][0];
//		}
//	}
//	//�ж������Խ����Ƿ�����ͬ������
//	if (chessBoard[0][0] != ' '
//		&&chessBoard[0][0] == chessBoard[1][1]
//		&&chessBoard[0][0] == chessBoard[2][2]) {
//		return chessBoard[0][0];
//	}
//	if (chessBoard[2][0] != ' '
//		&& chessBoard[2][0] == chessBoard[1][1]
//		&& chessBoard[2][0] == chessBoard[0][2]) {
//		return chessBoard[2][0];
//	}
//	//�ж��Ƿ���� isFull()
//	if (isFull(chessBoard) == 1) {
//		return 'h';
//	}
//	//ȫ���ж��궼û�з��ϵ� ���ǻ�û�ֳ�ʤ��
//	return ' ';
//}
//
////��Ϸ����
//void game() {
//	char chessBoard[ROW][COL] = { 0 };//����һ������
//	init(chessBoard);
//	char winner = ' ';
//	while (1) {
//		srand((unsigned int)time(0));
//		print(chessBoard);
//		playerMove(chessBoard);//�������
//		//�ж�ʤ��
//		winner = isWin(chessBoard);
//		if (winner != ' ') {
//			break;
//		}
//		computerMove(chessBoard);//��������
//		//�ж�ʤ��
//		winner = isWin(chessBoard);
//		if (winner != ' ') {
//			break;
//		}
//
//	}
//	//���ʤ�����
//	print(chessBoard);
//	if (winner == 'x') {
//		printf("��ϲ��! ��Ӯ��!\n");
//	}
//	else if (winner == 'o') {
//		printf("���ź�,������~\n");
//	}
//	else {
//		printf("����!\n");
//	}
//}
//
////������ʼ�˵�
//int menu(){
//	printf("==================\n");
//	printf("1. ��ʼ��Ϸ��\n");
//	printf("0. �˳���Ϸ��\n");
//	printf("==================\n");
//	int choice = 0;
//	printf("����������ѡ��:\n");
//	scanf("%d", &choice);
//	return choice;
//}
//
//int main() {
//	while(1) {
//		int choice = menu();
//		if (choice == 1) {
//			game();
//		}
//		if (choice == 0) {
//			printf("�ɹ��˳���Ϸ!\n");
//			break;
//		}
//	}
//
//	system("pause");
//	return 0;
//}
