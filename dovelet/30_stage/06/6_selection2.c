#include <stdio.h>

int main() {
    int data_count, step;
    int i, j;
    int data[1000];
    
    scanf("%d %d", &data_count, &step);
    
    for(i = 0 ; i < data_count ; i++) {
        scanf("%d", &data[i]);
    }
    
    for(j = 0 ; j < step ; j++) {
        int temp;
        for(i = j + 1 ; i < data_count ; i++) {
            if(data[j] > data[i]) {
                temp = data[j];
                data[j] = data[i];
                data[i] = temp;
            }
        }
    }
    
    for(i = 0 ; i < data_count ; i++) {
        printf("%d ", data[i]);
    }
    
}
