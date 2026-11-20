#include <stdio.h>

int main(void) {
    int arr[10];
    for (int i = 0; i < 10; i++) scanf("%d", &arr[i]);
    for (int i = 0; i < 10; i++) {
        if (arr[i] < 0) arr[i] = 0;
    }
    for (int i = 0; i < 10; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
