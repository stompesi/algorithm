#include <stdio.h>

int main() {
    int stage;
    int i, j, k;
    int direction = 1;
    
    scanf("%d", &stage);
    
    i = 0;
    for(k = 0 ; k < stage ; k++ ){
        for(j = i ; j > 0; j--) {
            printf(" ");
        }
        
        if(direction != 1) {
            printf("$");
        }
        for(j = stage - (2 * i) - 1; j > 0; j--) {
            printf("*");
        }
        if(direction == 1) {
            printf("$");
        }
        printf("\n");
        
        if(i == stage / 2) {
            direction = -1;
        }
        i += direction;
    }
    return 0;
}