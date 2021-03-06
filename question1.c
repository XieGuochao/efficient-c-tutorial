/* Task: What is the output? */

/* Goal:
    1. Understand the stack structure.
    2. Learn about a potential bug.
    3. Learn to read Assembly codes.
*/

#include <stdio.h>

int f1() {
    char buffer[20];
    buffer[0] = 'h';
    buffer[1] = 'e';
    buffer[2] = 'l';
    buffer[3] = 'l';
    buffer[4] = 'o';
    buffer[5] = ' ';
    buffer[6] = 'w';
    buffer[7] = 'o';
    buffer[8] = 'r';
    buffer[9] = 'l';
    buffer[10] = 'd';
    buffer[11] = '!';
    buffer[12] = '\0';
    printf("%s\n", buffer);
}

int f2() {
    char buffer[20];
    buffer[0] = 'H';
    printf("%s\n", buffer);
}

int main(int argc, char const *argv[])
{
    f1();
    f2();
    return 0;
}
