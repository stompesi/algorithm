/*
 맵을 그릴때 옆에 까지 생각해야하므로 둘러싸는 배열 하나 만들면 좀더 편할 것이다. 
 그리고 재귀 적으로 호수를 번호를 먹이는 것이 좋을 듯 하다. ㅎㅎ
*/

#include <stdio.h>

void label_lake(char map[][103], int i, int j, int label) {
    map[i][j] = label;
    
    if(map[i - 1][j - 1] == 'W') label_lake(map, i - 1, j - 1, label);
    if(map[i - 1][j] == 'W') label_lake(map, i - 1, j, label);
    if(map[i - 1][j + 1] == 'W') label_lake(map, i - 1, j + 1, label);
    if(map[i][j - 1] == 'W') label_lake(map, i, j - 1, label);
    if(map[i][j + 1] == 'W') label_lake(map, i, j + 1, label);
    if(map[i + 1][j - 1] == 'W') label_lake(map, i + 1, j - 1, label);
    if(map[i + 1][j] == 'W') label_lake(map, i + 1, j, label);
    if(map[i + 1][j + 1] == 'W') label_lake(map, i + 1, j + 1, label);
}

int main() {
    int row, col;
    char map[102][103];
    int i, j;
    int result = 0;
    
    scanf("%d %d", &row, &col);

    for(i = 1 ; i <= row ; i++) {
        scanf("%s", &map[i][1]);
    }
    
    for(i = 1 ; i <= row ; i++) {
        for(j = 1 ; j <= col ; j++) {
            if(map[i][j] == 'W') {
                result++;
                label_lake(map, i, j, result);
            }
            
        }
    }
    
    printf("%d", result);
    
    return 0;
}

