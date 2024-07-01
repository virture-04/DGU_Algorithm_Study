#include <stdio.h>

int main() {
    int a = 0;
    int sum = 1;
    scanf("%d", &a);
    for(int i = a; i > 0; i--){
        sum *= i;
    }
    printf("%d", sum);
}
