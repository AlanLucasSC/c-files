#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

struct stat st = {0};

int main(){
	if(stat("./batata", &st) == -1){
		mkdir("./batata", 0700);
	}
	printf("Batata");
	return 0;
}
