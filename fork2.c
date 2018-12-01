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
 printf("hello fork from child %d\n", id);
 else
 printf("hello fork from parent %d\n", id);
}
