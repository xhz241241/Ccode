////判断电脑是大端字节序还是小端字节序
//#include<stdio.h>
//#include<stdlib.h>
//
//int main() {
//	int num = 0x11223344;
//	int* p = &num;
//	char* p2 = (char*)p;
//	if (* p2 == 0x11) {
//		printf("是大端字节序\n");
//	}
//	else {
//		printf("是小端字节序\n");
//	}
//
//	system("pause");
//	return 0;
//}