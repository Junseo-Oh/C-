#pragma warning(disable:4996)
#include<stdio.h>
// if문 연습 
// 알람 시계 : 45분전 시간을 출력
void main() {
	int h; int m;
	scanf("%d %d", &h, &m);

	if (0<h && h<=24 ){
		if (m >= 45)
			printf("%d %d", h, m - 45);
		else 
			printf("%d %d", h-1,m + 15);

	}
	if (h == 0) {
		if (m >= 45)
			printf("%d %d", h, m - 45);
		else    printf("23 %d", m+15);


	}
}