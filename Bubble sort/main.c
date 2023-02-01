#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */





int main(int argc, char *argv[]) {
int a[6];
int temp;
  for(int i=0;i<6;i++){
  	scanf("%d",&a[i]);
	  printf("%d.eleman %d\n",i,a[i]);
  	
  	
  }
  printf("Before sorting algorithmas\n");
  int f=0;
  while(f==0){
  	f=1;
  	for(int i=0;i<6;i++){
  		if(a[i]>a[i+1]){
  			temp= a[i+1];
  			a[i+1]=a[i];
  			a[i]=temp;
  			f=0;
		  }
	  }
  }
  printf("Data in order:\n");
  for(int i=0;i<6;i++){
  	printf("%d\n",a[i]);
  }
	

	
	return 0;
}