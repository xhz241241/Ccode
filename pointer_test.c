//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int main() {
//	int arr[4] = {1, 2, 3, 4};
//	printf("%d\n", sizeof(arr));//16 ����ָ��
//	printf("%d\n", sizeof(arr + 0));//4 ��sizeof(int *)�ȼ�
//	^ֻ��ָ����Խ��мӷ�����, �ʴ˴���arr����ʽת������ָ��, ָ��������Ԫ��
//	printf("%d\n", sizeof(*arr));//4 ������Ԫ�ؽ����� ��sizeof(int)�ȼ�
//	printf("%d\n",sizeof(arr + 1));//4 ��sizeof(int*)�ȼ� ָ������ڶ���Ԫ�ص�ָ��
//	printf("%d\n", sizeof(arr[1]));//4 ��sizeof(int)�ȼ�
//	printf("%d\n", sizeof(&arr));//4 �ȼ���sizeof(int*) ��һ������ָ��arr(*)[4]
//	printf("%d\n", sizeof(*&arr));//16 �ȼ���sizeof(int)
//	��&�õ���һ������ָ�� �ٽ����õõ�����arr
//	printf("%d\n", sizeof(&*arr));//4 �ȼ���sizeof(int*)
//	�˴���arr����ʽת����ָ�� �ٽ����õõ���Ԫ�� ��&�õ���Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(&arr + 1));//4 �ȼ���sizeof(int(*)[4])
//	printf("%d\n", sizeof(&arr[0]));//4 �Ե�һ��Ԫ��ȡ��ַ
//	printf("%d\n", sizeof(&arr[0] + 1));//4 �Եڶ���Ԫ��ȡ��ַ
//
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));//7 �ַ����а���������־��
//	printf("%d\n", sizeof(arr + 0));//4 ��sizeof(char*)�ȼ�
//	printf("%d\n", sizeof(*arr));//1 arr����ʽת������ָ�� �ڽ����õõ��˵�һ��Ԫ�ص�ֵ
//	printf("%d\n", sizeof(arr[1]));//1 �ڶ���Ԫ��
//	printf("%d\n", sizeof(&arr[0] + 1));//4 ����ָ���˵ڶ���Ԫ�ص�ָ�� ��sizeof(char*)
//	printf("%d\n", sizeof(&arr));//4 ��ʾ����ָ�� sizeof(char(*)[7])
//	printf("%d\n", sizeof(*&arr));//7 ��&�õ�������ָ�� �ڽ����õõ��������ֵ��char[7]
//
//	strlen�Ĳ�����char*���� �������ʹ������ᵼ�����Ͳ�ƥ�� ����δ������Ϊ
//	printf("%d\n", strlen(arr));//6 strlen������������־��ֹͣ���� ���Դ˴���6
//	printf("%d\n", strlen(arr + 1));//5 ָ����ǵڶ���Ԫ�� �ӵڶ���Ԫ�ؿ�ʼ�����������/0
//	printf("%d\n", strlen(&arr + 1));//���Ͳ�ƥ�� �˴���arr������ָ�� ��&��õ�cahr**
//	printf("%d\n", strlen(&arr));//�������Ͳ�ƥ��
//	printf("%d\n", strlen(&arr[0]));//6 ȡ���ǵ�һ��Ԫ�صĵ�ַ��\0�ľ���
//	printf("%d\n", strlen(*&arr));//6 �൱��strlen(arr) ��ȡ��ַ�õ�����ָ���ڽ����õõ�����
//	printf("%d\n", strlen(&arr[1] + 1));//4 �൱�ڴӵ�����Ԫ����Ƶ�\0�ľ���
//
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));//4 p��һ��ָ����� ��ָ���������Ĵ�Сֻȡ���ڲ���ϵͳ��λ��(�ҵĵ�����32λϵͳ��)
//	printf("%d\n", sizeof(p + 1));//4 pָ������������� ��p��+1ָ����������һλ��Ԫ�� ������������ָ���������Ի���4
//	printf("%d\n", sizeof(*p));//1 p��һ��ָ���ٽ����õõ��˵�һ��Ԫ��
//	printf("%d\n", sizeof(&p));//4 sizeof(char**)����
//	printf("%d\n", sizeof(&p[1] + 1));//4 p[1]�Ƕ�p�������ú�� ��&�õ�����char*����+1����һ��
//	printf("%d\n", sizeof(&*p));//4 �Ƚ�������&�õ��Ļ���char*����
//
//	printf("%d\n", strlen(p)); // 6 strlen ȡ���ǵ�\0�ľ���
//	printf("%d\n", strlen(p + 1)); // 5 �ӵڶ���Ԫ�ص�\0
//	printf("%d\n", strlen(*p)); // ���Ͳ�ƥ�� strlen�Ĳ���Ҫ����cahr*���� �˴���char**
//	printf("%d\n", strlen(p[1])); // ���Ͳ�ƥ�� �˴���������char
//	printf("%d\n", strlen(&p)); // ���Ͳ�ƥ��  �˴���������cahr**
//	printf("%d\n", strlen(&p[1] + 1)); // 4 p[1]ָ���˵�һ��Ԫ��a ��&�õ���a�ĵ�ַ(char*) +1����һ��
//	printf("%d\n", strlen(*&p)); // 6 ��&�õ���char**�ٽ����õõ���char*
//	printf("%d\n", strlen(&*p)); // 6 �Ƚ����õõ���char ��&�õ���char*
//
//	int arr[3][4] = { 0 };
//	printf("%d\n", sizeof(arr)); // 48  sizeof(int[3][4])
//	printf("%d\n", sizeof(arr[0])); //16 ��ʾ��һ�е�����Ԫ�صĴ�С
//	printf("%d\n", sizeof(arr[0] + 1)); // 4 sizeof(int*) arr[0]��int[4]���� ��+1��ת��ָ������
//	printf("%d\n", sizeof(&arr[0] + 1)); // 4 sizeof(int(*)[4]) arr[0]&�õ���һ������ָ�� +1һ��
//	printf("%d\n", sizeof(arr[0][0])); // 4 ��ʾ�˵�һ�е�һ�е�Ԫ�صĴ�С
//	printf("%d\n", sizeof(*arr[0])); // 4 arr[0]��int[4]���� �ٽ����õõ�int
//	 printf("%d\n", sizeof(*arr)); // 16 arr�ᱻ��ʽת��ָ��(int(*)[4]) �ٽ����õõ�int[4] 
//	printf("%d\n", sizeof(*(arr + 1))); // 16 �൱��arr[1]
//	printf("%d\n", sizeof(*arr + 1));//4 arr�ᱻ��ʽת����ָ�� ��*�õ�int(*)[4] ��+1�õ�int(*)����
//	printf("%d\n", sizeof(&arr[0] + 1)); // 4 arr[0]��һ��һά���� &�õ���int(*)[4] +1����һ��
//	printf("%d\n", sizeof(*(arr[0] + 1)));//4 ��arr[0]�õ���int[4] ��+1�ᱻ��ʽת��ָ�� ��*�õ�int����
//
//	system("pause");
//	return 0;
//}