#include <stdio.h>

main() {
	// ���� ���� - �ڷ��� �����̸�;
	int a;  // ������ ���� a�� ����
	int b;
	int c = -5; // ����� ���� �ʱ�ȭ

	a = 7; // �����̸� = �� ����
	b = 6;

	a = a + 1;   // ������ ������ ��� �� ���� a �� ����

	//�ڷ����� ũ��
	printf("int ��=%dByte\n", sizeof(int)); // 4byte-32bit

	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	printf("������ ���̴� %d���̰�, ���� ���̴� %d���Դϴ�.", a, b); 

}