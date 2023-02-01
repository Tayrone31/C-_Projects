#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
 sayHi("Osman",20);
 return 0;
}

void sayHi(char name[],int age){
	printf("Hi %s you are %d years old\n",name,age);
}
