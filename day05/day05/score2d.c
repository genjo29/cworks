#include <stdio.h>

int main() {
	/* 학생 5명의 수학, 영어 점수 저장*/
	int x, y; // 반복 변수
	int score[5][2] = {
		{75,80},
		{85,95},
		{90,100},
		{70,90},
		{85,54},
	};
	int total[2] = { 0 }; // 합계 저장 초기화 때, 0을 1개만 표기
	double avg[2] = { 0.0}; // 평균 저장


	//출력
	for (x = 0; x < 5; x++) {
		for (y = 0; y < 2; y++) {
			printf("%3d", score[x][y]);
		}
		printf("\n");
	}

	//합계 계산
	for (x = 0; x < 5; x++) {
		total[0] += score[x][0];  //수학점수 합계
		total[1] += score[x][1]; //영어점수 합계
	}

	//평균 계산
	avg[0] = total[0] / 5; 
	avg[1] = total[1] / 5; 


	printf("수학 합계 : %d\n", total[0]);
	printf("영어 합계 : %d\n", total[1]);
	printf("수학 합계 : %.lf\n", avg[0]);
	printf("영어 합계 : %.1lf\n", avg[1]);

	return 0;
}