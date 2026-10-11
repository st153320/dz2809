#include <stdio.h>

int main() {
    int now = 0;
    int last = 0;
    int res = 0;
    int max_res = 0;
    scanf("%d", &now);

    if (now != 0) {

        // алгоритм работает верно, но считает колво попарных повторений, а не колво повторов
        do {
            last = now;
            scanf("%d", &now);

            if (now == last){
                ++res;
            } else {
                max_res = res > max_res ? res : max_res;
                res = 0;
            }

        } while (now != 0);

        printf("%d", max_res+1);
    } else {
        printf("Error. The sequence is empty.");
    }
    return 0;
}