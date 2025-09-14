#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int choice;
	printf("Welcome to vending Machine!\n");
	printf("1. Water - 1");
	printf("2. Soda - 2\n");
	printf("3. Juice - 3");
	printf("Enter your choice (1-3):");
	scanf("%d", &choice);
	
	switch (choice) {
	    case 1:
	    	printf("You selected Water. Please pay 1.\n");
	        break;
	    case 2:
	    	printf("You selected Soda. Please pay 2.\n");
	    	break;
	    case 3:
	    	printf("You selected Juice. Please pay 3.\n");
	    	break;
	    default:
	    	printf("Invalid selection. Please try again.\n");
    }
	
	return 0;
}
