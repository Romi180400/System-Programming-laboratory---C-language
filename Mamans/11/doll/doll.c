#include <stdio.h>
/** @brief This function asks for an input from the user,
   The function takes the first number from the accepted list and sets it to the current Dollar exchange rate.
   @return The function prints to a list with two columns;
   One with the NIS values and the other with the exchanged values.
   Finally it prints the total sum in Dollar multiple the Dollar exhange rate
*/
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


