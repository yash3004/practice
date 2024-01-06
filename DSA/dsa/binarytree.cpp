#include<stdio.h>
void fizbuz(int n){
	if(n % 5 == 0){
		printf("\nBuz");
	}
	else if(n%3 == 0){
		printf("\nfiz");

	}
	if(n%3 == 0 && n%5==0){
		printf("\nfizbuz");
	}
	else {
		printf("\n%d" , n);
	}
}
int main()
{
	for(int i =0 ; i<100 ; i++){
		fizbuz(i);
	}
}