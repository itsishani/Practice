#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
   if (pid==0) 
{ 
printf("Child %d going to sleep\n",getpid()); 
sleep(1); 
printf("Child %d woke up\n",getpid()); 
exit(0); 
} 
int sleep1(unsigned int nsecs) 
{ 
if (signal(SIGALRM, sigalrm) == SIG_ERR) 
return(nsecs); 
alarm(nsecs); /* start the timer */ 
pause(); /* next caught signal wakes us up */ 
return(alarm(0)); /* turn off timer, return unslept time */ 
} 

}


 if((pid= fork())<0)
             printf("fork error");
        else if(pid == 0)
             abort();
        if(wait(&status) != pid)
             printf("wait error");
        pr_exit(status);