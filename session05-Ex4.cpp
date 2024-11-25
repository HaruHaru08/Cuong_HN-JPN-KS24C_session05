#include<stdio.h>

int main(){
	int n;
	printf("Nhap 1 so nguyen duong tu 1 den 10: ");
	scanf("%d",&n);
	if(n<=0 || n>10){
		printf("So khong hop le");
		return 1;
	}
	for(int i=1;i<=10;i++){
		printf("%d",n);
		printf("*");
		printf("%d",i);
		printf("%=");
		printf("%d\n",n*i);
	}
	return 0;
}