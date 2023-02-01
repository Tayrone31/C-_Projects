#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Student {
	int age;
	char name[50];
	char major[50];
};
int main(int argc, char *argv[]) {
	struct Student student1;
	student1.age = 20;
	strcpy(student1.major,"Electronics");
strcpy(student1.name, "OSMAN");
	printf("%s %s",student1.name,student1.major);
	return 0;
}
