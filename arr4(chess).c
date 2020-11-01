////三子棋
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//#define ROW 3
//#define COL 3
//
////函数声明
//int menu();
//void game();
//void init(char chessBoard[ROW][COL]);
//void print(char chessBoard[ROW][COL]);
//void playerMove(char chessBoard[ROW][COL]);
//void computerMove(char chessBoard[ROW][COL]);
//char isWin(char chessBoard[ROW][COL]);
//int isFull(char chessBoard[ROW][COL]);
//
////游戏流程:
////创建开始菜单 menu()
////创建一个棋盘 game()
////初始化棋盘 init()
////打印出棋盘 print()
////玩家落子 
////判断胜负（打印棋盘）
////电脑落子
////判断胜负（打印棋盘）
//
////玩家落子 
//void playerMove(char chessBoard[ROW][COL]) {
//	while(1){
//		int row = 0; //让玩家输入坐标落子
//		int col = 0;
//		printf("请输入您要落子的坐标:\n");
//		scanf("%d %d", &row, &col);
//		//判断玩家输入的坐标是否合法
//		if (row < 0 || row >= ROW || col < 0 || col >= COL) {
//			printf("您输入的坐标有误,请重新输入:\n");
//			continue;
//		}
//		//判断玩家输入的坐标是否有子了
//		if (chessBoard[row][col] != ' ') {
//			printf("您输入的坐标有子了,请重新输入:\n");
//			continue;
//		}
//		chessBoard[row][col] = 'x';
//		break;
//	}
//}
//
////电脑落子
//void computerMove(char chessBoard[ROW][COL]) {
//	while (1) {
//		//用rand函数让电脑随机产生一个坐标
//		// % 是为了让随机出来的数在合法范围内(即小于棋盘最大行数)
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
////打印出棋盘
//void print(char chessBoard[ROW][COL]) {
//	printf("  +------------\n");
//	printf("  +0    1    2   \n");
//	printf("--+---+---+---+\n");//这样输出是为了使边框更美观
//	for (int row = 0; row < ROW; row++) {
//		printf("%d | %c | %c | %c |\n", row, chessBoard[row][0],
//			chessBoard[row][1], chessBoard[row][2]);
//		printf("--+---+---+---+\n");
//	}
//}
//
////初始化棋盘
//void init(char chessBoard[ROW][COL]) {
//	for (int r = 0; r < ROW; r++) {
//		for (int c = 0; c < COL; c++) {
//			chessBoard[r][c] = ' ';//将初始棋盘设为全空格状态
//		}
//	}
//}
//
////判断棋盘是否满了
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
////判断胜负
////'x'表示玩家赢了
////'o'表示电脑赢了
////' '表示胜负未分
////'h'表示和棋
//char isWin(char chessBoard[ROW][COL]) {
//	//判断所有列数是否有相同的三个
//	for (int col = 0; col < COL; col++) {
//		if (chessBoard[0][col] != ' ' 
//			&&chessBoard[0][col] == chessBoard[1][col] 
//			&&chessBoard[0][col] == chessBoard[2][col]) {
//			return chessBoard[0][col];
//		}
//	}
//	//判断所有行数是否有相同的三个
//	for (int row = 0; row < ROW; row++) {
//		if (chessBoard[row][0] != ' '
//			&& chessBoard[row][0] == chessBoard[row][1]
//			&& chessBoard[row][0] == chessBoard[row][2]) {
//			return chessBoard[row][0];
//		}
//	}
//	//判断两条对角线是否有相同的三个
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
//	//判断是否和棋 isFull()
//	if (isFull(chessBoard) == 1) {
//		return 'h';
//	}
//	//全部判断完都没有符合的 就是还没分出胜负
//	return ' ';
//}
//
////游戏函数
//void game() {
//	char chessBoard[ROW][COL] = { 0 };//创建一个棋盘
//	init(chessBoard);
//	char winner = ' ';
//	while (1) {
//		srand((unsigned int)time(0));
//		print(chessBoard);
//		playerMove(chessBoard);//玩家落子
//		//判断胜负
//		winner = isWin(chessBoard);
//		if (winner != ' ') {
//			break;
//		}
//		computerMove(chessBoard);//电脑落子
//		//判断胜负
//		winner = isWin(chessBoard);
//		if (winner != ' ') {
//			break;
//		}
//
//	}
//	//输出胜负结果
//	print(chessBoard);
//	if (winner == 'x') {
//		printf("恭喜您! 您赢了!\n");
//	}
//	else if (winner == 'o') {
//		printf("很遗憾,您输了~\n");
//	}
//	else {
//		printf("和棋!\n");
//	}
//}
//
////创建开始菜单
//int menu(){
//	printf("==================\n");
//	printf("1. 开始游戏！\n");
//	printf("0. 退出游戏！\n");
//	printf("==================\n");
//	int choice = 0;
//	printf("请输入您的选择:\n");
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
//			printf("成功退出游戏!\n");
//			break;
//		}
//	}
//
//	system("pause");
//	return 0;
//}
