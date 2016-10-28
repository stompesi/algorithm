#include <stdio.h>

int print_binary(int number, int digit) {
    if((number / digit) >= 1) {
        number = print_binary(number, digit * 2);
        if((number / digit) >= 1) {
            printf("1");
            return number % digit;
        } else {
            printf("0");
            return number % digit;
        }
        
    } else {
        return number;
    }
}
int main() {
    int number;
    
    scanf("%d", &number);
    
    print_binary(number, 1);
    return 0;
}