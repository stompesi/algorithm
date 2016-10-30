/*
 부분집합의 개수를 빼줘야한다.
 */

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", (n/6) + (n/8) - (n/24));
    return 0;
}