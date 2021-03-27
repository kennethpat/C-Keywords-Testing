// Demonstrates two kinds of inline assembly syntax offered by the GCC compiler. 
// This program will only work correctly on x86_64 platform under Linux.
// from https://en.cppreference.com/w/cpp/language/asm
// with modifications
#include <cstdio>
 
extern "C" int func();
// the definition of func is written in assembly language
// raw string literal could be very useful
asm(R"(
.globl func
    .type func, @function
    func:
    .cfi_startproc
    movl $7, %eax
    ret
    .cfi_endproc
)");
 
int main()
{
    int n = func();
    // extended inline assembly
    asm ("leal (%0,%0,4),%0"
         : "=r" (n)
         : "0" (n));
    printf("7 * 5 = %d\n", n);
 
    // standard inline assembly
    asm ("movq $60, %rax\n\t" // the exit syscall number on Linux
         "movq $2,  %rdi\n\t" // this program returns 2
         "syscall");
    
    return 0;
}
