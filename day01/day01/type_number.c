#include<stdio.h.>

int main() {

	// ���� �ڷ����� ����
	char val = -128;     // -128~127
	printf("%d\n", val);

	short val2 = 128;
	printf("%d\n", val2); // -128~127(���� �ʰ� : �����÷ο�)

	unsigned char val3 = 128;
	printf("%d\n", val3);  // 0~255

	//int�� �ڷ�
	int iNum = 2147483647;
	printf("%d\n", iNum);  

	int iNum2 = 2147483648;  //�����÷ο�
	printf("%d\n", iNum2);

	//�Ǽ��� ���е� ��
	float fNum = 1.1234567;  // �Ҽ� 6�ڸ����� ���� ����
	double dNum = 1.123456789012345;

	printf("%f\n", fNum);
	printf("%.15lf\n", dNum);

	return 0;
}