#include <stdio.h>
#include <stdlib.h>

void max(){
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	if(x>y && x>z){
		printf("Biggest number is %d",x);
		
	}
	else if(y>x && y>z){
		printf("Biggest number is %d",y);
	}
	else printf("Biggest number is %d",z);
}

int main(int argc, char *argv[]) {
	max();
	return 0;
}
