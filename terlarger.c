/*****Finding Larger number using ternary operator*****/
#include <stdio.h>
int main(void){
    int num1, num2, larger;
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("\nEnter second number: ");
	scanf("%d", &num2);
	
	larger= num1>num2? num1: num2;
	printf("\nLarger number is %d", larger);
}	
