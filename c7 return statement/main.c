#include <stdio.h>
#include <stdlib.h>

double cube(double num){
	double result = num*num*num;
	return result;
}

int main(int argc, char *argv[]) {
	printf("Enter the number you want to find out the cube\n");
	double x;
	scanf("%lf",&x);
	printf("The result is %.f",cube(x));
	return 0;
}
