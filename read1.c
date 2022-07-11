#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<errno.h>
int main()
{
int fd,ret;
char buff[100];
fd=open("1.c",O_RDONLY);
if(fd == -1)
{
printf("OPEN FAILS errorno=%d\n",errno);
perror("ERROR");
}
else
{
printf("OPEN sucess\n");	
}
ret=read(0,&buff,10);
if(ret<0)
{
printf("READ FAILS\n");	
}
else
{	
printf("ret=%d,buff=%s\n",ret,buff);
}
return 0;
}
