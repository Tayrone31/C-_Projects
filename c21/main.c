#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void top(double a, double b){
double c;
	c= a+b;
	printf("The result is %f",c);
}

void cik(double a, double b){
	double c;
	c= a-b;
	printf("The result is %f",c);
}
void car(double a,double b){
double c;
	c= a*b;
		printf("The result is %f",c);
	
}
void bol(double a,double b){
	double c;
	c=a/b;
		printf("The result is %f",c);
}
void root(double a){
	printf("The result is %f",sqrt(a));
}
void us(double a,double b){
	printf("The result is %f",pow(a,b));
}
int main(int argc, char *argv[]) {
	char choose;
	double a1,a2;
	printf("Please choose your action\n");
	printf("+ for addition\n- for subtraction\n/ for division\n* for multification\nu for getting pow\nr for square root\n");
	scanf("%c",&choose);
	switch(choose){
	 case '+': printf("Enter the numbers: ");
	          scanf("%lf%lf",&a1,&a2);
	          top(a1,a2);
	          break;
	 case '-': printf("Enter the first number: ");
	  		   scanf("%lf",&a1);
	  		   printf("Enter the second number: ");
	  		   scanf("%lf",&a2);
	  		   cik(a1,a2);
	  		   break;
	case '/':  printf("Enter the first number: ");
			   scanf("%lf",&a1);
			   printf("Enter the second number: ");
			   scanf("%lf",&a2);
			   bol(a1,a2);
			   break;
	case '*':  printf("Enter the numbers: ");
			   scanf("%lf%lf",&a1,&a2);
			   car(a1,a2);
			   break;
	case 'u': printf("Enter the number: ");
	          scanf("%lf",&a1);
			  printf("Enter the power: ");
			  scanf("%lf",&a2);
			  us(a1,a2);
	   		  break;
	case 'r': printf("Enter the number: ");
			  scanf("%lf",&a1);
			  root(a1);
			  break;
	default: printf("Invalid operation");		  
	   		  
			   
						   
				          
		
		
	}
	
		
	

	return 0;
}
