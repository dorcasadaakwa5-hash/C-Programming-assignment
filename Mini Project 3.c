#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int age;
	printf("Enter your age:");
	scanf("%d", &age);
	
	if(age >= 18) {
		printf("You are eligible to vote.\n");		
	} else {
		printf("You are not eligible to vote.\n");
	}
	
	return 0;
}
