#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	char name[30];
	short int age;
	int len;
	
	printf("Nombre: ");
	fgets(name,30,stdin);
	
	printf("Edad: ");
	scanf("%hi",&age);
	
	len = strlen(name);
	
	if(name[len-1]=='\n'){
	name[len-1]='\0';
	}
	
	
	printf("Su nombre es %s , su edad es %hi y es %s " , name,age,age>=18? "Es mayor de edad" : "Es menor de edad" );
	
	return 0;
}
