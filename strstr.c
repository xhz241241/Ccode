////ģ��ʵ��strstr
////strstr�Ƿ������ַ�����Դ�ַ����г��ֵĵ�һ��λ��(ָ�����), ��û���ҵ��򷵻�NULL
////�������Ƕ���str1ΪԴ�ַ��� str2Ϊ���ַ���
//#include <stdio.h>
//#include<stdlib.h>
//
//const char* my_strstr(const char* str1, const char *str2) {
//	//ע�� �Լ�д������һ������ҪУ������ĺϷ���, ��Ȼ����û���õ�Ҳ��ʹ�����������
//	if (str1 == NULL || str2 == NULL) {
//		return NULL;
//	}
//	char* blackPtr = str1;//����һ��ָ�����ָ��Դ�ַ���
//
//	//��forѭ����blackָ���Դ�ַ�����Ԫ�������β�˵ݽ�
//	for(; *blackPtr != '\0'; blackPtr++) {
//		//�ٶ���һ��subָ��, ָ�����ַ���, ������Դ�ַ����Ա��Ƿ�һ��
//		char* subPtr = str2;
//		//�ٶ���һ��redָ��Ҳָ��black��λ��, ��black��subָ���Ԫ��һ��ʱ, red�ٵ���
//		char* redPtr = blackPtr;
//
//		//�ڲ���һ��forѭ��, ��redָ��ָ���Ԫ�غ�subָ��ָ���Ԫ���������, 
//		//����������û�е�ĩβ, ����������������ٴζԱ�
//		for (; *redPtr != '\0' && *subPtr != '\0' 
//			&& *redPtr == *subPtr; redPtr++, subPtr++) {
//		}
//		//����ֻ�е�subָ��Ϊ\0ʱ,�����ҵ��˶�Ӧ��λ��, ���ܷ���black��ֵ
//		if (*subPtr == '\0') {
//			return blackPtr;
//		}
//	}
//	//ѭ����ϻ�û���ҵ���Ϊû��
//	return NULL;
//
//}
//
//int main() {
//	char str1[] = "cdefgab";
//	char* p = my_strstr(str1, "ef");
//	printf("%s\n", p);
//
//	system("pause");
//	return 0;
//}
//
