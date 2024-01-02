#include <stdio.h>
#include <string.h>



int auth(){
		char sensitive_data[20];
		char data[100];
		fgets(data,sizeof(data),stdin);
		strcpy(sensitive_data,data);
		char dest[50];
		memcpy(dest,sensitive_data,sizeof(sensitive_data));
		
		
	}
	
void main(int argc, char **argv){
	auth();
		
}
