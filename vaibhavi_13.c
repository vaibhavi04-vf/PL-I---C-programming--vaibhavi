/* program(13) write a program using the switch case statement to create n menu driven calculator that repeatedly performs arithmeticoperations until the user exits the program. */
#include <stdio.h>
int choice;
float num1, num2, result;
printf("\n ===== MENU DRIVEN CALCULATOR ===== \n");
printf("1. Addition\n");
printf("2. Subtraction\n");
printf("3. Multiplication\n");
printf("4. Division\n");
printf("5. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice)
case 1:
printf("Enter two numbers: ");
scanf("%f%f", &num1, &num2);
result = num1 + num2;
printf("Result = %.2f\n", result);
break;

case 2:
printf("Enter two numbers: ");
scanf("%f %f", &num1, &num2);
result = num1 - num2;
printf("Result = %.2f\n", result);
case 3.
printf("Enter two numbers: ");
scanf("%f %f", &num1, &num2);
result = num1* num2;
printf("Result = %.2f\n", result);
break;
case 4:
printf("Enter two numbers: ");
scanf("%f %f", &num1, &num2);

if (num2 != 0)
printf("Result = %.2f\n", num1 / num2);
else
printf("Error! Division by zero is not allowed.\n");
break:
case 5:
printf("Exiting Calculator ... \n");
break;

default:
printf("Invalid choice! Please try again.\n");

} while (choice != 5);

return 0;
}
