#include <stdio.h>
void trans1();
void trans2();
void trans3();
void trans4();

//1
//22
//333
//4444
//55555

int main() {

	for (int a = 1; a <= 5; a++)
	{
		for (int b = 0; b <= 5; b++) {
			
			if (a > b)
			{
				printf_s("%d", a);
			}
			
						
			}
		printf_s("\n");
		}

		
	
	return 0;
}
	void trans1() {
		for (int a = 0; a <= 5; a++) {
			for (int b = 0; b <= 5; b++)
			{
				if (a > b) {
					printf_s("*");
				}
			}
			printf_s("\n");
		}
	}
void trans2() {
	for (int a = 5; a >= 0; a--) {
		for (int b = 5; b >= 0; b--)
		{
			if (a > b) {
				printf_s("*");
			}
		}
		printf_s("\n");
	}
}
void trans3() {
	for (int i = 0; i < 5; i++)
	{
		printf_s("*");
	}
}
void trans4() {
	for (int i = 0; i < 5; i++)
	{
		printf_s("*\n");
	}
}
