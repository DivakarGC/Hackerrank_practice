#include <stdio.h>
#include <stdlib.h> //stdlib.h since we use abs
void update(int *a,int *b) { //receives two integer pointers, int *a and int *b
    
    int x;
    //x will temporarily store *a value for *b
    x = *a;
    *a = *a + *b;
    //here we take abs of x - *b value to prevent negative value
    *b = abs(x - *b);   
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}