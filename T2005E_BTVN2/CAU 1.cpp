#include <stdio.h>

int main(){
	int a,b,c;
	printf("nhap a=\n");
	printf("nhap b=\n");
	printf("nhap c=\n");
	scanf("%d" ,&a);
	scanf("%d" ,&b);
	scanf("%d" ,&c);
	if(a>b){
		if(a>c){
			printf("so lon nhan la %d" ,a);
		}else{
			printf("so lon nhat la %d" ,c);
		}
	}else{
		if(b>c){
			printf("so lon nhat la %d" ,b);
		}else{
			printf("so lon nhat la %d", c);
		}
	}
}
