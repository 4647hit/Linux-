#include<stdio.h>
#include<unistd.h>

int main()
{
    printf("before fork: I am  a process, pid : %d,ppid : %d\n",getpid(),getppid());
    fork();
      
    printf("after fork: I am  a process, pid : %d,ppid : %d\n",getpid(),getppid());
    return 0;
}
