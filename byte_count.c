#include <stdio.h>
#include <stdlib.h>

void count(int);

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    count(num);
    return 0;
}

void count(int a){
    int bit = 0;
    while(a){
        a >>= 1;
        bit ++;
    }
    printf("Bits used: %d\n", bit);
    printf("Bytes needed: %d\n", (bit / 8 ) + 1);

    return;
}