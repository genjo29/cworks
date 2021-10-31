#include <stdio.h>	

int main() {
	//정수형 포인터 선ㅇ천 및 연산
	int data = 11;

	int* ip = &data; // 선언과 동시에 저장

	printf("%x %d\n", &data, data); // data의 주소, 값
	printf("%x %x\n", &ip, ip); // ip의 주소, 데이터의 주소
	printf("%d %d\n", &ip, data); // ip의 값, 데이터의 값

	printf("==포인터 연산==\n"); // ip의 값, 데이터의 값
	printf("%x %d %d\n", &data, data, *ip); // ip의 값, 데이터의 값
	printf("%x %d %d\n", &data+1, data+1, *ip+1); // ip의 값, 데이터의 값






	return 0;
}
