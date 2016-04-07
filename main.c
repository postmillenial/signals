#include <signal.h>
#include <stdio.h>

volatile sig_atomic_t flag = 1;

void trap_handler(int sig){
    printf("RUN THE TRAAAAAP");
    signal(sig, SIG_DFL);

}
int main (void){
    signal(SIGTRAP, trap_handler);

    while (flag){
        continue;
    }
}
    
