////猜数字游戏
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int menu() {//菜单函数用来与用户互动
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
//void game() {//game函数
//	int toGuess = rand() % 100 + 1;//自动生成一个1到100的随机数
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
//	srand(time(0));//使用当前时间作为随机种子
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