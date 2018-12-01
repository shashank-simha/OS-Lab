#include <stdio.h>

void main()
{
 printf("before fork");
 fork();
 printf("after fork\n");
}
