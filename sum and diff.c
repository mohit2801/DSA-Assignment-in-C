#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a+b;
    int diff = a-b;
    printf("%d %d", sum, diff);
    
    float c,d;
    scanf("%f %f", &c, &d);
    float fsum = c+d;
    float fdiff = c-d;
    printf("\n%0.1f %0.1f", fsum, fdiff);
    
    
    
    
    return 0;
}
