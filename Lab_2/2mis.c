#include <stdio.h>
#include <math.h>
#include <windows.h>
int main(void) {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n;
    printf("Введіть число n: ");
    scanf("%d", &n);
    if (n > 0) {
        double P = 1;
        double S = 0;
        double num;
        long long count = 0;
        printf("Кількість операцій протягом виконання програми:\n");
        printf("--------------------------------------\n");
        for (int i = 1; i <= n; i++) {
            count++;               
            S += i + sin(i);
            count += 3;             
            num = i * i + 1;
            count += 3;           
            P *= num / S;
            count += 3;         
            printf("%d - %lld\n", i, count);
        }

        printf("--------------------------------------\n");
        printf("Результат обчислення: %.7f\n", P);
        printf("Кількість операцій: %lld\n", count);
    }
    else {
        printf("Введене число n повинно натуральним.\n");
    }
    return 0;
}