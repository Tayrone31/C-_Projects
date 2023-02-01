#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int secretNumber=5;
	int guess;
	int guesscount= 0;
	int guesslimit= 3;
	int outofguess=0;
	while(guess != secretNumber && outofguess== 0){
		if(guesscount<guesslimit){
		 printf("Enter a number: ");
		 scanf("%d",&guess);
		 guesscount++;
	   }
	   else {outofguess =1;
	   }
	}
	if(outofguess==0){
		printf("You win");
	}
	else {
		printf("You lost!");
	}
	
	return 0;

	
}
