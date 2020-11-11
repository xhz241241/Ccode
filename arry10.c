////在屏幕上打印杨辉三角。
//#include <stdio.h>
//#include <stdlib.h>
//#define ROW 9
//#define COL 9
//
////构造杨辉三角形
//void set_Triangle(int arry[ROW][COL]) {
//	for (int row = 0; row < ROW; row++) {
//		for (int col = 0; col < COL; col++) {
//			arry[row][0] = 1;//将每一行的第一列都设为1
//			if (row >= 1 && col >= 1) {
//				//从第一行第一列开始, 该位置的数字等于它正上方和左上方数字之和
//				arry[row][col] = arry[row - 1][col - 1] + arry[row - 1][col];
//			}
//		}
//	}
//}
//
////打印杨辉三角形
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