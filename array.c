#include<stdio.h>

// 1���� �迭 ����
// ABC���� ABCCBA ����ϱ�
void main () {
	int i;
	char source[3] = {'A', 'B', 'C'};
	char target[6];

	for (i = 0; i < 3; i++) {
		target[i] = source[i];
		printf("%c", source[i]);
	}
	printf("\n");

	for (i = 0; i < 3; i++)
		target[5 - i] = source[i];

	for (i = 0; i < 6; i++)
		printf("%c", target[i]);

	printf("\n");


}