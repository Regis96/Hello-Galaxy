#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


void main(int argc, char *argv[ ] ){
	pid_t pid;
	
	char *args[2];
	char qualPoke=*argv[1];


    
	if (qualPoke == 'p'){
		args[0]="./pikachu";
		args[1]=NULL;
		pid = fork();
		if (pid==0)
    		execv("./pikachu",args);		
	}



			
	if (qualPoke == 'b'){
		args[0]="./bulbassauro";
		args[1]=NULL;
		pid = fork();
		if (pid==0)
    		execv("./bulbassauro",args);
	}
		
			
	if (qualPoke == 'c'){
		args[0]="./charmander";
		args[1]=NULL;
		pid = fork();
		if (pid==0)
    		execv("./charmander",args);		
	}

			
	if (qualPoke == 's'){
		args[0]="./squirtle";
		args[1]=NULL;
		pid = fork();
		if (pid==0)
    		execv("./squirtle",args);		
	}



    	printf("\n Fim do pai \n");
			
		
	
}