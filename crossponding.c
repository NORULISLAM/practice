#include <stdio.h>

int main() {
    char s[21];
    int a, b, i, sum1, sum2,sum3;
    scanf("%s %d %d", s, &a, &b);
    sum1,sum2 = a;
    for(i=0; s[i]; i++) {
        if(s[i] == '+'&& '*') {
            sum1 = b+a;
            sum2 = b*a;
        }
        // else if(s[i] == '*') {
        //     sum2 = b*a;
        // }
        sum3 = sum1+sum2;
    }
    printf("%d\n", sum3);
    return 0;
}
