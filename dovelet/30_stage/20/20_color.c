#include <stdio.h>

int wite_count = 0;
int pink_count = 0;

int is_available(int paper[][128], int x, int y, int size) {
    int i, j;
    int check = paper[x][y];
    
    for(i = x ; i < x + size ; i++) {
        for(j = y ; j < y + size ; j++) {
            if(check != paper[i][j]) {
                return 0;
            }
        }
    }
    return 1;
}

void devide_and_conquer(int paper[][128], int x, int y, int size) {
    int half_size = size / 2;
    if(size != 1) {
        if(!is_available(paper, x, y, size)) {
            devide_and_conquer(paper, x, y, half_size);
            devide_and_conquer(paper, x + half_size, y, half_size);
            devide_and_conquer(paper, x, y + half_size, half_size);
            devide_and_conquer(paper, x + half_size, y + half_size, half_size);
            return ;
        }
    }
    
    switch(paper[x][y]) {
        case 1:
            pink_count++;
            break;
        case 0:
            wite_count++;
            break;
    }
}

int main() {
    int n;
    int paper[128][128];
    int i, j;

    scanf("%d", &n);

    for(i = 0 ; i < n ; i++) {
        for(j = 0 ; j < n ; j++) {
            scanf("%d", &paper[i][j]);
        }
    }
    
    devide_and_conquer(paper, 0, 0, n);
    
    printf("%d\n", wite_count);
    printf("%d\n", pink_count);
    
    
    
    return 0;
}