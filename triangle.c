#include <stdio.h>

main(){
	int i, j, n;
	scanf("%d", &n);
	for(i=1; i<=2*n-1; i+=2){
		for(j=1; j<=i; j++)
			printf("*", i);
		printf("\n");
	}
}


//5, 1 3 5 7 9
//4, 1 3 5 7 
//3, 1 3 5