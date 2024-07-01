#include <stdio.h>

int main() {
    int maxHeight;
    int currHeight = 0;
    int up;
    int down;
    int day = 1;

    scanf("%d %d %d", &up, &down, &maxHeight);

    int dlt = up - down;
    int boostHeight = maxHeight - up;

    if (boostHeight % dlt == 0) {
        day = (boostHeight / dlt) + 1;
    } else {
        day = (boostHeight / dlt) + 2;
    }
    printf("%d\n", day);

    return 0;
}
