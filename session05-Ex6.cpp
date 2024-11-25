#include<stdio.h>

int main(){
	int a,b,n,sum,minus,multy,devide;
	int exit=1;
	printf("Nhap so thu nhat: ");
	scanf("%d",&a);
	printf("Nhap so thu hai: ");
	scanf("%d",&b);
	while(exit==1){
		printf("CALCULATOR\n\n");
		printf("1.Tong 2 so\n");
		printf("2.Hieu 2 so\n");
		printf("3.Tich 2 so\n");
		printf("4.Thuong 2 so\n");
		printf("5.Thoat\n");
		printf("Lua chon cua ban la: ");
		scanf("%d",&n);
		if(n==1){
			sum = a + b;
			printf("Tong hai so la: %d\n",sum);
		}
		if(n==2){
		    minus = a - b;
		    printf("Hieu hai so la: %d\n",minus);
		}
		if(n==3){
			multy= a * b;
			printf("Tich hai so la: %d\n",multy);
		}
		if(n==4){
			devide= a / b;
			printf("Thuong hai so la: %d\n",devide);
		}
		if(n==5){
			exit=0;
		}
		}
		return 0;
	}