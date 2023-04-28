#include <stdio.h>
void A();
void B();
int main(){

	int a = 0, n = 0;
	while (1) {
        scanf_s("%d", &a);
		n += a;
		if (n > 100) {
			printf_s("반복종료\n");
			break;
		}
		
	
	}
	
	return 0;
}
void A() {
	int n = 0;
	int dan = 0;
	for (int n = 0; n < 10; n++) {
		for (int dan = 0; dan < 10; dan++)
		{
			printf_s("%d * %d = %d\n", n, dan, n * dan);
		}
		printf_s("\n");
	}
}
void B() {
	int n = 9;
	int dan = 9;
	for (int n = 9; n > 0; n--) {
		for (int dan = 9; dan > 0; dan--)
		{
			printf_s("%d * %d = %d\n", n, dan, n * dan);
		}
		printf_s("\n");
	}
}