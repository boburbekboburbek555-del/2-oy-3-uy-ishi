#include <stdio.h>

int main(void) {
    int arr[10], eng;
    for (int i = 0; i < 10; i++) scanf("%d", &arr[i]);
    eng = arr[0];
    for (int i = 1; i < 10; i++) {
        if (arr[i] < eng) eng = arr[i];
    }
    printf("Eng kichik son: %d\n", eng);
    printf("%s\n", eng < 0 ? "Manfiy minimum" : "Musbat yoki nol minimum");
    return 0;
}
