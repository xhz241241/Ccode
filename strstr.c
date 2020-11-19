////模拟实现strstr
////strstr是返回子字符串在源字符串中出现的第一次位置(指针变量), 若没有找到则返回NULL
////这里我们定义str1为源字符串 str2为子字符串
//#include <stdio.h>
//#include<stdlib.h>
//
//const char* my_strstr(const char* str1, const char *str2) {
//	//注意 自己写函数第一步就是要校验参数的合法性, 虽然可能没有用但也会使代码更加完整
//	if (str1 == NULL || str2 == NULL) {
//		return NULL;
//	}
//	char* blackPtr = str1;//定义一个指针变量指向源字符串
//
//	//用for循环让black指针从源字符串首元素逐个向尾端递进
//	for(; *blackPtr != '\0'; blackPtr++) {
//		//再定义一个sub指针, 指向子字符串, 用来和源字符串对比是否一样
//		char* subPtr = str2;
//		//再定义一个red指针也指向black的位置, 当black和sub指向的元素一样时, red再递增
//		char* redPtr = blackPtr;
//
//		//内层套一个for循环, 若red指针指向的元素和sub指针指向的元素内容相等, 
//		//并且他俩都没有到末尾, 就让他俩逐个增加再次对比
//		for (; *redPtr != '\0' && *subPtr != '\0' 
//			&& *redPtr == *subPtr; redPtr++, subPtr++) {
//		}
//		//有且只有当sub指针为\0时,才算找到了对应的位置, 才能返回black的值
//		if (*subPtr == '\0') {
//			return blackPtr;
//		}
//	}
//	//循环完毕还没有找到即为没有
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
