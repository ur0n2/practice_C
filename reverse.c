#include <stdio.h>

void reverse(int number){
	while(number>0){
		printf("%d", number%10);
		number/=10;
	}
}

main(){
	int n;
	scanf("%d", &n);
	reverse(n);
}