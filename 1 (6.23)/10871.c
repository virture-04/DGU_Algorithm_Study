#include <stdio.h>

int main() {
    int a[10000];
    int A, B;
    scanf("%d %d", &A, &B);

    for (int i = 0; i < A; i++) {
        scanf("%d", &a[i]);
        if (a[i] < B)
            printf("%d ", a[i]);
    }
}
