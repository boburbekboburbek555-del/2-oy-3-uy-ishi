#include <stdio.h>

int main(void) {
    int arr[15];
    for (int i = 0; i < 15; i++) scanf("%d", &arr[i]);
    for (int i = 0; i < 15; i++) {
        if (arr[i] % 3 == 0) {
            printf("%d", arr[i]);
            if (arr[i] % 5 == 0) printf(" - 3 va 5 ga bo'linadi");
            printf("\n");
        }
    }
    return 0;
}
