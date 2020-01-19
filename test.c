#include <stdio.h>

// #include <test-add.h>

// #include "test-sub/test-sub.h"
#include "test-add\test-add.h"
#include "test-sub\test-sub.h"
// #include "F:\k3\c\test-sub\test-sub.h"
int main(void)
{
    int a = 3;
    int b = 2;

    #ifdef _SAYHELLO
    printf(":23232\n");
    #endif
    #ifdef _SAY
    printf(":44444\n");
    #endif

    printf("a=%d\n", a);
    printf("b=%d\n", b);
 
    printf("a+b=%d\n", add(a,b));
    printf("a-b=%d\n", sub(a,b));
    return 0;
}