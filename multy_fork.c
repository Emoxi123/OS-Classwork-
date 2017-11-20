#include<stdio.h> 
#include<sys/wait.h> 
#include<unistd.h> 

int main(int argc, char ** argv){ 

int i; 

	for(i = 0;/* i <= argv*/ ; i++){   // Sto na 100 e pravilno taka :) :) :) :)

	 pid_t pid = fork(); 

		if(pid < 0){
		perror("fork");
		}
		else if(pid == 0){ 
		execl(argv[2], argv[2], "/", 0);
		} 
		
	} 



return 0; 
} 
