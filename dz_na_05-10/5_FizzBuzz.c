#include <stdio.h>

//5. Fizz-Buzz — от 1 до 100: «Fizz» если делится на 3, «Buzz» на 5, «FizzBuzz» на 15, иначе число. if/else if/else внутри for.
int main(){
   
    for (int i=1; i<=100; ++i){
        if (i % 15 == 0){
            printf("FizzBuzz\n");
        } else if (i % 5 == 0) {
            printf("Buzz\n");
        } else if (i % 3 == 0){
            printf("Fizz\n");
        } else {
            printf("%d\n", i);
        }
    }
    return 0;
}