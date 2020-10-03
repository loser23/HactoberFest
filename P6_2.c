#include <stdio.h>

int main(int argc, char const *argv[])
{
	char s[]="abc";
	FILE *filePointer ; 
	filePointer = fopen("A6_2.txt", "w") ;
	fputs(s, filePointer) ;
	fclose(filePointer);    

	return 0;
}

// if we make and write in txt file through c then it will store it in disk.
