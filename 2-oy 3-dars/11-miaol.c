#include <stdio.h>

int main(void) {
    int arr[10], nol = 0;
    for (int i = 0; i < 10; i++) scanf("%d", &arr[i]);
    for (int i = 0; i < 10; i++) {
        if (arr[i] == 0) nol++;
    }
    printf("Nollar soni: %d\n", nol);
    printf("%s\n", nol > 3 ? "Nollar ko'p" : "Nollar kam");
    return 0;
}
