////ģ��ʵ��strcmp
////strcmp���ǶԱ������ַ���������һ��һ��
////ע�����һ�����ص�ֵΪ0, ��str1 > str2, ���ش���0������, ��֮����<0������
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//
//int my_strcmp(const char * str1, const char * str2) {
//	//��һ��������У������ĺϷ���
//	//�˴������÷���һ�����ִ���, ��Ϊÿ�����ֶ����ض��ĺ���
//	//��ֻ����assert, assert����ı��ʽΪ�治��Դ������Ӱ��, ���������������
//	assert(str1 != NULL && str2 != NULL);
//	if(*str1 != '\0' && *str2 != '\0') {
//		if (*str1 > *str2) {
//			return 1;
//		}
//		else if (*str1 < *str2) {
//			return -1;
//		}
//		else {
//			str1++;
//			str2++;
//		}
//		//�����˴���û�н�� �Ǿ����������
//		//hello �� hellooo�ıȽ�
//		//��ʱֻ��Ҫ�ж�˭��˭��С
//		if (*str1 > * str2) {
//			return 1;
//		}
//		else if (*str1 < *str2) {
//			return -1;
//		}
//		else {
//			return 0;
//		}
//	}
//}
//
//int main() {
//	char str1[] = "hello";
//	char str2[] = "hello";
//	char str3[] = "ooooo";
//	int ret = my_strcmp(str1, str3);
//	if (ret == 0) {
//		printf("��ͬ!\n");
//	}
//	else {
//		printf("����ͬ!\n");
//	}
//
//	system("pause");
//	return 0;
//}