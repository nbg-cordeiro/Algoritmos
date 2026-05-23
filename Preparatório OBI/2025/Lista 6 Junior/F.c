#include <stdio.h>

int main() {
    int distFromSchool;
    scanf("%d", &distFromSchool);
    if (distFromSchool % 400 == 0) {
        printf("0\n");
        return 0;
    }
    int progress = 0;
    int delta1 = 0, delta2 = 0;
    for (int i = 0; i < 5; i++) {
        if (progress <= distFromSchool && distFromSchool <= progress + 400) {
            delta1 = (progress + 400) - distFromSchool;
            delta2 = distFromSchool - progress;
            break;
        }
        progress += 400;
    }

    if (delta1 <= delta2) {
        printf("%d\n", delta1);
    } else {
        printf("%d\n", delta2);
    }

    return 0;
}