#include<stdio.h.>

int main() {

   //자동 형변환
	int iNum = 20;
	float fNum = iNum;

	printf("%f\n", fNum); //20.000000

	//강제 형변환 : 작은자료형=(작은 자료형) 큰자료형
	double dNum = 2.54;
	int iNum2 = (int)dNum;
	printf("%d\n", iNum2);

	//연산
	dNum = 1.2;
	fNum = 0.9;

	iNum = (int)dNum + (int)fNum;

printf("%d\n", iNum);
	
iNum = (int)(dNum +fNum);

printf("%d\n", iNum);

//사칙연산
int n1 = 10, n2 = 4;  //변수를 중복 선언할때 , (콤마) 사용
int result;
double result2;

result = n1 + n2;
printf("%d\n", result);

result = n1 - n2;
printf("%d\n", result);

result = n1 * n2;
printf("%d\n", result);

result2 = (double)n1 /n2;
printf("%.1lf\n", result2);

	return 0;
}