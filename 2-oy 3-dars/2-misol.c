#include <stdio.h>

int main(void) {
    int arr[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++) {
        printf("%d - %s\n", arr[i], arr[i] % 2 == 0 ? "Juft" : "Toq");
    }
    return 0;
}
