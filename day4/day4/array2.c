#include<stdio.h.>

int main() {
	int arr[] = { 10,20,30,40 };
	int i;
	int sum = 0;

	//30을 출력
	printf("a[2] = %2d\n", 2, arr[2]);

	//전체 출력

    for (i = 0; i < 4; i++) {
		printf("%3d", arr[i]);
	}

	//합계
	
	for (i = 0; i < 4; i++) {
		sum += arr[i];
	}
		printf("\n합계 : %d", sum);

		return 0;
}