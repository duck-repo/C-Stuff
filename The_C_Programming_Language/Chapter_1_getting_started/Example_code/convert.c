#include <stdio.h>

main()
{
    int fahr, cels;
    int lower, upper, step;

    lower = 0; /* lower limit of temperature table */
    upper =300; /* upper limit of temperature table */
    step =20; /* step size */

    fahr = lower;
    
    printf("F\tC\t\n");
    while(fahr <= upper)
    {
        cels = 5*(fahr-32)/9;
        printf("%d\t%d\n",fahr,cels); // %d\t correspond to fahr. %d\n correspond to cels.
        fahr=fahr+step;
    }
}
