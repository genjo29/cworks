#include<stdio.h.>

void sayHello(); //������Ÿ��(�ڷ��� �Լ��̸�()>
void sayHello2(char[]); //������Ÿ��(�ڷ��� �Լ��̸�()>

int main() {


	sayHello();
	sayHello2("C++");
	sayHello2("Python");

	return 0;
}

//void�� ��ȯ �ڷᰡ ����.
void sayHello() { //sayHello��� �̸��� �Լ� ����
	printf("Hello~ C!");
}

void sayHello2(char lang[]) {
	printf("Hello~ %s\n", lang);
}