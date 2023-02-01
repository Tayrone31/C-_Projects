#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double num1,num2;
	char op;
menu : printf("Please enter a number: ");
	scanf("%lf",&num1);
	printf("Please enter the operator: ");
	scanf(" %c",&op);
	printf("Please enter the second number: ");
	scanf("%lf",&num2);
	if(op== '+'){
		printf("The result is %f",num1 + num2);
		}
	else if (op== '-'){
		printf("The result is %f",num1-num2);
	}
	else if(op== '/'){
		printf("The result is %f",num1 / num2);
	}
	else if (op=='*'){
		printf("The result is %.2f",num1*num2);
	}
	else{
		printf("Invalid operation\n");
		
		goto menu;
	}
	
	return 0;
}
