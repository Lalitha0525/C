#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char name[10];
    scanf("%s",name);
    printf("Name: %s\n",name);
    int age;
    scanf("%d",&age);
    printf("Age: %d\n",age);
    float CGPA;
    scanf("%f",&CGPA);
    float b=floor((CGPA)*100)/100;
    printf("CGPA: %.2f\n",b);
    char grade[1];
    scanf("%s",grade);
    printf("Grade: %s",grade);
    return 0;
}
