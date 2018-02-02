#include <stdio.h>
#include <conio.h>

main()
{
	//Declare file pointer
	FILE *fp;

	//Open a file
	fp=fopen("newfile.txt","w");

	//Read/write/Append
	fprintf(fp,"This is a new file");

	//Closing the file
	fclose(fp);
}
