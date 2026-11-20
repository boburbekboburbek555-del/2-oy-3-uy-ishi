#include <stdio.h>

int main(void) {
    int arr[10], tanlov;
    for (int i = 0; i < 10; i++) scanf("%d", &arr[i]);
    do {
        printf("1-Elementlar  2-Juft  3-Toq  4-Max  5-Min  6-Yig'indi  0-Chiqish\n");
        scanf("%d", &tanlov);
        switch (tanlov) {
            case 1:
                for (int i = 0; i < 10; i++) printf("%d ", arr[i]);
                printf("\n");
                break;
            case 2:
                for (int i = 0; i < 10; i++) if (arr[i] % 2 == 0) printf("%d ", arr[i]);
                printf("\n");
                break;
            case 3:
                for (int i = 0; i < 10; i++) if (arr[i] % 2 != 0) printf("%d ", arr[i]);
                printf("\n");
                break;
            case 4: {
                int max = arr[0];
                for (int i = 1; i < 10; i++) if (arr[i] > max) max = arr[i];
                printf("%d\n", max);
                break;
            }
            case 5: {
                int min = arr[0];
                for (int i = 1; i < 10; i++) if (arr[i] < min) min = arr[i];
                printf("%d\n", min);
                break;
            }
            case 6: {
                int yigindi = 0;
                for (int i = 0; i < 10; i++) yigindi += arr[i];
                printf("%d\n", yigindi);
                break;
            }
            case 0:
                break;
            default:
                printf("Noto'g'ri tanlov\n");
        }
    } while (tanlov != 0);
    return 0;
}
