#include <stdio.h>
#include <math.h>
int main()  
{  
   float r;
    int b;
   scanf("%f",&r) ;
   b=(int)r;
    printf("%d\n",b);
   printf("%d\n",(int)ceil(r));
   printf("%d\n",(int)floor(r));
   return 0;
}
