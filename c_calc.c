#include <stdio.h>
#include <stdlib.h>

int main(void) {

	while (1 == 1) {


		system("cls");

		int user_input, value1, value2, ans, usr_input2;
		float ans2, value3, value4;

		printf("\n");
		printf("Welcome to the C Calculator\n");
		printf("***************************\n\n");
		printf("1: Add\n");
		printf("2: Subtract\n");
		printf("3: Multiply\n");
		printf("4: Divide\n");
		printf("0: Quit\n");
		scanf("%d", &user_input);

		switch (user_input) {
		case 1:
			system("cls");
			printf("Addition\n");
			printf("********\n\n");
			printf("Enter your first number: ");
			scanf("%d", &value1);
			printf("\n");
			printf("Enter your second number: ");
			scanf("%d", &value2);
			printf("\n");
			ans = value1 + value2;
			printf("Your answer is %d\n", ans);
			printf("1: Main Menu\n");
			printf("0: Quit Program\n");
			scanf("%d", &usr_input2);
			if (usr_input2 == 1) {
				system("cls");
				break;
			}
			else if (usr_input2 == 0) {
				return 0;
			}
			else {
				printf("Invalid Input Enter Selection Again\n");
				scanf("%d", &usr_input2);
			}
		case 2:
			system("cls");
			printf("Subtraction\n");
			printf("***********\n\n");
			printf("Enter your first number: ");
			scanf("%d", &value1);
			printf("\n");
			printf("Enter your second number: ");
			scanf("%d", &value2);
			printf("\n");
			ans = value1 - value2;
			printf("Your answer is %d\n", ans);
			printf("1: Main Menu\n");
			printf("0: Quit\n");
			scanf("%d", &usr_input2);
			if (usr_input2 == 1) {
				system("cls");
				break;
			}
			else if (usr_input2 == 0) {
				return 0;
			}
			else {
				printf("Invalid Input Enter Selection Again\n");
				scanf("%d", &usr_input2);
			}
		case 3:
			system("cls");
			printf("Multiplication\n");
			printf("**************\n\n");
			printf("Enter your first number: ");
			scanf("%d", &value1);
			printf("\n");
			printf("Enter your second number: ");
			scanf("%d", &value2);
			printf("\n");
			ans = value1 * value2;
			printf("Your answer is %d\n", ans);
			printf("1: Main Menu\n");
			printf("0: Quit\n");
			scanf("%d", &usr_input2);
			if (usr_input2 == 1) {
				system("cls");
				break;
			}
			else if (usr_input2 == 0) {
				return 0;
			}
			else {
				printf("Ivalid Input Enter Selection Again\n");
				scanf("%d", &usr_input2);
			}
		case 4:
			system("cls");
			printf("Division\n");
			printf("********\n\n");
			printf("Enter your first number: ");
			scanf("%f", &value3);
			printf("\n");
			printf("Enter your second number: ");
			scanf("%f", &value4);
			printf("\n");
			ans2 = value3 / value4;
			printf("Your answer is %.3f\n", ans2);
			printf("1: Main Menu\n");
			printf("0: Quit\n");
			scanf("%d", &usr_input2);
			if (usr_input2 == 1) {
				system("cls");
				break;
			}
			else if (usr_input2 == 0) {
				return 0;
			}
			else {
				printf("Invalid Input Enter Selection Again\n");
				scanf("%d", &usr_input2);
			}
		case 0:
			return 0;

		}
	}


	return 0;
}