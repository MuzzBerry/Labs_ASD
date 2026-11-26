#include <stdio.h>
#include <windows.h>
int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float x;
    int outOfRange;
    float answer;
    if (scanf("%f", &x))
    {
        if (x > 10 || (x > -32 && x < -20))
        {
            answer = x * 2 - 3;
            outOfRange = 0;
        }
        else if (x > 0 && x <= 5)
        {
            answer = x * 3 - 5 * x * 2;
            outOfRange = 0;
        }
        else
        {
            outOfRange = 1;
        }
        if (outOfRange)
        {
            printf("Поза межами функції\n");
        }
        else
        {
            printf("%f\n", answer);
        }
        return 0;
    }
}