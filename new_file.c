#include<stdio.h> 
#include<sys/types.h>
#include<sys/stat.h> 
#include<fcntl.h> 
#include<unistd.h>  

#define SIZE 100

int main(int argc, char **argv){ 
 	char buffer[SIZE];
	
	int fd = open( argv[1], O_RDONLY ); 
	ssize_t read_bytes, wresult; 
	ssize_t written = 0; 	
	if( fd < 0 ) {
		perror( "oppen"); 
		return 1; 
	}

	read_bytes = read(fd, buffer, SIZE);
	if(read_bytes < 0 ){
		perror("read");
		return 3; 
	}
	 	
	wresult = write(STDOUT_FILENO, buffer, SIZE);
	if(wresult < 0){
	perror("write"); 
	return 4; 
	}
	
	int cresult = close(fd);
	if(cresult < 0) {
		perror("close");
		return 2;	
	}
	
	return 0;

} 
