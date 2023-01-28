/*********************************************
 * Name: Testing Stuff from K.N. King's C Programming *
 * *******************************************/



// directives, because C has no built-in read and write functions
// performing input and ouput is provided by functions in this standard library
#include <stdio.h> 

// int, because function returns integer
// void as func parameter, because no arguments are being passed in
int main(void) 
{
    float height;
    height = 8.0f;
    int weight = 12;  
    printf("Value of height: %.2f and weight %d\n", height, weight);
    
	printf("To C, or not to C, that is the question.\n");
	
	return 0; // 0, to indicate normal prorgam termination 
}
