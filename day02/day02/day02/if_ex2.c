#include<stdio.h.>
#define _CRT_SECURE_NO_WARNINGS

int main() {
    //놀이공원 입장료 계산 - 미취학아동, 초등학생, 중고등학생, 일반일
	int age = 40;
	int charge = 0;

	if (age < 8) {
		charge = 1000;
		printf("미취학아동입니다.");
	}

	else if (age >=8 && age < 14) { //1 && 1
		charge = 2000;
		printf("초등학생입니다. ");
	}

	else if (age >= 8 && age < 20) {
		charge = 2500;
		printf("중고등학생입니다. ");
	}

	else {  //age >=20
		charge = 3000;
		printf("일반인입니다. ");
	}
	printf("입장료는 %d원입니다.\n", charge);


	return 0;
}