#include <stdio.h>

int main(void) {
    int arr[10], soni = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++) {
        if (arr[i] > 0) soni++;
    }
    printf("Musbat sonlar soni: %d\n", soni);
    return 0;
}
