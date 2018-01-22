#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
#define MAX_BUF 256

int main(){

int fd;
char* myfifo = "/tmp/myfifo";
char buf[MAX_BUF];

fd = open(myfifo, O_RDWR);
  
read(fd, buf,MAX_BUF);
printf("write:%s\n", buf);

close(fd);
return 0;
}
