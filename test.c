#include <stdlib.h>
#include <stdio.h>

int main(){
    int n = 10;
    int* ptr = (int*)malloc(n * sizeof(int));
    if (ptr == NULL){
        return 1;
    }

    for(int j=0;j<10;++j){
        *(ptr+j) = j;
    }

    for(int j=9;j>=0;--j){
        ptr[j] = j-1;
    }

    for(int j=0;j<10;++j){
        printf("%d", *(ptr+j));
    }
    
    free(ptr);
    ptr = NULL;

    return 0;
}