#include<stdio.h.>

int main() {
	//상수-const (8 상수는 변경할 수 없음)
    const int MIN_NUM = 1;
	const int MAX_NUM = 100;
	const float PI = 3.1415; //상수 pi에 3.1415를 저장함
	int radius = 5; //변수 radius에 5를 저장
	float area;

	//min_num=1; 
	//max_num=1000; 상수는 변경할 수 없음

	printf("%d\n", MIN_NUM);
	printf("%d\n", MAX_NUM);


	//원의 넓이 계산하기 : 원의 넓이 *반지름*반지름
	area = PI * radius * radius;
	printf("원의 넓이 : %.2f\n", area);

	return 0;
}
