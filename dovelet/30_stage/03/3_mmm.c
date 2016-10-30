#include <stdio.h>

int main() {
    int number;
    int min, max, sum;
    int i;
    
    max = sum = 0;
    min = 1001;
    
    for(i = 0 ; i < 10 ; i++) {
        scanf("%d", &number);
        if(min > number) {
            min = number;
        }
        if(max < number) {
            max = number;
        }
        sum += number;
    }
    
    printf("%d %d %d", sum, max, min);
    
    return 0;
}