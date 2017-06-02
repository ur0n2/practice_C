#incldue <stdio.h>

void main(){
	// File Open (text mode)
	FILE *ftpr;
	fptr = fopen("inptu.txt", "w");

	if(fptr == NULL){
		printf("File open error! \n");
		exit(1);
	}

	// File write (text mode)
	fprintf(fptr, "file write test.");
	fclose(fptr);

	return 0;


	// File read (binary mode)
	
}