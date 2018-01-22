
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
#define MAX_BUFF 256
int main(){

int fd;
char buf[MAX_BUFF];
//tmp = "testing ";
char tmp[256];
char* myfifo = "/tmp/myfifo";
mkfifo(myfifo,0666);
printf("Run Reader process to read the FIFO File\n"); 
fd = open(myfifo,O_WRONLY);
//like this it will write untill EOF,CTRL  + C
scanf( "%s", &tmp); 
write(STDOUT_FILENO,tmp,sizeof(tmp));


write(fd,tmp,sizeof(tmp));

 //like this it will write till MAX_BUFF
 //for(i = 0;i < MAX_BUFF;i++){
//write(fd,tmp,sizeof(tmp));
 //}
 
close(fd);
unlink(myfifo);
return 0;
}
