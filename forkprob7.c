/* $begin forkprob7 */
#include "csapp.h"
int counter = 1;

int main() 
{
    if (fork() == 0) {
        counter--;  
        exit(0);
    }
    else {
	Wait(NULL); 
        counter = couner + 1;
	printf("counter = %d\n", counter);
    }
    exit(0);
}
/* $end forkprob7 */
