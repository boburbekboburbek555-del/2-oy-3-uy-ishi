#include <stdio.h>

int main(void) {
    int arr[10];
    for (int i = 0; i < 10; i++) scanf("%d", &arr[i]);
    for (int i = 0; i < 10; i++) {
        if (arr[i] >= 90 && arr[i] <= 100) printf("A'lo\n");
        else if (arr[i] >= 70 && arr[i] <= 89) printf("Yaxshi\n");
        else if (arr[i] >= 60 && arr[i] <= 69) printf("Qoniqarli\n");
        else if (arr[i] >= 0 && arr[i] <= 59) printf("Qoniqarsiz\n");
        else printf("Xato baho\n");
    }
    return 0;
}
