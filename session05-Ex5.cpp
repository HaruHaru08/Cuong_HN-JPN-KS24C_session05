#include<stdio.h>

int main(){
	int n=1;
	for(int i=1;i<=10;i++){
		printf("%d",n);
		printf("*");
		printf("%d",i);
		printf("%=");
		printf("%d\n",n*i);
		if(i>=10){
			i=0;
			n++;
			if(n>9){
				break;
			}
		}
	}
	return 0;
}