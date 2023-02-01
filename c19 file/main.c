#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *fpoint = fopen("emplo.txt","w");
	fprintf(fpoint,"Hiiiiiiiiiii");
	fclose(fpoint);
	return 0;
}
