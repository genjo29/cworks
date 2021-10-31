#include<stdio.h.>
#include<math.h>

int main() {

	//수학 관련 함수는 math.h를 include 함
	//절대값 계산하기
	printf("%d\n", abs(3));
	printf("%d\n", abs(-3));

	//반올림
	printf("%.1f\n", round(2.54)); //3.0
	printf("%.1f\n", round(2.30)); //2.0
	printf("%.1f\n", round(-2.30)); //-2.0
	printf("%.1f\n", round(-2.50)); //-3.0

	//버림(내림) - 단, 음수일 경우에는 작은 수 쪽으로 버림
	printf("%.1f\n", floor(2.54)); //2.0
	printf("%.1f\n", floor(-2.54)); //-2.0



	return 0;
}
