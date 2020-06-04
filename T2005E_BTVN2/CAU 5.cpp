#include <stdio.h>

int main(){
	int a , b ;
	printf("nhap gia tri can tinh: \n");
	scanf("%d" ,&a);
	scanf("%d" ,&b);
	if(a>=b){
		printf("Dap an la %d:",a/b);
	}else{
		printf("Dap an la %d:" , a*b);
	}
}
