#include <stdio.h>
void butler(void); /* butler函数袁星 */

int main(void) {
    printf("I will summon the butler function.\n");
    butler();
    printf("Yes, Bring me some tea and writeable DVDs.\n");
    /*
    1
    2
    3
    4
    5
    6
    */


    return 0;
}

void butler(void) {
    printf("You rang, sir?\n");
}
