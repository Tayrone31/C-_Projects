#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=1;
	while(i<=5){
		printf("%d\n",i);
		i++;
	}
	// or
	int y;
	for( y=1 ;y<=5;y++){
		printf("%d",y);
	}
	return 0;
}
