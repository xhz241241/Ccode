////模拟实现strcmp
////strcmp就是对比两个字符串中内容一不一样
////注意如果一样返回的值为0, 若str1 > str2, 返回大于0的数字, 反之返回<0的数字
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//
//int my_strcmp(const char * str1, const char * str2) {
//	//第一步还是先校验参数的合法性
//	//此处不能用返回一个数字代表, 因为每个数字都有特定的含义
//	//故只能用assert, assert里面的表达式为真不会对代码产生影响, 若非真则会程序崩溃
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
//		//若到此处还没有结果 那就是这种情况
//		//hello 与 hellooo的比较
//		//此时只需要判断谁短谁就小
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
//		printf("相同!\n");
//	}
//	else {
//		printf("不相同!\n");
//	}
//
//	system("pause");
//	return 0;
//}