#include <stdio.h>

int main(void) {
    int arr[10];
    for (int i = 0; i < 10; i++) scanf("%d", &arr[i]);
    for (int i = 9; i >= 0; i--) {
        printf("%d - %s\n", arr[i], arr[i] >= 0 ? "Musbat yoki nol" : "Manfiy");
    }
    return 0;
}
