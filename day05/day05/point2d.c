#include <stdio.h>	

int main() {
	char ch = 'J';
	int iNum = 11;

	char* cp; //������ ������ cp ����
	char* ip; //������ ������ cp ����

	cp = &ch; //�����Ϳ� ch�� �ּ� ����
	cp = &iNum; //�����Ϳ� ch�� �ּ� ����

	printf("%x %c\n", cp, *cp); //cp�� ��, *cp�� �� ���
	printf("%d %d\n", sizeof(ch), sizeof(cp)); // 1byte 4byte//
	//������ �ڷ����� ũ��� ��� 4byte��

	printf("%x %d\n", ip, *ip); //ip�� ���� ��, *ip�� �� ���
	printf("%d %d\n", sizeof(iNum), sizeof(ip)); // 1byte 4byte//



	return 0;
}
