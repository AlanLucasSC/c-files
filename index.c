#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main(){
	CreateDirectory("C:/Users/alcastro/Documents/ProcessTask/c-files/batata", NULL);
	system("cd C:/Users/alcastro/Documents/ProcessTask/c-files/batata");
	system("git clone https://github.com/AlanLucasSC/csv.git");
	printf("Batata");
	return 0;
}
