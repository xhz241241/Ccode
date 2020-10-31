//二分查找（函数实现）
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int BinarySearch(int arr[], int len, int toFind) {
	int left = 0;//自定义子区间左值 即待查找区间最左端 
	int right = len - 1;//自定义待查找区间右值(注意最右端下标为数组长度减一)

	while (left <= right) {
		int mid = (left + right) / 2;//定义中间值mid
		if (toFind < arr[mid]) {//若中间值比待寻找的值大 证明待寻找的值在左侧 则排除右侧区间
			right = mid - 1;//待查找区间右端变为mid-1
		}
		else if (toFind > arr[mid]) {//若中间值比待寻找的值小 证明待寻找的值在右侧 则排除左侧区间
			left = mid + 1;//待查找区间左端变为mid+1
		}
		else {//若中间值与待寻找的值相比既不大也不小 则证明中间值就是待寻找的值
			printf("找到了!\n%d的下标为 %d\n", toFind, mid);//打印下标
			break;//找到了则跳出循环
		}
	}
	if (left > right) {//若区间左端大于右端则说明待寻找的值不在该数组内
		printf("未找到! \n");
	}

}

int main() {
	int arr[] = { 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, };//随便定义一个有序数组;
	int toFind;//定义待寻找的值
	printf("please enter what data you want to find:\n");
	scanf("%d", &toFind);//用户输入待寻找的数字
	int size = sizeof(arr) / sizeof(arr[0]);
	BinarySearch(arr, size, toFind);

	system("pause");
	return 0;
}
