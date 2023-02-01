#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char line[255];
	FILE * fpointer= fopen("emplyoe","r");
	fgets(line,255,fpointer);
	printf("%s",line);
	fclose(fpointer);
	return 0;
}
