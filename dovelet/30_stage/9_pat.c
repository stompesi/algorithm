#include <stdio.h>

void pat(int n, int k, int index, char* binary_string) {
    if(index == n) {
        if(k == 0) {
            binary_string[index] = '\n';
            printf("%s", binary_string);
        }
        return;
    } else {
        if(k != 0) {
            binary_string[index] = '1';
            pat(n, k - 1, index + 1, binary_string);
            
            binary_string[index] = '0';
            pat(n, k, index + 1, binary_string);
        } else {
            binary_string[index] = '0';
            pat(n, k, index + 1, binary_string);
        }
    }
}

int main() {
    int n, k;
    char* binary_string;
    scanf("%d %d", &n, &k);

    binary_string = (char*) malloc(sizeof(char) * n + 1);
    pat(n, k, 0 , binary_string);
    
    return 0;
}

