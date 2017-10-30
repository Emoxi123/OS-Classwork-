#include<stdio.h> 
#include<string.h> 
#include<unistd.h> 
int main(){ 

	const char *s = "Hello, emko :) \n";
	size_t len = strlen( s );
	ssize_t wresult;	
		
	wresult = write( STDOUT_FILENO, s, len); 
	if(wresult < 0) {
	perror("ima greshka"); 
	return 1; 
	}

	return 0; 
}
