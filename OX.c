#include <stdio.h>

main(){
	int i,j,n;

	scanf("%d",&n);

	if(n%2==1){
		for(i=0; i<n; i++){
			for(j=0; j<n; j++){
				if(i==j || i==(n-(j+1)))
					printf("X");
				else
					printf("O");
			}
			printf("\n");
		}
	}
}
/*
 xooox
 oxoxo
 ooxoo
 oxoxo
 xooox
 */
