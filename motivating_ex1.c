#include <stdio.h>
#include <string.h>

char sensitive_data[20];

int auth(){
	
		char data[100];
		fgets(data,sizeof(data),stdin);
		strcpy(sensitive_data,data);
		char dest[50];
		memcpy(dest,sizeof(sensitive_data),sensitive_data);
		
		
	}
	
void main(int argc, char **argv){
	auth();
		
}
