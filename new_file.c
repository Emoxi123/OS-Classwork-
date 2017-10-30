#include<sdio.h> 
#include<> 
int main(int argc, char **argv){ 

		int fd = open( argv[1], O_RDONLY ); 
	if( fd < 0 ) {
	perror( "oppen"); 
	return 1; 
	}

	return 0;

} 
