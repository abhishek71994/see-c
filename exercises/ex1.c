#include<stdio.h>

// int main(int argc, char* argv[]){
//     int age = 30;
//     int height = 176;
//     char c[4]="hell";

//     printf("I am %d years of age.\n", age);
//     printf("Pointer to age: %p \n", &age);
//     printf("My height is %d cm \n", height);
//     puts(c);
//     printf("\n %c \n", c[1]);
    
//     return 0;
// }

/* print Fahrenheit-Celsius table
for f = 0, 20, ..., 300 */

#define STEP 20

int main()
{
    int lower, upper;
    float fahr;
    lower = 0; /* lower limit of temperature table */
    upper = 300; /* upper limit */
    printf("Fahrenheit \t Celsius\n");
    
    for(fahr = lower; fahr <= upper; fahr = fahr + STEP){
        printf("%4.0f \t\t %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }

    return 0;
}