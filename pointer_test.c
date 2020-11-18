//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int main() {
//	int arr[4] = {1, 2, 3, 4};
//	printf("%d\n", sizeof(arr));//16 数组指针
//	printf("%d\n", sizeof(arr + 0));//4 与sizeof(int *)等价
//	^只有指针可以进行加法运算, 故此处的arr被隐式转换成了指针, 指向数组首元素
//	printf("%d\n", sizeof(*arr));//4 对于首元素解引用 与sizeof(int)等价
//	printf("%d\n",sizeof(arr + 1));//4 与sizeof(int*)等价 指向数组第二个元素的指针
//	printf("%d\n", sizeof(arr[1]));//4 与sizeof(int)等价
//	printf("%d\n", sizeof(&arr));//4 等价于sizeof(int*) 是一个数组指针arr(*)[4]
//	printf("%d\n", sizeof(*&arr));//16 等价于sizeof(int)
//	先&得到了一个数组指针 再解引用得到数组arr
//	printf("%d\n", sizeof(&*arr));//4 等价于sizeof(int*)
//	此处的arr会隐式转换成指针 再解引用得到首元素 再&得到首元素的地址
//	printf("%d\n", sizeof(&arr + 1));//4 等价于sizeof(int(*)[4])
//	printf("%d\n", sizeof(&arr[0]));//4 对第一个元素取地址
//	printf("%d\n", sizeof(&arr[0] + 1));//4 对第二个元素取地址
//
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));//7 字符串中包含结束标志符
//	printf("%d\n", sizeof(arr + 0));//4 与sizeof(char*)等价
//	printf("%d\n", sizeof(*arr));//1 arr被隐式转换成了指针 在解引用得到了第一个元素的值
//	printf("%d\n", sizeof(arr[1]));//1 第二个元素
//	printf("%d\n", sizeof(&arr[0] + 1));//4 代表指向了第二个元素的指针 即sizeof(char*)
//	printf("%d\n", sizeof(&arr));//4 表示数组指针 sizeof(char(*)[7])
//	printf("%d\n", sizeof(*&arr));//7 先&得到了数组指针 在解引用得到了数组的值即char[7]
//
//	strlen的参数是char*类型 故若类型传入错误会导致类型不匹配 出现未定义行为
//	printf("%d\n", strlen(arr));//6 strlen是遇到结束标志符停止计数 所以此处是6
//	printf("%d\n", strlen(arr + 1));//5 指向的是第二个元素 从第二个元素开始数五个数遇到/0
//	printf("%d\n", strlen(&arr + 1));//类型不匹配 此处的arr是数组指针 再&会得到cahr**
//	printf("%d\n", strlen(&arr));//还是类型不匹配
//	printf("%d\n", strlen(&arr[0]));//6 取的是第一个元素的地址到\0的距离
//	printf("%d\n", strlen(*&arr));//6 相当于strlen(arr) 先取地址得到数组指针在解引用得到数组
//	printf("%d\n", strlen(&arr[1] + 1));//4 相当于从第三个元素起计到\0的距离
//
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));//4 p是一个指针变量 而指针变量输出的大小只取决于操作系统的位数(我的电脑是32位系统的)
//	printf("%d\n", sizeof(p + 1));//4 p指向的是整个数组 而p再+1指向的是数组后一位的元素 但类型依旧是指针类型所以还是4
//	printf("%d\n", sizeof(*p));//1 p是一个指针再解引用得到了第一个元素
//	printf("%d\n", sizeof(&p));//4 sizeof(char**)类型
//	printf("%d\n", sizeof(&p[1] + 1));//4 p[1]是对p解了引用后的 再&得到的是char*类型+1还是一样
//	printf("%d\n", sizeof(&*p));//4 先解引用再&得到的还是char*类型
//
//	printf("%d\n", strlen(p)); // 6 strlen 取的是到\0的距离
//	printf("%d\n", strlen(p + 1)); // 5 从第二个元素到\0
//	printf("%d\n", strlen(*p)); // 类型不匹配 strlen的参数要求是cahr*类型 此处是char**
//	printf("%d\n", strlen(p[1])); // 类型不匹配 此处的类型是char
//	printf("%d\n", strlen(&p)); // 类型不匹配  此处的类型是cahr**
//	printf("%d\n", strlen(&p[1] + 1)); // 4 p[1]指向了第一个元素a 再&得到了a的地址(char*) +1还是一样
//	printf("%d\n", strlen(*&p)); // 6 先&得到了char**再解引用得到了char*
//	printf("%d\n", strlen(&*p)); // 6 先解引用得到了char 再&得到了char*
//
//	int arr[3][4] = { 0 };
//	printf("%d\n", sizeof(arr)); // 48  sizeof(int[3][4])
//	printf("%d\n", sizeof(arr[0])); //16 表示第一行的所有元素的大小
//	printf("%d\n", sizeof(arr[0] + 1)); // 4 sizeof(int*) arr[0]是int[4]类型 再+1会转成指针类型
//	printf("%d\n", sizeof(&arr[0] + 1)); // 4 sizeof(int(*)[4]) arr[0]&得到了一个数组指针 +1一样
//	printf("%d\n", sizeof(arr[0][0])); // 4 表示了第一行第一列的元素的大小
//	printf("%d\n", sizeof(*arr[0])); // 4 arr[0]是int[4]类型 再解引用得到int
//	 printf("%d\n", sizeof(*arr)); // 16 arr会被隐式转成指针(int(*)[4]) 再解引用得到int[4] 
//	printf("%d\n", sizeof(*(arr + 1))); // 16 相当于arr[1]
//	printf("%d\n", sizeof(*arr + 1));//4 arr会被隐式转换成指针 再*得到int(*)[4] 再+1得到int(*)类型
//	printf("%d\n", sizeof(&arr[0] + 1)); // 4 arr[0]是一个一维数组 &得到了int(*)[4] +1还是一样
//	printf("%d\n", sizeof(*(arr[0] + 1)));//4 先arr[0]得到了int[4] 再+1会被隐式转成指针 再*得到int类型
//
//	system("pause");
//	return 0;
//}