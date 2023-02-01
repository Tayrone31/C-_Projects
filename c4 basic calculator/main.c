#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1,num2;
	printf("Enter the first number: ");
	scanf("%d",&num1);
	printf("Enter the second number: ");
	scanf("%d",&num2);
	printf("Answer is %d",num1 + num2);
	
	return 0;
}
