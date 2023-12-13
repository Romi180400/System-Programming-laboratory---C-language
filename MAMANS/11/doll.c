#include <stdio.h>

int main() {
    float dollar_c;
    float current_val;
    float sumD = 0;

    printf("$\t\t\t\tIS\n");
    scanf("%f", &dollar_c);

    while (scanf("%f", &current_val) == 1) {
        sumD += current_val;
        printf("%.2f\t\t\t\t%.2f\n", current_val, dollar_c * current_val);
    }
    printf("%.2f\t\t\t\t%.2f\n",sumD, sumD * dollar_c);
    return 0;
}
