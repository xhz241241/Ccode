////��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
////ʵ�֣��������ַ����е��ַ��������С�
////Ҫ�󣺲���ʹ��C�������е��ַ�������������
//#include <stdio.h>
//#include <stdlib.h>
//
//int my_strLen(char str[]);//��������
//void reverse_string(char str[]);//��������
//
//
//int my_strLen(char str[]) {//��Ҫһ�������鳤�ȵĺ��� �Զ���һ��my_strLen
//	if (str[0] == '\0') {//�����鿪ͷΪ������־��\0ʱ ��ʾ�����Ѿ��������
//		return 0;
//	}
//	return 1 + my_strLen(str + 1);//���鳤�ȵ���1 + �Եڶ���Ԫ�ؿ�ͷ�����鳤��
//}
//	
////������
//void reverse_string(char str[]) {
//	int len = my_strLen(str);//����������鳤�� ����-1��Ϊ���������һ���ַ��±�
//	char tem = *str;//����һ����ʱ�����������ַ�������
//	*str = *(str + len - 1);//�����һ��Ԫ�ظ�ֵ����һ���ַ�����ɵ�һ������
//	*(str + len - 1) = '\0';//��\0��ֵ�����һ���ַ���ʹ�ݹ��ҵ����һ���ַ�
//	if (my_strLen(str) > 0) {//������鳤�Ȳ�С��0 ��һֱ�ݹ���ȥ
//		reverse_string(str + 1);
//	}
//	*(str + len - 1) = tem;//���鳤��С��0������벿���Ѿ��������
//}						//��ʱ��ǰ�벿�ֵ�ֵ����ٳ����ɣ�����tem����洢��ֵ
//
//int main() {
//	char str[] = "abcdefg";
//	printf("before :%s\n", str);
//	reverse_string(str);
//	printf("after :%s\n", str);
//
//	system("pause");
//	return 0;
//}