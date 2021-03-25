/* Write a standard Linux cat program that takes command file names as 
arguments to the command line and outputs their contents to standard output. 
If no arguments are given to the program, it will output the content 
submitted from standard input to standard output. */

#include<stdio.h>
#include<unistd.h> 
#include<stdlib.h> 
#include<fcntl.h>

int main(int argc,char *argv[]){ 
	int fd, i, ch; 
	
	for (i = 1; i < argc; i++){
		fd = open(argv[1],O_RDONLY); 
		while(read(fd,&ch,1)){
			write(STDOUT_FILENO,&ch,1); 
        	}
	}
    close(fd); 

	return 0;
}
