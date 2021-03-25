#include<stdio.h>
#include<signal.h>
#include<unistd.h>

void handleSignal(int iSignal);

int main() {
    signal(SIGFPE, handleSignal);
    signal(SIGINT, handleSignal);
    signal(SIGABRT, handleSignal);
    signal(SIGILL, handleSignal);
    signal(SIGSEGV, handleSignal);
    signal(SIGTERM, handleSignal);

    for(;;){
        sleep(1); 
    }
    return 0;
}

void handleSignal(int iSignal){
    printf("\nHandle signal %d\n", iSignal);
}
