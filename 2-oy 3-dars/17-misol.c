#include <stdio.h>

int main(void) {
    int arr[10], tartibda = 1;
    for (int i = 0; i < 10; i++) scanf("%d", &arr[i]);
    for (int i = 1; i < 10; i++) {
        if (arr[i] <= arr[i - 1]) tartibda = 0;
    }
    printf("%s\n", tartibda ? "O'sish tartibida" : "O'sish tartibida emas");
    return 0;
}
