////ģ��ʵ��strcat
////strcat ������ƴ���ַ����Ŀ⺯��, ��destination�е��������ӵ�sourc��
//#include<stdio.h>
//#include<stdlib.h>
//
////�˴�����sourceΪ��Ҫƴ�ӵ��ַ���, destinationΪԴ�ַ���, ���ǽ�sourceƴ�ӵ�destination��
//const* my_strcat(const * destination, const char * source) {
//	//����У��
//	if (destination == NULL || source == NULL) {
//		return destination;
//	}
//	char* p = destination;
//	while (*p != '\0') {
//		p++;
//	}
//	//���������ѭ����p��ָ����destination��ĩβ
//
//	while (*source != '\0') {
//		*p = *source;
//		p++;
//		source++;
//	}
//	*p = '\0';//���\0Ҳ����destination����
//	return destination;
//}
//
//int main() {
//	char str[] = "Disney";
//	my_strcat(str, "is my home!");
//	printf("%s\n", str);
//
//	system("pause");
//	return 0;
//}