#include <stdio.h>

void main()
{
 int id;
 id = fork();// returns 0 for child and PID for parent process
 printf("hello fork %d\n", id);
}
