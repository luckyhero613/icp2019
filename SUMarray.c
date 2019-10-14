#include <stdio.h>
int main(void){
    // define variable 
    int a;

    //Get input for number of elements
    printf("Number of data you want to add: ");
    scanf("%d", &a);
    
    //define an array of integer 
    int numArray[a];
    int i;
    //Get input for variables in an array
    for(i=0; i<a; i++){
        scanf("%d", &numArray[i]);
    }
    
    int sum=0;
    //Logic to add the integer
    for(i=0; i<a; i++)
    sum += numArray[i];
    
    printf("The sum of the variables is: %d\n", sum);  //Print the sum value
}
