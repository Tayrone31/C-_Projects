#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void max(){
	int num1,num2;
	scanf("%d%d",&num1,&num2);
	if(num1>num2){
		 printf("bigest is %d",num1);
	}
	 else if(num2>num1){
	  printf("biggest is %d",num2);
	 }
}
int main(int argc, char *argv[]) {
	
	max();
	return 0;
}
