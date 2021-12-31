#include <stdio.h>

#define A 'a'
#define E 'e'
#define I 'i'
#define O 'o'
#define U 'u'

int main(void) {
    const int ZERO = 0,TWO = 2, FOUR = 4, SIX = 6, EIGHT = 8;
    printf("%c %c %c %c %c\n",A , E , I , O ,U);
    printf("%d %d %d %d %d\n",ZERO,TWO,FOUR,SIX,EIGHT);
    printf("%d %d %d %d %d",1,3,5,7,9);

    return 0;
}