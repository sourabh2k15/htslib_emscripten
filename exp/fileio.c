#include<stdio.h>
/*
#include"fileio.h"

void readFile(char *fname,char *mode){

}
*/

int main(){
	FILE *fp = fopen("hello.txt","r");
	char buff[255];

	fscanf(fp,"%s",buff);
	printf("%s yaay\n",buff);
	fclose(fp);
	return 0;
}
