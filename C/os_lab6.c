#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int pipe_fd[2]; // File descriptors for the pipe

    // Create the pipe
    if (pipe(pipe_fd) == -1) {
        perror("pipe");
        exit(EXIT_FAILURE);
    }

    pid_t pid = fork(); // Create a child process

    if (pid == -1) {
        perror("fork");
        exit(EXIT_FAILURE);
    }

    if (pid == 0) { // Child process
        close(pipe_fd[1]); // Close the write end of the pipe in the child
        char buffer[100];
        ssize_t bytes_read = read(pipe_fd[0], buffer, sizeof(buffer)); // Read from the pipe
        if (bytes_read > 0) {
            buffer[bytes_read] = '\0'; // Null-terminate the string
            printf("Child received: %s\n", buffer);
        }
        close(pipe_fd[0]); // Close the read end of the pipe in the child
    } else { // Parent process
        close(pipe_fd[0]); // Close the read end of the pipe in the parent
        char message[] = "Hello from the parent!";
        write(pipe_fd[1], message, sizeof(message)); // Write to the pipe
        close(pipe_fd[1]); // Close the write end of the pipe in the parent
    }

    return 0;
}
