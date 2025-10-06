#include <stdio.h>
int main() {
	int parkedCarID = 0;
	int parkedBy = 0;
	int choice;
	int parkingslot;
	int alreadyparkedcar;
	int alreadyparkedby;
	
	printf("Welcome to Parking Lot System\n");

printf("1. Check Parking Status\n");
printf("2. Park a car\n");
printf("3. Remove a car\n");
printf("4. Exit\n");
printf("Enter your choice:\n");
scanf(" %d ", &choice);
if (choice == 1) {
	if (parkedCarID == 0) {
	printf("No car is currently parked\n");
} else {
 printf("The car id is &d and the driver id is %d\n", parkedCarID , parkedBy);
}
} else if (choice == 2) {
	printf("Enter your id and car id:");
	scanf("%d %d", &parkedCarID, &parkedBy);
	printf("Go to the parking slot %d\n",parkingslot);
	scanf("%d", &parkingslot);
	if (parkingslot == 'E') {
		printf("Go to the parking slot %d\n", parkingslot);
}	else {
			printf("The slot is occupied by another driver!\n");
			
		}
	
   	
} else if (choice == 3) {
	printf("Enter your driver ID and car ID:\n");
	scanf("%d %d", &parkedCarID , &parkedBy);
	if (parkedCarID == alreadyparkedcar && parkedBy == alreadyparkedby) {
		
		printf("Emptying the car slot\n");
	} else {
		printf("Car cannot be removed\n");
		
	}
	
}
else if (choice == 4) {
	printf("Exiting Parking Lot System\n");
} else {
	printf("Invalid choice, please try again\n");
} return 0;
}
