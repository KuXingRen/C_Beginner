#include<sys/stat.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<dirent.h>
#include<string.h>
#include<fcntl.h>
#include<pwd.h>
#include<grp.h>
#define ARGS_CHECK(argc,num) {if(argc!=num){printf("error gras\n");return -1;}}
#define ERROR_CHECK(ret,retval,func_name){if(ret==retval){perror(func_name);return -1;}}