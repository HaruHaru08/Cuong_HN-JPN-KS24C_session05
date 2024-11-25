#include<stdio.h>

int main(){
	int number=25;
	int a,check = 1;
	while(check==1){
		printf("Nhap so bat ki: \n");
		scanf("%d",&a);
		if(a>25){
			printf("So ban nhap lon hon so can doan \n");
		}
		if(a<25){
			printf("So ban nhap nho hon so can doan \n");
		}
		if(a==number){
			printf("Ban doan dung roi");
			check=0;
		}
	}
	return 0;
}