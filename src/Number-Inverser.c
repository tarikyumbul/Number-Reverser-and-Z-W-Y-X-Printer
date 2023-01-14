/*

Hasan Tarýk Yumbul
    150119757

This program is used for inversing a number's right most N digits.

*/

#include <stdio.h>

void reverseN(int *number, int N){
	
	// Separating the digits of the number. An input can have a maximum of 10 digits.
	int digit_1 = *number % 10;
	int digit_2 = (*number / 10) % 10;
	int digit_3 = (*number / 100) % 10;
	int digit_4 = (*number / 1000) % 10;
	int digit_5 = (*number / 10000) % 10;
	int digit_6 = (*number / 100000) % 10;
	int digit_7 = (*number / 1000000) % 10;
	int digit_8 = (*number / 10000000) % 10;
	int digit_9 = (*number / 100000000) % 10;
	int digit_10 = (*number / 1000000000) % 10;
	
	// Inversing the digits while N equals 2. Pay attention to "original_digit" and "reversed_digit" variables.
	if(N == 2){
		int original_digit_10 = digit_10 * 1000000000;
		int original_digit_9 = digit_9 * 100000000;
		int original_digit_8 = digit_8 * 10000000;
		int original_digit_7 = digit_7 * 1000000;
		int original_digit_6 = digit_6 * 100000;
		int original_digit_5 = digit_5 * 10000;
		int original_digit_4 = digit_4 * 1000;
		int original_digit_3 = digit_3 * 100;
		int reversed_digit_2 = digit_1 * 10;
		int reversed_digit_1 = digit_2 * 1;
		int reversed_num = reversed_digit_1 + reversed_digit_2 + original_digit_3 + original_digit_4 + 
		original_digit_5 + original_digit_6 + original_digit_7 + original_digit_8 + original_digit_9 + original_digit_10;
		*number = reversed_num;
	}
	
	// Inversing the digits while N equals 3.
	else if(N == 3){
		int original_digit_10 = digit_10 * 1000000000;
		int original_digit_9 = digit_9 * 100000000;
		int original_digit_8 = digit_8 * 10000000;
		int original_digit_7 = digit_7 * 1000000;
		int original_digit_6 = digit_6 * 100000;
		int original_digit_5 = digit_5 * 10000;
		int original_digit_4 = digit_4 * 1000;
		int reversed_digit_3 = digit_1 * 100;
		int reversed_digit_2 = digit_2 * 10;
		int reversed_digit_1 = digit_3 * 1;
		int reversed_num = reversed_digit_1 + reversed_digit_2 + reversed_digit_3 + original_digit_4 + 
		original_digit_5 + original_digit_6 + original_digit_7 + original_digit_8 + original_digit_9 + original_digit_10;
		*number = reversed_num;
	}
	
	// Inversing the digits while N equals 4.
	else if(N == 4){
		int original_digit_10 = digit_10 * 1000000000;
		int original_digit_9 = digit_9 * 100000000;
		int original_digit_8 = digit_8 * 10000000;
		int original_digit_7 = digit_7 * 1000000;
		int original_digit_6 = digit_6 * 100000;
		int original_digit_5 = digit_5 * 10000;
		int reversed_digit_4 = digit_1 * 1000;
		int reversed_digit_3 = digit_2 * 100;
		int reversed_digit_2 = digit_3 * 10;
		int reversed_digit_1 = digit_4 * 1;
		int reversed_num = reversed_digit_1 + reversed_digit_2 + reversed_digit_3 + reversed_digit_4 + 
		original_digit_5 + original_digit_6 + original_digit_7 + original_digit_8 + original_digit_9 + original_digit_10;
		*number = reversed_num;
	}
	
	// Inversing the digits while N equals 5.
	else if(N == 5){
		int original_digit_10 = digit_10 * 1000000000;
		int original_digit_9 = digit_9 * 100000000;
		int original_digit_8 = digit_8 * 10000000;
		int original_digit_7 = digit_7 * 1000000;
		int original_digit_6 = digit_6 * 100000;
		int reversed_digit_5 = digit_1 * 10000;
		int reversed_digit_4 = digit_2 * 1000;
		int reversed_digit_3 = digit_3 * 100;
		int reversed_digit_2 = digit_4 * 10;
		int reversed_digit_1 = digit_5 * 1;
		int reversed_num = reversed_digit_1 + reversed_digit_2 + reversed_digit_3 + reversed_digit_4 + 
		reversed_digit_5 + original_digit_6 + original_digit_7 + original_digit_8 + original_digit_9 + original_digit_10;
		*number = reversed_num;
	}
	
	// Inversing the digits while N equals 6.
	else if(N == 6){
		int original_digit_10 = digit_10 * 1000000000;
		int original_digit_9 = digit_9 * 100000000;
		int original_digit_8 = digit_8 * 10000000;
		int original_digit_7 = digit_7 * 1000000;
		int reversed_digit_6 = digit_1 * 100000;
		int reversed_digit_5 = digit_2 * 10000;
		int reversed_digit_4 = digit_3 * 1000;
		int reversed_digit_3 = digit_4 * 100;
		int reversed_digit_2 = digit_5 * 10;
		int reversed_digit_1 = digit_6 * 1;
		int reversed_num = reversed_digit_1 + reversed_digit_2 + reversed_digit_3 + reversed_digit_4 + 
		reversed_digit_5 + reversed_digit_6 + original_digit_7 + original_digit_8 + original_digit_9 + original_digit_10;
		*number = reversed_num;
	}
	
	// Inversing the digits while N equals 7.
	else if(N == 7){
		int original_digit_10 = digit_10 * 1000000000;
		int original_digit_9 = digit_9 * 100000000;
		int original_digit_8 = digit_8 * 10000000;
		int reversed_digit_7 = digit_1 * 1000000;
		int reversed_digit_6 = digit_2 * 100000;
		int reversed_digit_5 = digit_3 * 10000;
		int reversed_digit_4 = digit_4 * 1000;
		int reversed_digit_3 = digit_5 * 100;
		int reversed_digit_2 = digit_6 * 10;
		int reversed_digit_1 = digit_7 * 1;
		int reversed_num = reversed_digit_1 + reversed_digit_2 + reversed_digit_3 + reversed_digit_4 + 
		reversed_digit_5 + reversed_digit_6 + reversed_digit_7 + original_digit_8 + original_digit_9 + original_digit_10;
		*number = reversed_num;
	}
	
	// Inversing the digits while N equals 8.
	else if(N == 8){
		int original_digit_10 = digit_10 * 1000000000;
		int original_digit_9 = digit_9 * 100000000;
		int reversed_digit_8 = digit_1 * 10000000;
		int reversed_digit_7 = digit_2 * 1000000;
		int reversed_digit_6 = digit_3 * 100000;
		int reversed_digit_5 = digit_4 * 10000;
		int reversed_digit_4 = digit_5 * 1000;
		int reversed_digit_3 = digit_6 * 100;
		int reversed_digit_2 = digit_7 * 10;
		int reversed_digit_1 = digit_8 * 1;
		int reversed_num = reversed_digit_1 + reversed_digit_2 + reversed_digit_3 + reversed_digit_4 + 
		reversed_digit_5 + reversed_digit_6 + reversed_digit_7 + reversed_digit_8 + original_digit_9 + original_digit_10;
		*number = reversed_num;
	}
	
	// Inversing the digits while N equals 9.
	else if(N == 9){
		int original_digit_10 = digit_10 * 1000000000;
		int reversed_digit_9 = digit_1 * 100000000;
		int reversed_digit_8 = digit_2 * 10000000;
		int reversed_digit_7 = digit_3 * 1000000;
		int reversed_digit_6 = digit_4 * 100000;
		int reversed_digit_5 = digit_5 * 10000;
		int reversed_digit_4 = digit_6 * 1000;
		int reversed_digit_3 = digit_7 * 100;
		int reversed_digit_2 = digit_8 * 10;
		int reversed_digit_1 = digit_9 * 1;
		int reversed_num = reversed_digit_1 + reversed_digit_2 + reversed_digit_3 + reversed_digit_4 + 
		reversed_digit_5 + reversed_digit_6 + reversed_digit_7 + reversed_digit_8 + reversed_digit_9 + original_digit_10;
		*number = reversed_num;
	}
	
	// Inversing the digits while N equals 10.
	else if(N == 10){
		int reversed_digit_10 = digit_1 * 1000000000;
		int reversed_digit_9 = digit_2 * 100000000;
		int reversed_digit_8 = digit_3 * 10000000;
		int reversed_digit_7 = digit_4 * 1000000;
		int reversed_digit_6 = digit_5 * 100000;
		int reversed_digit_5 = digit_6 * 10000;
		int reversed_digit_4 = digit_7 * 1000;
		int reversed_digit_3 = digit_8 * 100;
		int reversed_digit_2 = digit_9 * 10;
		int reversed_digit_1 = digit_10 * 1;
		int reversed_num = reversed_digit_1 + reversed_digit_2 + reversed_digit_3 + reversed_digit_4 + 
		reversed_digit_5 + reversed_digit_6 + reversed_digit_7 + reversed_digit_8 + reversed_digit_9 + reversed_digit_10;
		*number = reversed_num;
	}
	
	
}

int main ( void ){
	
	// Taking input from the user.
	int num;
	int N;
	int *number = NULL;
	printf("Please enter two integers; a number to be reversed and the number of digits to be reversed:\n");
	scanf("%d %d", &num, &N);
	number = &num;
	
	// Counting the digits of the number.
	int digit_checker = 1;
	int digit_counter = 1;
	while(1){
		digit_checker *= 10;
		if(digit_checker > num){
			break;
		}
		else{
			digit_counter += 1;
		}
	}
	
	// Error messages and function invocation.
	if(num < 10 || num < 0){
		printf("Number must be a 2-to-10-digit positive integer.");
	}
	else if(N < 2){
		printf("N must always be more than 1.");
	}
	else if(N > digit_counter){
		printf("N must be less than %d in that situation.", digit_counter + 1);
	}
	else{
		reverseN(number, N);
		printf("%d", *number);
	}
}

