#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main()
{
  //  while(1)
  //  {
  //      printf("process \n");
  //      sleep(1);
  //  }
    pid_t p = getpid();
    pid_t f = getppid();
   // while(1)
   // {
   //     printf("process! pid: %d, ppid: %d\n",p,f);
   //     sleep(1);
   // }
   //     printf("process! pid: %d, ppid: %d\n",p,f);
   // 
    printf("process! pid: %d, ppid: %d\n",p,f);
    return 0;
}
