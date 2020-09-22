






#include<unistd.h>
#include<stdio.h>
int main (void){

pid_t procid;

printf ("My current process id is %d \n",getpid());
procid = fork();
printf("Fork ID %d \n",procid);
printf("Calling fork %d \n",getpid());
return 0;
}

