#include <stdio.h>

int main() {
	char str[100] = "";
	printf("문자를 입력하세요(100자 이내).\n");
	scanf_s("%s", str, 100);
	printf("입력된 문자는 %s입니다.\n", str);

	return 0;
}