#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int l,b,area,perimeter;
    scanf("%d",&l);
    scanf("%d",&b);
    perimeter = 2*(l+b);
    printf("The required length is %d m\n",perimeter);
    area=l*b;
    printf("The required area of carpet is %d sqm",area);
    
    
    return 0;
}
