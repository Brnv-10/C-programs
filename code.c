#include <stdio.h>

int timec(int num, int x, int y) {
    int time = 0;
    for (int i = 0; i < num; i++) {
        if (i == 0) {
            time = time + x;
        } else {
            if (time % i == 0) {
                time = time + (x + y);
            } else {
                time = time + x;
            }
        }
    }
    return time;
}

int main() {
    int n;
    int x1;
    int y1;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Enter x: ");
    scanf("%d", &x1);

    printf("Enter y: ");
    scanf("%d", &y1);

    int result = timec(n, x1, y1);
    printf("Result: %d\n", result);

    return 0;
}
