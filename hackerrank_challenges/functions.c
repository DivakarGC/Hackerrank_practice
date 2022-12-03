//Function to find the max of input (four) numbers
#include <stdio.h>


int max_of_four(int a, int b, int c, int d) {
    int i, max=0;
    int meow[]={a, b, c, d};
    
    for (i=0;i<4;i++) {
        if(max < meow[i]) {
            max = meow[i];
        }
    }
    return max;
}
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}