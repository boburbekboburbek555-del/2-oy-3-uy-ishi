#include <stdio.h>

void sonlarni_kiritish(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d-element: ", i + 1);
        scanf("%d", &a[i]);
    }
}

int main(void) {
    int tanlov;

    do {
        printf("\n=============================\n");
        printf("       MASALALAR MENYUSI\n");
        printf("=============================\n");
        printf("1. Massiv elementlari\n");
        printf("2. Juft va toq sonlar\n");
        printf("3. Musbat sonlar soni\n");
        printf("4. Manfiy sonlar\n");
        printf("5. 5 dan katta sonlar\n");
        printf("6. Eng katta son\n");
        printf("7. Eng kichik son\n");
        printf("8. Juft va toq sonlar yig'indisi\n");
        printf("9. 50 soni bilan solishtirish\n");
        printf("10. Baholarni tahlil qilish\n");
        printf("11. Nol elementlarni hisoblash\n");
        printf("12. Manfiy sonlarni nolga almashtirish\n");
        printf("13. Juft sonlardan yangi massiv\n");
        printf("14. 3 va 5 ga bo'linadigan sonlar\n");
        printf("15. Massivni teskari chiqarish\n");
        printf("16. Takroriy sonlarni aniqlash\n");
        printf("17. O'sish tartibini tekshirish\n");
        printf("18. Sonlarni toifalash\n");
        printf("19. Massivni o'sish tartibida saralash\n");
        printf("20. Massiv bilan ishlash menyusi\n");
        printf("0. Dasturni tugatish\n");
        printf("Tanlovingiz: ");
        scanf("%d", &tanlov);

        switch (tanlov) {
            case 1: {
                int a[10];
                printf("10 ta son kiriting:\n");
                sonlarni_kiritish(a, 10);
                printf("Natija:\n");
                for (int i = 0; i < 10; i++) {
                    printf("%d - %s\n", a[i],
                           a[i] > 0 ? "Musbat" : "Manfiy yoki nol");
                }
                break;
            }

            case 2: {
                int a[10];
                printf("10 ta son kiriting:\n");
                sonlarni_kiritish(a, 10);
                for (int i = 0; i < 10; i++) {
                    printf("%d - %s\n", a[i],
                           a[i] % 2 == 0 ? "Juft" : "Toq");
                }
                break;
            }

            case 3: {
                int a[10], soni = 0;
                printf("10 ta son kiriting:\n");
                sonlarni_kiritish(a, 10);
                for (int i = 0; i < 10; i++) {
                    if (a[i] > 0) {
                        soni++;
                    }
                }
                printf("Musbat sonlar soni: %d\n", soni);
                break;
            }

            case 4: {
                int a[10], soni = 0;
                printf("10 ta son kiriting:\n");
                sonlarni_kiritish(a, 10);
                printf("Manfiy sonlar:\n");
                for (int i = 0; i < 10; i++) {
                    if (a[i] < 0) {
                        printf("%d\n", a[i]);
                        soni++;
                    }
                }
                if (soni == 0) {
                    printf("Manfiy son yo'q\n");
                }
                break;
            }

            case 5: {
                int a[10];
                printf("10 ta son kiriting:\n");
                sonlarni_kiritish(a, 10);
                printf("5 dan katta sonlar:\n");
                for (int i = 0; i < 10; i++) {
                    if (a[i] > 5) {
                        printf("%d\n", a[i]);
                    }
                }
                break;
            }

            case 6: {
                int a[10], eng_katta;
                printf("10 ta son kiriting:\n");
                sonlarni_kiritish(a, 10);
                eng_katta = a[0];
                for (int i = 1; i < 10; i++) {
                    if (a[i] > eng_katta) {
                        eng_katta = a[i];
                    }
                }
                printf("Eng katta son: %d\n", eng_katta);
                printf("%s\n", eng_katta > 100 ? "Katta son" : "Oddiy son");
                break;
            }

            case 7: {
                int a[10], eng_kichik;
                printf("10 ta son kiriting:\n");
                sonlarni_kiritish(a, 10);
                eng_kichik = a[0];
                for (int i = 1; i < 10; i++) {
                    if (a[i] < eng_kichik) {
                        eng_kichik = a[i];
                    }
                }
                printf("Eng kichik son: %d\n", eng_kichik);
                printf("%s\n",
                       eng_kichik < 0
                           ? "Manfiy minimum"
                           : "Musbat yoki nol minimum");
                break;
            }

            case 8: {
                int a[10], juft_yigindi = 0, toq_yigindi = 0;
                printf("10 ta son kiriting:\n");
                sonlarni_kiritish(a, 10);
                for (int i = 0; i < 10; i++) {
                    if (a[i] % 2 == 0) {
                        juft_yigindi += a[i];
                    } else {
                        toq_yigindi += a[i];
                    }
                }
                printf("Juft sonlar yig'indisi: %d\n", juft_yigindi);
                printf("Toq sonlar yig'indisi: %d\n", toq_yigindi);
                break;
            }

            case 9: {
                int a[15];
                printf("15 ta son kiriting:\n");
                sonlarni_kiritish(a, 15);
                for (int i = 0; i < 15; i++) {
                    printf("%d - ", a[i]);
                    if (a[i] > 50) {
                        printf("Katta\n");
                    } else if (a[i] == 50) {
                        printf("Teng\n");
                    } else {
                        printf("Kichik\n");
                    }
                }
                break;
            }

            case 10: {
                int baho[10];
                printf("10 ta baho kiriting:\n");
                sonlarni_kiritish(baho, 10);
                for (int i = 0; i < 10; i++) {
                    printf("Baho %d: ", baho[i]);
                    if (baho[i] >= 90 && baho[i] <= 100) {
                        printf("A'lo\n");
                    } else if (baho[i] >= 70 && baho[i] <= 89) {
                        printf("Yaxshi\n");
                    } else if (baho[i] >= 60 && baho[i] <= 69) {
                        printf("Qoniqarli\n");
                    } else if (baho[i] >= 0 && baho[i] <= 59) {
                        printf("Qoniqarsiz\n");
                    } else {
                        printf("Xato baho\n");
                    }
                }
                break;
            }

            case 11: {
                int a[10], nol_soni = 0;
                printf("10 ta son kiriting:\n");
                sonlarni_kiritish(a, 10);
                for (int i = 0; i < 10; i++) {
                    if (a[i] == 0) {
                        nol_soni++;
                    }
                }
                printf("Nollar soni: %d\n", nol_soni);
                printf("%s\n", nol_soni > 3 ? "Nollar ko'p" : "Nollar kam");
                break;
            }

            case 12: {
                int a[10];
                printf("10 ta son kiriting:\n");
                sonlarni_kiritish(a, 10);
                for (int i = 0; i < 10; i++) {
                    if (a[i] < 0) {
                        a[i] = 0;
                    }
                }
                printf("Natija: ");
                for (int i = 0; i < 10; i++) {
                    printf("%d ", a[i]);
                }
                printf("\n");
                break;
            }

            case 13: {
                int a[10], juftlar[10], juft_soni = 0;
                printf("10 ta son kiriting:\n");
                sonlarni_kiritish(a, 10);
                for (int i = 0; i < 10; i++) {
                    if (a[i] % 2 == 0) {
                        juftlar[juft_soni] = a[i];
                        juft_soni++;
                    }
                }
                printf("Juft sonlar: ");
                if (juft_soni == 0) {
                    printf("Yo'q");
                } else {
                    for (int i = 0; i < juft_soni; i++) {
                        printf("%d ", juftlar[i]);
                    }
                }
                printf("\n");
                break;
            }

            case 14: {
                int a[15];
                printf("15 ta son kiriting:\n");
                sonlarni_kiritish(a, 15);
                printf("3 ga bo'linadigan sonlar:\n");
                for (int i = 0; i < 15; i++) {
                    if (a[i] % 3 == 0) {
                        printf("%d", a[i]);
                        if (a[i] % 5 == 0) {
                            printf(" - 3 va 5 ga bo'linadi");
                        }
                        printf("\n");
                    }
                }
                break;
            }

            case 15: {
                int a[10];
                printf("10 ta son kiriting:\n");
                sonlarni_kiritish(a, 10);
                printf("Teskari tartib:\n");
                for (int i = 9; i >= 0; i--) {
                    printf("%d - %s\n", a[i],
                           a[i] >= 0 ? "Musbat yoki nol" : "Manfiy");
                }
                break;
            }

            case 16: {
                int a[10];
                printf("10 ta son kiriting:\n");
                sonlarni_kiritish(a, 10);
                for (int i = 0; i < 10; i++) {
                    int takror = 0;
                    for (int j = 0; j < 10; j++) {
                        if (i != j && a[i] == a[j]) {
                            takror = 1;
                            break;
                        }
                    }
                    printf("%d - %s\n", a[i],
                           takror ? "Takrorlangan" : "Takrorlanmagan");
                }
                break;
            }

            case 17: {
                int a[10], tartibda = 1;
                printf("10 ta son kiriting:\n");
                sonlarni_kiritish(a, 10);
                for (int i = 1; i < 10; i++) {
                    if (a[i] <= a[i - 1]) {
                        tartibda = 0;
                        break;
                    }
                }
                printf("%s\n",
                       tartibda ? "O'sish tartibida" : "O'sish tartibida emas");
                break;
            }

            case 18: {
                int a[15];
                int manfiy = 0, nol = 0, kichik = 0, katta = 0;
                printf("15 ta son kiriting:\n");
                sonlarni_kiritish(a, 15);
                for (int i = 0; i < 15; i++) {
                    if (a[i] < 0) {
                        printf("%d - Manfiy\n", a[i]);
                        manfiy++;
                    } else if (a[i] == 0) {
                        printf("%d - Nol\n", a[i]);
                        nol++;
                    } else if (a[i] >= 1 && a[i] <= 10) {
                        printf("%d - Kichik son\n", a[i]);
                        kichik++;
                    } else {
                        printf("%d - Katta son\n", a[i]);
                        katta++;
                    }
                }
                printf("Manfiy: %d, Nol: %d, Kichik: %d, Katta: %d\n",
                       manfiy, nol, kichik, katta);
                break;
            }

            case 19: {
                int a[10];
                printf("10 ta butun son kiriting:\n");
                sonlarni_kiritish(a, 10);
                for (int i = 0; i < 9; i++) {
                    for (int j = 0; j < 9 - i; j++) {
                        if (a[j] > a[j + 1]) {
                            int vaqtincha = a[j];
                            a[j] = a[j + 1];
                            a[j + 1] = vaqtincha;
                        }
                    }
                }
                printf("Saralangan massiv: ");
                for (int i = 0; i < 10; i++) {
                    printf("%d ", a[i]);
                }
                printf("\n");
                break;
            }

            case 20: {
                int a[10], buyruq;
                printf("10 ta elementli massivni kiriting:\n");
                sonlarni_kiritish(a, 10);

                while (1) {
                    printf("\n1. Massiv elementlarini chiqarish\n");
                    printf("2. Juft sonlarni chiqarish\n");
                    printf("3. Toq sonlarni chiqarish\n");
                    printf("4. Eng katta sonni topish\n");
                    printf("5. Eng kichik sonni topish\n");
                    printf("6. Massiv elementlari yig'indisini hisoblash\n");
                    printf("0. Dasturni tugatish\n");
                    printf("Tanlov: ");
                    scanf("%d", &buyruq);

                    switch (buyruq) {
                        case 1:
                            printf("Massiv: ");
                            for (int i = 0; i < 10; i++) {
                                printf("%d ", a[i]);
                            }
                            printf("\n");
                            break;

                        case 2:
                            printf("Juft sonlar: ");
                            for (int i = 0; i < 10; i++) {
                                if (a[i] % 2 == 0) {
                                    printf("%d ", a[i]);
                                }
                            }
                            printf("\n");
                            break;

                        case 3:
                            printf("Toq sonlar: ");
                            for (int i = 0; i < 10; i++) {
                                if (a[i] % 2 != 0) {
                                    printf("%d ", a[i]);
                                }
                            }
                            printf("\n");
                            break;

                        case 4: {
                            int eng_katta = a[0];
                            for (int i = 1; i < 10; i++) {
                                if (a[i] > eng_katta) {
                                    eng_katta = a[i];
                                }
                            }
                            printf("Eng katta son: %d\n", eng_katta);
                            break;
                        }

                        case 5: {
                            int eng_kichik = a[0];
                            for (int i = 1; i < 10; i++) {
                                if (a[i] < eng_kichik) {
                                    eng_kichik = a[i];
                                }
                            }
                            printf("Eng kichik son: %d\n", eng_kichik);
                            break;
                        }

                        case 6: {
                            int yigindi = 0;
                            for (int i = 0; i < 10; i++) {
                                yigindi += a[i];
                            }
                            printf("Yig'indi: %d\n", yigindi);
                            break;
                        }

                        case 0:
                            printf("Ichki menyu tugadi.\n");
                            break;

                        default:
                            printf("Noto'g'ri tanlov!\n");
                    }

                    if (buyruq == 0) {
                        break;
                    }
                }
                break;
            }

            case 0:
                printf("Dastur tugatildi.\n");
                break;

            default:
                printf("Noto'g'ri tanlov!\n");
        }
    } while (tanlov != 0);

    return 0;
}
