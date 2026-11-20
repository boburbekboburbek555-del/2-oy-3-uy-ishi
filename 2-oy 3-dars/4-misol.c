#include <stdio.h>

int main(void) {
    int arr[10], soni = 0;
    for (int i = 0; i < 10; i++) scanf("%d", &arr[i]);
    for (int i = 0; i < 10; i++) {
        if (arr[i] < 0) {
            printf("%d\n", arr[i]);
            soni++;
        }
    }
    if (soni == 0) printf("Manfiy son yo'q\n");
    return 0;
}
