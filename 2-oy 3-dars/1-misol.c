#include <stdio.h>

int main(void) {
    int arr[10];
    for (int i = 0; i < 10; i++) {
        printf("%d-element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++) {
        printf("%d - %s\n", arr[i], arr[i] > 0 ? "Musbat" : "Manfiy yoki nol");
    }
    return 0;
}
