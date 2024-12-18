//area and perimeter of circle//
#include <stdio.h>
#define PI 3.1415
int main(){
    float r,a,p;
    printf("enter the radius of circle\n:");
    scanf("%f",&r);
    a=PI*r*r;
    p=2*PI*r;
    printf("area of circle: %f",a);
    printf("\nperimeter of circle: %f",p);
    return 0;
}