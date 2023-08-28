#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>

int main(){
    int fd;
    char buff[10];
    fd = fopen("pipe1.c", O_RDWR);
    //close(0);         stdinput won't work if it is closed
    printf("%d\n",fd);
    write(1,"hello\n",6); //writes to the terminal, printf works by using this system call 
    read(0,buff,10);     //reads from the terminal, scanf works by using this system call
    return 0;
}

// fd 0 is stdinput
// fd 1 is stdoutput
// fd 2 is stderror