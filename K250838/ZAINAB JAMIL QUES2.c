#include <stdio.h>
int main() {
	int rolecode;
	int accesslevel;
	printf("1 = Scientist\n");
	printf("2 = Engineer\n");
	printf("3 = Intern\n");
	printf("Enter your role code:\n");
	scanf("%d", &rolecode);
	printf("Bit 0 (1) = Entry to Building\n");
	printf("Bit 1 (2) = Access to Lab\n");
	printf("Bit 2 (3) = Access to Data Centre\n");
	printf("Enter your access level:\n");
	scanf("%d", &accesslevel);
	switch (rolecode) {
	case 1:
	if (rolecode == 1 && accesslevel == 1) {
	printf("You have access to building\n");
		
	} else if (rolecode == 1 && accesslevel == 10) {
	printf("You have access to lab\n");
	}	else {
		printf("You have access to Data Centre\n");
	}
	break;
	case 2:
		if (rolecode == 2 && accesslevel == 1) {
		printf("You have access to Building\n");
		} else if(rolecode == 2 && accesslevel == 10) {
			printf("You have access to Lab\n");
		} else {
			printf("You have access to Data Centre\n");
		}
		break;
		case 3:
			if (rolecode == 3 && accesslevel == 1) {
				printf("You have access to Building\n");
				
			}else if (rolecode == 3 && accesslevel == 10) {
				printf("You have access to Lab\n");
			} else {
				printf("You have access to Data Center\n");
			}
			break;
			return 0;
}
			}			
		
	

