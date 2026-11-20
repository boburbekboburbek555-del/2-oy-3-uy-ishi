#include <stdio.h>

int main(void) {
    int arr[15];
    for (int i = 0; i < 15; i++) scanf("%d", &arr[i]);
    for (int i = 0; i < 15; i++) {
        printf("%d - ", arr[i]);
        if (arr[i] > 50) printf("Katta\n");
        else if (arr[i] == 50) printf("Teng\n");
        else printf("Kichik\n");
    }
    return 0;
}
