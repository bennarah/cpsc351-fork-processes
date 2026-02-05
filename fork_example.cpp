#include <iostream>
#include <unistd.h>

int main() {
    fork();
    fork();

    std::cout << "PID: " << getpid()
              << " PPID: " << getppid()
              << std::endl;

    return 0;
}

