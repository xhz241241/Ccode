////��������Ϸ
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int menu() {//�˵������������û�����
//	printf("*************************\n");
//	printf("1.Start Game!\n");
//	printf("0.Exit the Game!\n");
//	printf("*************************\n");
//	printf("Please input your choice :\n");
//	int choice = 0;
//	scanf("%d", &choice);
//	return choice;
//}
//
//void game() {//game����
//	int toGuess = rand() % 100 + 1;//�Զ�����һ��1��100�������
//	while(1){
//
//		int input = 0;
//		printf("please input the number of your guess:\n");
//		scanf("%d", &input);
//
//		if (toGuess > input) {
//			printf("low\n");
//		}
//		else if (toGuess < input) {
//			printf("high\n");
//		}
//		else {
//			printf("congratulations! You are right!\n");
//			break;
//		}
//	}
//}
//
//int main() {
//	srand(time(0));//ʹ�õ�ǰʱ����Ϊ�������
//	while(1) {
//		int choice = menu();
//		if (choice == 1) {
//			game();
//		}
//		else if (choice == 0){
//			printf("Exit successfully!\n ");
//			break;
//		}
//		else {
//			printf("Iuput Error!\n");
//		}
//	}
//
//	system("pause");
//	return 0;
//}