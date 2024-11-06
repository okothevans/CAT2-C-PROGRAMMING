/*
EVANS OKOTH OKUMU
CT102/G/23443/24
*/


#include <stdio.h>

int main() {
    float hoursworkedy;
    float hourlywage;
    float grosspay;
    float tax;
    floatnetpay;
    float overtimehours = 0;
    
    printf("Enter number of hoursworked in a week: ");
    scanf("%f", &hoursworked);
    
    printf("Enter the hourlywage: ");
    scanf("%f", &hourlywage);
    
    //Calculate overtime
    if (hoursworked > 40) {
        overtimehours = hoursworked - 40;
        grosspay = (40 * hourlywage) + (overtimehours * hourlywage * 1.5);
    } else {
        grosspay = hoursworked * hourlywage;
    }

    //Calculate trexrate
    if (grosspay <= 600) {
        tax = grosspay * 0.15; 
    } else {
        tax = (600 * 0.15) + ((grosspay - 600) * 0.20);
    }

  
    netpay = grosspay - tax;
  
    printf("Gross Pay: $%.3f\n", grosspay);
    printf("Taxes: $%.3f\n", tax);
    printf("Net Pay: $%.3f\n", netpay);

    return 0;
}
