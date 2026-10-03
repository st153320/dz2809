#include <stdio.h>

//2. Таблица умножения 9 × 9. Вложенный for, "%3d " для выравнивания.

int main(){
    // %3d выглядит хуже и менее читаемо, чем %2d
    for (int i=1; i<=9; ++i){
        for (int j=1; j<=9; ++j) {
                printf("%2d * %2d = %2d\n", i, j, i*j);
        }
    }

    return 0;
}