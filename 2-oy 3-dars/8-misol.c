#include <stdio.h>

int main(void) {
    int arr[10], juft = 0, toq = 0;
    for (int i = 0; i < 10; i++) scanf("%d", &arr[i]);
    for (int i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0) juft += arr[i];
        else toq += arr[i];
    }
    printf("Juft sonlar yig'indisi: %d\n", juft);
    printf("Toq sonlar yig'indisi: %d\n", toq);
    return 0;
}
