#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kilograms , pounds;
    printf("enter mass in pounds");
    scanf("%f", &pounds);
    printf("conversion table\n");

    kilograms=pounds*0.454;
    printf("%6.2f\t%6.2f\n",pounds,kilograms);

    return 0;
}
