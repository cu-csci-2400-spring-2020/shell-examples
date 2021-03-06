#include "csapp.h"

//
// A constrtained fork bomb
//

/* $begin forkprob8 */
void foo(int n)
{
    int i;

    for (i = 0; i < n; i++)
        Fork();
    fprintf(stderr, "hello from %d\n", getpid());
    exit(0);
}
/* $end forkprob8 */

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("usage: %s <n>\n", argv[0]);
        exit(0);
    }
    foo(atoi(argv[1]));
    exit(0);
}
