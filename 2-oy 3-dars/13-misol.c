#include <stdio.h>

int main(void) {
    int arr[10], juft[10], soni = 0;
    for (int i = 0; i < 10; i++) scanf("%d", &arr[i]);
    for (int i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0) juft[soni++] = arr[i];
    }
    for (int i = 0; i < soni; i++) printf("%d ", juft[i]);
    printf("\n");
    return 0;
}
