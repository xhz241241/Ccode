////编写一个函数 reverse_string(char * string)（递归实现）
////实现：将参数字符串中的字符反向排列。
////要求：不能使用C函数库中的字符串操作函数。
//#include <stdio.h>
//#include <stdlib.h>
//
//int my_strLen(char str[]);//函数声明
//void reverse_string(char str[]);//函数声明
//
//
//int my_strLen(char str[]) {//需要一个求数组长度的函数 自定义一个my_strLen
//	if (str[0] == '\0') {//当数组开头为结束标志符\0时 表示数组已经遍历完毕
//		return 0;
//	}
//	return 1 + my_strLen(str + 1);//数组长度等于1 + 以第二个元素开头的数组长度
//}
//	
////逆序函数
//void reverse_string(char str[]) {
//	int len = my_strLen(str);//首先求出数组长度 长度-1即为数组内最后一个字符下标
//	char tem = *str;//定义一个临时变量储存首字符的内容
//	*str = *(str + len - 1);//将最后一个元素赋值给第一个字符，完成第一组逆序
//	*(str + len - 1) = '\0';//将\0赋值给最后一个字符，使递归找到最后一个字符
//	if (my_strLen(str) > 0) {//如果数组长度不小于0 则一直递归下去
//		reverse_string(str + 1);
//	}
//	*(str + len - 1) = tem;//数组长度小于0，即后半部分已经逆序完毕
//}						//此时将前半部分的值逐个速出即可，就是tem里面存储的值
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