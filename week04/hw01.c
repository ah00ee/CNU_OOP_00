#include <stdio.h>

int main() {
	char str[100] = "";
	printf("���ڸ� �Է��ϼ���(100�� �̳�).\n");
	scanf_s("%s", str, 100);
	printf("�Էµ� ���ڴ� %s�Դϴ�.\n", str);

	return 0;
}