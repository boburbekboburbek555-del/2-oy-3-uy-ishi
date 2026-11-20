#include <stdio.h>

int main(void) {
    int arr[15], manfiy = 0, nol = 0, kichik = 0, katta = 0;
    for (int i = 0; i < 15; i++) scanf("%d", &arr[i]);
    for (int i = 0; i < 15; i++) {
        if (arr[i] < 0) { printf("%d - Manfiy\n", arr[i]); manfiy++; }
        else if (arr[i] == 0) { printf("%d - Nol\n", arr[i]); nol++; }
        else if (arr[i] <= 10) { printf("%d - Kichik son\n", arr[i]); kichik++; }
        else { printf("%d - Katta son\n", arr[i]); katta++; }
    }
    printf("Manfiy: %d, Nol: %d, Kichik: %d, Katta: %d\n",
           manfiy, nol, kichik, katta);
    return 0;
}
