#include <stdio.h>

int main(void) {
int budget;
int found = 0;

scanf("%d", &budget);

for (int a = 1; 900 * a <= budget; a++) {
    for (int b = 2; 900 * a + 750 * b <= budget; b += 2) {
        for (int c = 1; 900 * a + 750 * b + 200 * c <= budget; c++) {
            if (900 * a + 750 * b + 200 * c == budget  && (c < a || c < b)) {
                printf("%d %d %d\n", a, b, c);
                found = 1;
            }
        }
    }
}

if (found == 0) {
    printf("none");
}

return 0;
}
