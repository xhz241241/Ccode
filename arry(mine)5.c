////扫雷
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define ROW 9
//#define COL 9
//#define MINE_COUNT 10
//
////函数声明:
//int menu();
//void game();
//void init(char playerMap[ROW][COL], char mineMap[ROW][COL]);
//void myPrint(char theMap[ROW][COL]);
//void updateMineCount(char playerMap[ROW][COL], char mineMap[ROW][COL], int row, int col);
//
////用于更新翻开格子周围的雷的数量 并显示到玩家地图中
//void updateMineCount(char playerMap[ROW][COL], char mineMap[ROW][COL], 
//					int row, int col) {
//	int count = 0;
//
//	for (int r = row - 1; r <= row + 1; r++) {
//		for (int c = col - 1; c <= col + 1; c++) {
//			if (r < 0 || r > row + 1 || c < 0 || c > col + 1)  {
//				continue;//计算边角格子时会遇到周围格子不存在的情况 直接跳过即可
//			}
//			if (mineMap[r][c] == '1') {
//				count++;
//			}
//		}
//	}
//	//计数完成后将统计的数字显示在玩家地图上
//	//由于地图中的内容是以char打印的 所以需要将整形数字以字符型打印出来
//	playerMap[row][col] = count + '0';
//}
//
////打印地图
//void myPrint(char theMap[ROW][COL]) {
//	printf("  |");
//	for (int col = 0; col < COL; col++) {
//		printf("%d ", col);
//	}
//	printf("\n");
//	for (int row = 0; row < ROW; row++) {
//		printf(" %d|", row);//打印每一行前面的行号
//		for (int col = 0; col < COL; col++) {
//			printf("%c ", theMap[row][col]);
//		}
//		printf("\n");
//	}
//}
//
////初始化地图
////*表示未翻开的格子
////0表示翻开的不是雷的格子
////1表示有雷的格子
//void init(char playerMap[ROW][COL], char mineMap[ROW][COL]) {
//	for (int row = 0; row < ROW; row++) {
//		for (int col = 0; col < COL; col++) {
//			playerMap[row][col] = '*';//*表示未翻开的格子
//		}
//	}
//
//	for (int row = 0; row < ROW; row++) {
//		for (int col = 0; col < COL; col++) {
//			mineMap[row][col] = '0';//0表示不是雷的格子
//		}
//	}
//	//分布雷的位置
//	int mine = MINE_COUNT;
//	int row = 0;
//	int col = 0;
//	while (mine > 0) {
//		row = rand() % ROW;
//		col = rand() % COL;
//		//判断若此处有雷了 则应该重新布雷
//		if (mineMap[row][col] == '1') {
//			continue;
//		}
//		mineMap[row][col] = '1';
//		//每进入一次while循环 则表示布下了一个雷,当十个都布完的时候就不布雷了
//		mine--;
//	}
//}
//
////0.创建两张地图(一张给玩家的 一张保存雷的地址的地图)初始化地图并分布雷的位置
////1.打印地图(测试阶段需把两张都打印出来, 方便测试)
////2.玩家输入要翻开的格子的坐标,并校验
////3.判断此处是否有雷,若有,则直接失败,退出游戏.
////4.若没有则判断该格子周围的雷数并显示到该格子中 继续翻格子
////5.判断游戏是否胜利(1.判断没有雷的格子是否被全部翻开)
////回到1继续游戏
//
//void game() {
//	char playerMap[ROW][COL] = { 0 };
//	char mineMap[ROW][COL] = { 0 };
//
//	init(playerMap, mineMap);
//	while (1) {
//		int openedCount = 0;
//		printf("开始游戏!\n");
//		//此处打印分布地雷的地图是为了更好的测试
//		myPrint(mineMap);
//		printf("========================\n");
//		myPrint(playerMap);
//		//2.玩家输入要翻开的格子的坐标,并校验
//		int row = 0;
//		int col = 0;
//		printf("请输入您要翻开的格子的坐标:\n");
//		scanf("%d %d", &row, &col);
//
//		if (row < 0 && row > ROW && col < 0 && col > COL) {
//			printf("您的输入有误!\n");
//			continue;
//		}
//		if (playerMap[row][col] != '*') {
//			printf("您已经翻开此格子了!\n");
//			continue;
//		}
//
//		//3.判断此处是否有雷,若有,则直接失败,退出游戏.
//		if (mineMap[row][col] == '1') {
//			printf("游戏结束!\n");
//			myPrint(mineMap);
//			printf("=====================\n");
//			break;
//		}
//
//		//4.若没有则判断该格子周围的雷数并显示到该格子中 继续翻格子
//		updateMineCount(playerMap, mineMap, row, col);
//		openedCount++;
//
//		//5.判断游戏是否胜利(1.判断没有雷的格子是否被全部翻开)
//		if (openedCount == ROW * COL - MINE_COUNT) {
//			printf("游戏胜利!\n");
//			myPrint(mineMap);
//			break;
//		}
//	}
//}
//
//int menu() {
//	int choice = 0;
//	printf("==============\n");
//	printf("请输入您的选择:\n");
//	printf("1. 进入游戏:   \n");
//	printf("0. 退出游戏:   \n");
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
//			printf("成功退出游戏!\n");
//			break;
//		}
//		else {
//			printf("您输入的值有误,请重新输入;\n");
//		}
//	}
//	system("pause");
//	return 0;
//}