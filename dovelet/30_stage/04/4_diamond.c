#include <stdio.h>

void print_top_diamond(int row){
    int i, j;
    
    for(i = 0; i < row ; i++) {
        for(j = row - i ; j > 0 ; j--) {
            printf(" ");
        }
        
        for(j = 0 ; j < 2 * i + 1 ; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void print_middle_diamond(int row){
    int i;
    
    for(i = 0; i < row * 2 - 1 ; i++) {
        printf("*");
    }
    printf("\n");
}

void print_down_diamond(int row){
    int i, j;
    
    for(i = 0; i < row ; i++) {
        for(j = i + 1 ; j > 0 ; j--) {
            printf(" ");
        }
        
        for(j = row * 2; j > 2 * i + 1 ; j--) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int stage;
    
    scanf("%d", &stage);
    
    print_top_diamond(stage - 1);
    print_middle_diamond(stage);
    print_down_diamond(stage - 1);
    
    return 0;
}