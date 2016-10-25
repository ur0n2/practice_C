#include <stdio.h>

main(){
	int n, k, i;
	char set[11]={1,2,3,4,5,6,7,8,9,10};
	scanf("%d %d", &n, &k);
	
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			set[i]=i;
			printf("%d\n",set[i]);
	}

	
	
	
	
	//n,k 5,4 1234 1235 1245 1345 2345

}