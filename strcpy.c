////ģ��ʵ��strcpy
////strcpy�ǽ��ַ����е������滻��, �൱���޸������ֵ
////��src�滻dest
//#include<stdio.h>
//#include<stdlib.h>
//
////dest����Դ�ַ���, ������Ҫ�޸�Դ�ַ���, �����β�����ǰ�����ټ�const
//char* my_strcpy(char * dest, const char * src) {
//	if (dest == NULL || src == NULL) {
//		return NULL;
//	}
//	char* ret = dest;
//	while (*src != '\0') {
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = '\0';
//	return ret;
//}
//
//int main() {
//	char str[] = "hello";
//	my_strcpy(str, "world");
//	printf("%s\n", str);
//
//	system("pause");
//	return 0;
//}