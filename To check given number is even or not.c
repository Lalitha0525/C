#include <stdio.h>

int main() {
   int n;
   scanf("%d",&n);
   printf("enter a number: ",n);
   if(n%2==0){
       printf("n is even");
   }
   else{
       printf("n is odd");
   }
   return 0;
}
