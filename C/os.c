// #include <stdio.h>
// #include <stdlib.h>
// #include <unistd.h>
// #include <sys/wait.h>

// void pr_exit(int status){
//     if(WIFEXITED(status))
//         printf("\n Normal termination: %d",WEXITSTATUS(status));
//     else if(WIFSIGNALED(status))
//         printf("\n Abnormal termination: %d",WTERMSIG(status));
//     else if(WIFSTOPPED(status))
//         printf("\n Child stopped: %d\n",WSTOPSIG(status))
        
// }



// int main(){
//     int status;
//     pid_t pid = fork();
//     if(pid == -1){
//         perror("fork failed");
//         exit(EXIT_FAILURE);
//     }
//     else if(pid == 0){
//         execlp("cat", "cat","hello.txt", NULL);
//         perror("execlp failed");
//         exit(0);
//         pr_exit(status);
//     }
//     else{
//         waitpid(pid, &status, 0);
//         if(WIFEXITED(status)){
//             printf("Child process exited with status %d\n", WEXITSTATUS(status));
//         }
//     }
//     return 0;
// }




