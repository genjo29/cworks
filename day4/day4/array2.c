#include<stdio.h.>

int main() {
	int arr[] = { 10,20,30,40 };
	int i;
	int sum = 0;

	//30�� ���
	printf("a[2] = %2d\n", 2, arr[2]);

	//��ü ���

    for (i = 0; i < 4; i++) {
		printf("%3d", arr[i]);
	}

	//�հ�
	
	for (i = 0; i < 4; i++) {
		sum += arr[i];
	}
		printf("\n�հ� : %d", sum);

		return 0;
}