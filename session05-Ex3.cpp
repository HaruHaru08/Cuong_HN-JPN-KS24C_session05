#include<stdio.h>

int main(){
	int n,sum;
	printf("Nhap mot so nguyen duong: ");
	scanf("%d",&n);
	if(n<0){
		printf("Ban nhap sai roi");
		return 1;
	}
	for(int i =1;i<=n;i++){
		sum+=i;
	}
	printf("Tong tat ca cac so tu 1 den n la: %d",sum);
	return 0;
}