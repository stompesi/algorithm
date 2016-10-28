#include <stdio.h>

int _pow(int x, int y) {
    if(y == 1) {
        return x;
    } else {
        return x * _pow(x, y-1);
    }
}
int main() {
    int number, power;
    
    scanf("%d %d", &number, &power);
    
    printf("%d", _pow(number, power));
    return 0;
}