#include<stdio.h.>

int main() {
	//���-const (8 ����� ������ �� ����)
    const int MIN_NUM = 1;
	const int MAX_NUM = 100;
	const float PI = 3.1415; //��� pi�� 3.1415�� ������
	int radius = 5; //���� radius�� 5�� ����
	float area;

	//min_num=1; 
	//max_num=1000; ����� ������ �� ����

	printf("%d\n", MIN_NUM);
	printf("%d\n", MAX_NUM);


	//���� ���� ����ϱ� : ���� ���� *������*������
	area = PI * radius * radius;
	printf("���� ���� : %.2f\n", area);

	return 0;
}
