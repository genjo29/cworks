#include<stdio.h.>
#define _CRT_SECURE_NO_WARNINGS

int main() {
    //���̰��� ����� ��� - �����оƵ�, �ʵ��л�, �߰���л�, �Ϲ���
	int age = 40;
	int charge = 0;

	if (age < 8) {
		charge = 1000;
		printf("�����оƵ��Դϴ�.");
	}

	else if (age >=8 && age < 14) { //1 && 1
		charge = 2000;
		printf("�ʵ��л��Դϴ�. ");
	}

	else if (age >= 8 && age < 20) {
		charge = 2500;
		printf("�߰���л��Դϴ�. ");
	}

	else {  //age >=20
		charge = 3000;
		printf("�Ϲ����Դϴ�. ");
	}
	printf("������ %d���Դϴ�.\n", charge);


	return 0;
}