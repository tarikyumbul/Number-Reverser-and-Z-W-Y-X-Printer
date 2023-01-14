/*

Hasan Tarýk Yumbul
    150119757

This program is used for printing 4 specific letters; W, X, Y, Z; with a particular height using the asterisk symbol "*".

*/

#include <stdio.h>

int main ( void ){
	printf("Welcome to the Letter Printer.\n\n");
	
	// This loop is for asking for an input again in case the user entered an invalid one or wanted to run the program again.
	while(1){
		char letter;
		printf("Please enter the letter: ");
		scanf(" %c", &letter);
		
		// The input must be either of the following letters: W, w, X, x, Y, y, Z, z. Numbers below are these letters' ASCII codes.
		if(letter == 87 || letter == 119 || letter == 88 || letter == 120 || letter == 89 || letter == 121 || letter == 90 || letter == 122){
			
			// This loop is for asking for an input again in case the user entered an invalid one.
			while(1){
				int height;
				printf("Please enter the height you want: ");
				scanf(" %d", &height);
				printf("\n");
				
				// Checks if the wanted height input is an odd integer and greater than 5.
				if(height % 2 == 1 && height >= 5){
					
					// Implementation for "W" or "w".
					if(letter == 87 || letter == 119){
						
						// Printing the 3 top points.
						printf("*");
						for(int i = 0; i < 2 * height - 3; i++){
							printf(" ");
						}
						printf("*");
						for(int i = 0; i < 2 * height - 3; i++){
							printf(" ");
						}
						printf("*\n");
						
						// Printing the 4 lines between the top and bottom points.
						int left_most = 1;
						int left_mid = 2 * height - 5;
						int right_mid = 1;
						int right_most = 2 * height - 5;
						for(int i = 0; i < height - 2; i++){
							
							for(int i = left_most; i > 0; i--){
								printf(" ");
							}
							left_most++;
							printf("*");
							
							for(int i = 0; i < left_mid; i++){
								printf(" ");
							}
							left_mid -= 2;
							printf("*");
							
							for(int i = right_mid; i > 0; i--){
								printf(" ");
							}
							right_mid += 2;
							printf("*");
							
							for(int i = 0; i < right_most; i++){
								printf(" ");
							}
							right_most -= 2;
							printf("*\n");
						}
						
						// Printing the 2 bottom points.
						for(int i = 0; i < height - 1; i++){
							printf(" ");
						}
						printf("*");
						for(int i = 0; i < 2 * height - 3; i++){
							printf(" ");
						}
						printf("*\n");
					}
					
					// Implementation for "X" or "x".
					else if(letter == 88 || letter == 120){
						
						// Printing the upper lines.
						int up_left = 0;
						int up_right = height - 2;
						for(int i = 0; i < height / 2; i++){
							
							for(int i = up_left; i > 0; i--){
								printf(" ");
							}
							up_left++;
							printf("*");
							
							for(int i = 0; i < up_right; i++){
								printf(" ");
							}
							up_right -= 2;
							printf("*\n");
						}
						
						// Printing the middle point.
						for(int i = 0; i < height / 2; i++){
							printf(" ");
						}
						printf("*\n");
						
						// Printing the lower lines.
						int down_left = height / 2;
						int down_right = 1;
						for(int i = 0; i < height / 2; i++){
							
							for(int i = 1; i < down_left; i++){
								printf(" ");
							}
							down_left--;
							printf("*");
							
							for(int i = down_right; i > 0; i--){
								printf(" ");
							}
							down_right += 2;
							printf("*\n");
						}
					}
					
					// Implementation for "Y" or "y".
					else if(letter == 89 || letter == 121){
						
						// Printing the upper lines.
						int up_left = 0;
						int up_right = height - 2;
						for(int i = 0; i < height / 2; i++){
							
							for(int i = up_left; i > 0; i--){
								printf(" ");
							}
							up_left++;
							printf("*");
							
							for(int i = 0; i < up_right; i++){
								printf(" ");
							}
							up_right -= 2;
							printf("*\n");
						}
						
						// Printing the lower line.
						for(int i = 0; i < height / 2 + 1; i++){
							
							for(int i = 0; i < height / 2; i++){
								printf(" ");
							}
							printf("*\n");
						}
					}
					
					// Implementation for "Z" or "z".
					else if(letter == 90 || letter == 122){
						
						// Printing the upper straight line.
						for(int i = 0; i < height; i++){
							printf("*");
						}
						printf("\n");
						
						// Printing the inclined middle line.
						int space = height - 2;
						for(int i = 0; i < height - 2; i++){
							for(int i = space; i > 0; i--){
								printf(" ");
							}
							space--;
							printf("*\n");
						}
						
						//Printing the lower straight line.
						for(int i = 0; i < height; i++){
							printf("*");
						}
						printf("\n");
					}
					
					else{ // This will never happen. 
					}
					
					break;
				}
				// In case the user enters an invalid input for the height.
				else{
					printf("Please enter an odd integer greater than or equal to 5.\n");
					continue;
				}
			}
		}
		// In case the user enters an invalid input for the letter.
		else{
			printf("Please enter a valid letter.\n");
			continue;
		}
		
		// Asking the user if they want to continue to use the program or shut it down.
		int stop_asking = 0;
		while(stop_asking < 1){
			char yes_or_no;
			printf("\nWould you like to continue? (Y/N): ");
			scanf(" %c", &yes_or_no);
			printf("\n");
			if(yes_or_no == 89 || yes_or_no == 121){
				stop_asking++;
			}
			else if(yes_or_no == 78 || yes_or_no == 110){
				printf("Shutting down.\n");
				stop_asking += 2;
			}
			else{
				printf("Please enter a valid input.\n");
			}
		}
		if(stop_asking == 2){
			break;
		}
		else if(stop_asking == 1){
			continue;
		}
		else{
			// This will never happen.
		}
	}
	return 0;
}

