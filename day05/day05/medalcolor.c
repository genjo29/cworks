#include <stdio.h>	

int main() {

	int ranking = 2;

	char *medalcolor;

	switch (ranking) {
	case 1:
		medalcolor = "Gold" ;
		break;
	case 2:
		medalcolor = "Silver";
		break;
	case 3:
		medalcolor = "Bronze";
		break;
	default:
		medalcolor = "Nothing";
		break;
	}

	printf("%d등 메달의 색상은 %s입니다.", ranking, medalcolor);
	return 0;
}
