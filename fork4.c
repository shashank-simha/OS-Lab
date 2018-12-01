#include <stdio.h>
int i=5;
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
 {
	printf("in child. Value of i before: %d\n",i);
	i++;
	printf("in child. Value of i before: %d\n",i);
 }
 else
 {
	wait();
	printf("in parent. Value of i before: %d\n",i);
	i++;
	printf("in parent. Value of i before: %d\n",i);
 }
}
