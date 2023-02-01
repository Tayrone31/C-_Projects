#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int a1rgc, char *argv[]) {
	int age=30;
	int *page= &age;
	printf("%p\n",page);
	printf("%d",*page);

	return 0;
}
