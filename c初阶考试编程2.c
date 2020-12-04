//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void str_Reverse(char str[100], int size) {
//	int i = 0;
//	for (i = size - 1; i > 0; i--) {
//		if (str[i] == ' ') {
//			int j = i + 1;
//			while (str[j] != '\0') {
//				printf("%c", str[j]);
//				j++;
//			}
//			printf(" ");
//			str[i] = '\0';
//		}
//	}
//	printf("%c", str[i]);
//}
//
//int main() {
//	char str[100] = "i like you";
//	int size = strlen(str);
//	str_Reverse(str, size);
//
//	system("pause");
//	return 0;
//}