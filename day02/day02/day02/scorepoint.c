#include<stdio.h.>

int main() {
	//학점을 판정하는 프로그램
    //90점이상 A, 80점이상 B, 70점 이상 C, 60점이상 D, 60점미안 F

	int score = 77;
	char ch;

	//조건 처리
	if (score >= 90) {
		ch = 'A';

	}
	else if (score >= 80) {
		ch = 'B';

	}

	else if (score >= 70) {
		ch = 'C';

	}

	printf("%c학점입니다.\n");
	
	return 0;
}