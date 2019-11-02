/*****Finding area and Circumference of a circle**/
#include <stdio.h>
int main(void){
    float radius;
	float area, circumference;
	printf("Enter radius of circle: ");
	scanf("%f", &radius);
	
	area= 3.14*radius*radius;
	circumference= 2*3.14*radius;
	
	printf("\nArea of circle is %f", area);
	printf("\nCircumference of circle is %f", circumference);
	
}	
