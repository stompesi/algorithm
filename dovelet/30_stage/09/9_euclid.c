/*
 최대공약수(Greatest Common Divisor): 두 수의 약수중 공통된 가장 큰 약수
    - 유클리드 호제법: 작은 수에서 큰수가 나누어 떨어지지 않을 때, 그 나머지를 구한 다음 다시 반복하는 방식이다.
 최소공배수: 두 수의 배수가 되는 가장 작은 수
    - 두수를 곱한다음 최대 공약수로 나누면 된다.
 */
#include <stdio.h>

int gcd(int a, int b) {
    if(a % b == 0) {
        return b;
    } else {
        return gcd(b, a % b);
    }
}
int main() {
    int number, number2;
    int result;
    
    scanf("%d %d", &number, &number2);
    
    if(number > number2) {
        result = gcd(number, number2);
    } else {
        result = gcd(number2, number);
    }
    
    printf("%d %d", result, number * (number2 / result));
    
    return 0;
}