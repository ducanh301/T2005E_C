#include <stdio.h>

int main(){
	int a,b,c ;
	printf("Nhap so do cua 3 canh: \n");
	printf("nhap a=\n ");
	printf("nhap b=\n ");
	printf("nhap c=\n ");
	scanf("%d" ,&a);
	scanf("%d", &b);
	scanf("%d", &c);
	if(a+b>c){
		if(a+c>b){
			if(b+c>a){
				printf("la ba canh cua tam giac");
			}else{
				printf(" khong la ba canh cua tam giac ");
			}
		}else{
			printf("khong la ba canh cua tam giac");
		}
	}else{
		printf("khong la ba canh cua tam giac ");
	}
}
