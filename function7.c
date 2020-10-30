//递归和非递归分别实现strlen	

#include <stdio.h>
#include <stdlib.h>

int strLen(char str[]) {
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		count++;
	}
	return count;
}

int main() {
	char str[] = "hugobetter!";
	printf("length = %d\n", strLen(str));

	system("pause");
	return 0;
}