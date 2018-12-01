#include <stdio.h>

void main()
{
 int id;
 id = fork();// returns 0 for child and PID for parent process
 
 if(id == -1)
 {
 printf("Error %d\n", id);  
 exit(-1);
 }
 if(id == 0)
	 printf("from child ppid=%d and pid=%d\n", getppid(), getpid());
 else
 {
	wait();
	printf("from parent ppid=%d and pid=%d\n", getppid(), getpid());
 }
}
