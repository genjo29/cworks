#include<stdio.h.>

int main() {
	// ���� �ڷ���
	char ch = 'a'; // ������ ���� ch�� �����ϰ� 'a'�� ����
	printf("%c\n", ch);
	printf("%d\n", ch); // �ƽ�Ű �ڵ尪, 97

					


		//�ڷ����� ũ��
	printf("char ��=%dByte\n", sizeof(char)); // 4byte-32bit

	ch = 98; 
	printf("%c\n", ch); // ���ڷ� b
	printf("%c\n", ch+1); // ���ڷ� c
	printf("%d\n", ch+1); // 98

	//���� ���ڿ��� �ѱ��� �迭�� ǥ��
	char f[7] = "banana"; // ���ڿ��� �ֵ���ǥ�� ���Ѵ�. (�ǵ� '\0', null)
	char h[3] = "��";
	char h2[] = "\uD55C"; //�����ڵ�
	char h3[] = "\uAE00";

	printf("%s\n", f);
	printf("%s\n", h);
	printf("%s\n", h2); // ��
	printf("%s\n", h3); // ��

	return 0;
}