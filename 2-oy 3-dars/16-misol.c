#include <stdio.h>

int main(void) {
    int arr[10];
    for (int i = 0; i < 10; i++) scanf("%d", &arr[i]);
    for (int i = 0; i < 10; i++) {
        int takror = 0;
        for (int j = 0; j < 10; j++) {
            if (i != j && arr[i] == arr[j]) takror = 1;
        }
        printf("%d - %s\n", arr[i], takror ? "Takrorlangan" : "Takrorlanmagan");
    }
    return 0;
}
