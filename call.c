#include <stdio.h>
int main()
{
        long ret;
        asm volatile("int $0x80" : "=a" (ret) : "a" (434));
        printf("Invoked my system call! Return Value = %ld\n", ret);
        return 0;
}
