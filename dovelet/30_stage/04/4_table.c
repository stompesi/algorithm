/*
9^10이 overflow가 됨으로 설정을 long long int로 해줘야 한다.
그리고 나는 일일이 출력하는 것을 해주었는데.. 이런것이 있다 참고하자
printf("%*d",c,i);
*/
#include <stdio.h>

int get_digit(long long int n) {
    int digit = 0;
    while(n != 0) {
        n = n / 10;
        digit++;
    }
    return digit;
}

void print_number(int width, long long int number) {
    int i;
    for(i = 1 ; i <= width - get_digit(number) ; i++) {
        printf(" ");
    }
    printf("%lld", number);
}

long long int my_pow(int n, int j) {
    int i;
    long long int result = 1;
    for(i = 0 ; i < j; i++) {
        result *= n;
    }
    return result;
}

int main() {
    int n;
    int width;
    int i, j;
    
    scanf("%d", &n);
    
    width = get_digit(my_pow(n, 10)) + 1;
    
    for(i = 1 ; i <= width ; i++) {
        printf(" ");
    }
    
    for(i = 1 ; i <= 10 ; i++) {
        print_number(width, i);
    }
    printf("\n");
    
    for(i = 2 ; i <= n ; i++) {
        print_number(width, i);
        
        for(j = 1 ; j <= 10 ; j++) {
            print_number(width, my_pow(i, j));
        }
        printf("\n");
    }
    return 0;
}