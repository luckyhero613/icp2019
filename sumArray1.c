//To add sum of squares of elements of an array
#include <stdio.h>
 
int main(void) {
    
	int N, i;
	printf("Number of variables wantg to add: ");
	scanf("%d", &N);
 
	int numArray[N]; // Define an array of four integers
    
	// Get inputs for the array elements
	for (i=0;i<N; i++) {
    	scanf("%d", &numArray[i]);
	}
	
	int sum = 0;
	// Write here the logic to add these integers:
	for(i=0; i<N; i++)
	sum += (numArray[i] * numArray[i]);
    
    
    
   
	printf("%d\n",sum);  // Print the sum
    
	return 0;
}
