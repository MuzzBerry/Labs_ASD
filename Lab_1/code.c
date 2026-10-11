#include <stdio.h>

int main() { 

    float x; 

    int outOfRange; 

    float answer; 

    if (scanf("%f", &x)) 

    { 

        if (x>14) 

        { 

            answer = -4 * x * 3 + 3 * x - 7; 

            outOfRange = 0; 

        } 

        else if (x>7) 

        { 

            outOfRange = 1; 

        } 

        else if (x>=2) 

        { 

            answer = x * 3 + 14; 

            outOfRange = 0; 

        } 

        else if (x>-3) 

        { 

            outOfRange = 1; 

        } 

        else if (x>-13) 

        { 

            answer = -4 * x * 3 + 3 * x - 7; 

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

    else 

    { 

        printf("Ввід некоректний\n"); 

        return 0; 

    } 

} 