#include <iostream>

int main(void) {
	int num1 = 0;
	int num2 = 0;
	char s1[21] = {0 };
	scanf("%d", &num1);

	for (int i = 0; i < num1; i++) {
		scanf("%d %s", &num2, s1);
	
		for (int k = 0;  s1[k] !=0; k++) {
			for (int j = 0; j < num2; j++) {
				printf("%c", s1[k]);
			}
		}
		printf("\n");
		}

	
	

	
	return 0;
}
