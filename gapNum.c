#include<stdio.h>

int main(void){
	//define two integer variables
	int L, R;
	int i;
	
	printf("Enter two numbers: ");
	scanf("%d %d",&L, &R);   //getting input from user
	
	//Logic to display the number between the input numbers including both of them
	if(L<R){
		for(i=L; i<=R; i++)
		printf("%d ", i);   //print all the numbers
	}
	else{
		for(i=R; i<=L; i++)
		printf("%d ", i);     //print all the numbers
	}
}	
