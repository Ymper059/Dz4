#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "RUS");
    int A, B;
    int с ;

    printf("=== ПРОВЕРКА СИГНАЛОВ ===\n");
    printf("Введите два целых числа A и B: ");
    scanf("%d %d", &A, &B);
    с = ((A % 2 != 0) && (B % 2 == 0)) ||
        ((A % 2 == 0) && (B % 2 != 0));

    printf("Сирена включается (1 - да, 0 - нет): %d\n", с );

    return 0;
}
