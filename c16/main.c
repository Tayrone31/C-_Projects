#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int multi [3][4]= {{1,2,3,4},{25,26,27,28},{35,36,37,38}};
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%d\n",multi[i][j]);
			printf("current i value: %d and current j value: %d\n",i,j);
		}
	}
	
	return 0;
}
