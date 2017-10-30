#include<stdio.h> 
#include<string.h> 
#include<unistd.h> 
int main(){ 

	const char *s = "Hello, emko :) \n";
	size_t len = strlen( s );
	ssize_t wresult;	
	size_t written = 0; 

	while(written != len){	 { 	
	wresult = write( STDOUT_FILENO, s + written, len - written); 
	if(wresult < 0) {
	perror("ima greshka"); 
	return 1; 
		}
	written += wresult; 
	} 
	return 0; 
}
