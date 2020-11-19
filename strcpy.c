////模拟实现strcpy
////strcpy是将字符串中的内容替换掉, 相当于修改里面的值
////用src替换dest
//#include<stdio.h>
//#include<stdlib.h>
//
////dest代表源字符串, 现在需要修改源字符串, 所以形参类型前不能再加const
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