#include <stdio.h>

/*
 알아야 할것
 관계를 잘알아보자 
 p와 p-1의 관계식을 구한다음 코드로 짜면 수월하다.
 */

void pTp(int cur_step) {
    if(cur_step == 0) {
        return;
    }
    pTp(cur_step - 1);
    printf("%d", cur_step);
    pTp(cur_step - 1);
}
int main() {
    int step;
    
    scanf("%d", &step);

    pTp(step);
    return 0;
}

