////模拟实现strcat
////strcat 是用来拼接字符串的库函数, 将destination中的内容连接到sourc中
//#include<stdio.h>
//#include<stdlib.h>
//
////此处定义source为将要拼接的字符串, destination为源字符串, 就是将source拼接到destination上
//const* my_strcat(const * destination, const char * source) {
//	//参数校验
//	if (destination == NULL || source == NULL) {
//		return destination;
//	}
//	char* p = destination;
//	while (*p != '\0') {
//		p++;
//	}
//	//结束上面的循环后p就指向了destination的末尾
//
//	while (*source != '\0') {
//		*p = *source;
//		p++;
//		source++;
//	}
//	*p = '\0';//最后将\0也赋到destination后面
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