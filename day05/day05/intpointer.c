#include <stdio.h>	

int main() {
	//������ ������ ����õ �� ����
	int data = 11;

	int* ip = &data; // ����� ���ÿ� ����

	printf("%x %d\n", &data, data); // data�� �ּ�, ��
	printf("%x %x\n", &ip, ip); // ip�� �ּ�, �������� �ּ�
	printf("%d %d\n", &ip, data); // ip�� ��, �������� ��

	printf("==������ ����==\n"); // ip�� ��, �������� ��
	printf("%x %d %d\n", &data, data, *ip); // ip�� ��, �������� ��
	printf("%x %d %d\n", &data+1, data+1, *ip+1); // ip�� ��, �������� ��






	return 0;
}
