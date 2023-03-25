#include "monty.h"

int main(int argc, char **argv)
{
	int num;
   	FILE *fptr;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
			
   	if ((fptr = fopen(argv[1], "r")) == NULL)
	{
       		fprintf(stderr, "Error: Can't open file <%s>\n", argv[1]);
       		// Program exits if the file pointer returns NULL.
       		exit(EXIT_FAILURE);	
   	}

	fscanf(fptr,"%d", &num);
	
	printf("Value of n=%d", num);
	fclose(fptr); 
  
   	return 0;

}