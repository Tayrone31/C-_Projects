#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//case i�inde a ve A fark� i�in yapt���n �eyi yapabilirsin
	char grade;
    scanf(" %c",&grade);
    switch(grade){
    	case 'A':
		case 'a': 
    	        printf("You did perfect!");
    	        break;
    	case 'B':
				 printf("You did great");
				 break;
		case 'C':
		 		 printf("You did poorly");
				  break;
		case 'D':
				 printf("You did so bad");
				 break;
		case 'F': 
		 		 printf("You failed");
				 break;
		default: printf("Invalid Operation");		 		  		         
	}
	return 0;
}
