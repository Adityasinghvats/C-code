// #include<stdio.h>
// void greet(){
//     printf("Good moarning!\n");
//     printf("How are you?\n");
//     return;
//     // return maens to end 
// }
// int main(){
//     greet();
//     greet();
//     greet();
//     return 0;
// }
// first main function starts and make a call for greet function
// greet function executes
// C program to print the inverted left half pyramid pattern 
// of stars 
#include <stdio.h> 

int main() 
{ 
	int rows = 4; 

	// first loop for printing all rows 
	for (int i = 0; i < rows; i++) { 

		// first inner loop for printing white spaces 
		for (int j = 0; j < 2 * i; j++) { 
			printf(" "); 
		} 

		// second inner loop for printing star * 
		for (int k = 0; k < rows - i; k++) { 
			printf("* "); 
		} 
		printf("\n"); 
	} 

	return 0; 
}





