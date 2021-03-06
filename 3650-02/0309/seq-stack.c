#include <pthread.h>
#include <stdio.h>
#include <assert.h>
#include <unistd.h>

#define NN 1005

// .data
int stack[5];
int stptr = 0;    // where the next item goes

void
stack_push(int xx)
{
    stack[stptr++] = xx;
}

int
stack_pop()
{
    return stack[--stptr];
}

int
main(int _ac, char* _av[])
{
    for (int ii = 0; ii < NN; ++ii) {
        stack_push(ii);
    }

    for (int ii = 0; ii < NN; ++ii) {
        int yy = stack_pop();
        printf("%d\n", yy);
    }
    return 0;
}
