#include <stdio.h>

int main() {
    int term1 = 0;
    int term2 = 0;
    int term3 = 0;

    int n_lm = 0;

    // можем разом считать сразу 2 члена последовательности, тк её длина >= 2, включая 0
    scanf("%d", &term1);
    scanf("%d", &term2);

    if (term2 != 0) {
        scanf("%d", &term3);

        if (term3 != 0) {
            if (term2 > term1 && term2 > term3){
                ++n_lm;
            }

            do {
                term1 = term2;
                term2 = term3;
                scanf("%d", &term3);

                if (term3 != 0 && term2 > term1 && term2 > term3){
                    ++n_lm;
                }

            } while (term3 != 0);

            printf("%d", n_lm);
        } else {
            printf("0");
        }
    } else {
        printf("0");
    }

    return 0;
}