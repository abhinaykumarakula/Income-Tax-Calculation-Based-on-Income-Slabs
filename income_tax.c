// OM NAMO VENKATESHAYA
// AUTHOR  : ABHINAY
/* PROGRAM :  Calculate income tax paid by an employee
 to the government as per the slabs mentioned below:
  Income Slab             Tax 
  ============           ======
   2.5 – 5.0L       =>     5% 
   5.0L - 10.0L     =>     20% 
   Above 10.0L      =>     30%
*/

#include <stdio.h>

int main(){

    int income;
    float tax;

    // talking the income as input from the user
    printf("ENTER THE INCOME =====> \n");
    scanf("%d",&income);

    //checking the income is less than or equal to 2.5 lakhs
    if(income<=250000)
    {
        tax =0;
    }
    // checking income is more than 2.5lakhs and less than 5lakhs
    else if(income>250000 && income<=500000)
    {
        // 5% tax is applicable in this income region
        tax = (income-250000)*0.05;
    }
    // checking income is more than 5lakhs and less than 10lakhs
    else if(income>500000 && income<=1000000)
    {
        // 20% tax is applicable in this income region
        tax = (250000*0.05)+(income-500000)*0.2;
    }
    // checking income is more than 10lakhs 
    else if(income>1000000)
    {
        // 30% tax is applicable in this income region
        tax = (250000*0.05)+(500000*0.2)+(income-1000000)*0.3;
    }

    // displaying the tax
    printf("TAX IS =====> %.2f\n",tax);

    return 0;
}
