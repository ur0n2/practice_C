#include <stdio.h>

main(){
	char ff[10], i=0;
	gets(ff);
	
	//printf("%x %x %x \n", 'a', 'A', 'a'-'A');
	while(ff[i]){
		if(ff[i] >= 'a' && ff[i] <= 'z')
			ff[i] ^= 0x20;
		else if(ff[i] >= 'A' && ff[i] <= 'Z')
			ff[i] ^= 0x20;
		i+=1;
	}
	puts(ff);
}
