#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

#define clrscr() system("cls");

void check(char yMenu[], char nMenu[]);
void proceed();

// Program Menu Function Declarations Start
void mainMenu();
void arithmaticProgramsMenu();
void additionOfTwoNumbersMenu();
void subtractionOfTwoNumbersMenu();
void multiplicationOfTwoNumbersMenu();
void divisionOfTwoNumbersMenu();

void ifElseProgramsMenu();
void divisionOfTwoNumbersMenu();
void greatestOfTwoNumbersMenu();
void greatestOfThreeNumbersMenu();

void loopMenu();
void primeNumberMenu();
void fibonacciSeriesProgramsMenu();

// Program Menu Function Declarations End

int getChoice();
int getIntNumber();

void getIntegerNumbers(int intArray[], int inputCount);
void getDecimalNumbers(float floatArray[], int inputCount);

void checkPrimeNumber();
void checkPosNegNumber();
void checkOddEvenNumber();
void checkPalindronNumber();
void checkArmstrongNumber();
void printTable();
void addTwoIntNumber();
void subTwoIntNumber();
void mulTwoIntNumber();
void divTwoIntNumber();
void greatestTwoIntNumber();
void greatestThreeIntNumber();
void addTwoDecNumber();
void subTwoDecNumber();
void divTwoDecNumber();
void greatestTwoDecNumber();

char ch;
int i, n, n1, n2, n3;
float fn1;

int main()
{
	int count;
	long ln;
main:
	do // main menu
	{
		getch();
		clrscr();
		mainMenu();
		switch (getChoice())
		{
		case 1:
		arth:
			do // arthmatic main menu
			{
				clrscr();
				arithmaticProgramsMenu();
				switch (getChoice())
				{
				case 1:
					do // addition main menu
					{
						clrscr();
						additionOfTwoNumbersMenu();
						switch (getChoice())
						{
						case 1:
							clrscr();
							addTwoIntNumber();
							break;
						case 2:
							clrscr();
							addTwoDecNumber();
							break;
						case 3:
							goto arth;
						case 4:
							goto main;
						case 5:
							exit(0);
						default:
							printf("\n Invalid Option... Enter Valid Option");
						}
						proceed();
						check("Addition", "Main");
						if (ch == 'n' || ch == 'N')
							goto main;
					} while (ch == 'Y' || ch == 'y');

					break;
				case 2:
					do // subtraction main menu
					{
						clrscr();
						subtractionOfTwoNumbersMenu();
						switch (getChoice())
						{
						case 1:
							clrscr();
							subTwoIntNumber();
							break;
						case 2:
							clrscr();
							subTwoDecNumber();
							break;
						case 3:
							goto arth;
						case 4:
							goto main;
						case 5:
							exit(0);
						default:
							printf("\n Invalid Option... Enter Valid Option");
						}
						proceed();
						check("Subtraction", "Main");
						if (ch == 'n' || ch == 'N')
							goto main;
					} while (ch == 'Y' || ch == 'y');

					break;
				case 3:
					do // multiplication main menu
					{
						clrscr();
						multiplicationOfTwoNumbersMenu();
						switch (getChoice())
						{
						case 1:
							clrscr();
							mulTwoIntNumber();
							break;
						case 2:
							clrscr();
							printf("\n\t MULTIPLICATION OF 2 FLOATS");
							printf("\n----------------------------------------\n");
							float mulTwoDecNumArray[2];
							printf("\n Multiplication of %.2f and %.2f is %.2f", mulTwoDecNumArray[0], mulTwoDecNumArray[1], mulTwoDecNumArray[0] * mulTwoDecNumArray[1]);
							break;
						case 3:
							goto arth;
						case 4:
							goto main;
						case 5:
							exit(0);
						default:
							printf("\n Invalid Option... Enter Valid Option");
						}
						proceed();
						check("Multiplication", "Main");
						if (ch == 'n' || ch == 'N')
							goto main;
					} while (ch == 'Y' || ch == 'y');

					break;
				case 4:
					do // division main menu
					{
						clrscr();
						divisionOfTwoNumbersMenu();
						switch (getChoice())
						{
						case 1:
							clrscr();
							divTwoIntNumber();
							break;
						case 2:
							clrscr();
							divTwoDecNumber();
							break;
						case 3:
							goto arth;
						case 4:
							goto main;
						case 5:
							exit(0);
						default:
							printf("\n Invalid Option... Enter Valid Option");
						}
						proceed();
						check("Division", "Main");
						if (ch == 'n' || ch == 'N')
							goto main;
					} while (ch == 'Y' || ch == 'y');

					break;
				case 5:
					clrscr();
					printf("\n KM TO M DISTANCE CONVERTER");
					printf("\n ------------------------------\n");
					printf("\n Enter Distance in Kilometer = ");
					scanf("%f", &fn1);
					printf("\n Meter = %.2f M", fn1 * 1000);
					break;
				case 6:
					clrscr();
					printf("\n M TO KM DISTANCE CONVERTER");
					printf("\n ------------------------------\n");
					printf("\n Enter Distance in Meter = ");
					scanf("%d", &n1);
					printf("\n Kilometer = %d KM", n1 / 1000);
					break;
				case 7:
					clrscr();
					printf("\n FAHRENHEIT TO DEGREE CONVERTER");
					printf("\n ------------------------------\n");
					printf("\n Enter Fahrenheit = ");
					scanf("%d", &n1);
					printf("\n Degree = %.2f", (n1 - 32) * 5.0 / 9.0);
					break;
				case 8:
					clrscr();
					printf("\n DEGREE TO FAHRENHEIT CONVERTER");
					printf("\n ------------------------------\n");
					printf("\n Enter Degree = ");
					scanf("%d", &n1);
					printf("\n Fahrenheit = %.2f", (n1 * 9.0 / 5.0) + 32);
					break;
				case 9:
					clrscr();
					printf("\n\n CALCULATION OF SIMPLE INTEREST");
					printf("\n ---------------------------------\n");
					printf("\n Enter Principle Amount = ");
					scanf("%ld", &ln);
					printf("\n Enter Rate of Intrest = ");
					scanf("%fn1", &fn1);
					printf("\n Enter Number of Year = ");
					scanf("%d", &n1);
					printf("\n Simple Intrest = %.2f", (ln * fn1 * n1) / 100);
					break;
				case 10:
					clrscr();
					printf("\n\n PROGRESS OF STUDENT");
					printf("\n -------------------------\n");
					printf("\n Enter the Marks obtained in Math's = ");
					scanf("%d", &n1);
					printf("\n Enter the Marks obtained in Physics = ");
					scanf("%d", &n2);
					printf("\n Enter the Marks obtained in Chemistry = ");
					scanf("%d", &n3);
					n = n1 + n2 + n3;
					printf("\n Total Marks obtained out of 300 are %d\n", n);
					fn1 = n / 3.0;
					if (fn1 >= 40)
					{
						printf("\n Percentage = %.2f\n", fn1);
						if (fn1 >= 70)
							printf("\n You are Passe in Distinction Class");
						else if (fn1 >= 60)
							printf("\n You are Passe in First Class");
						else if (fn1 >= 50)
							printf("\n You are Passe in Second Class");
						else
							printf("\n You are Passe");
					}
					else
						printf("\n\n Your Fail. Try Again!!!");
					break;
				case 11:
					goto main;
				case 12:
					exit(0);
				default:
					printf("\n Invalid Option... Enter Valid Option");
				}
				proceed();
				check("Arthmatic", "Main");
				if (ch == 'n' || ch == 'N')
					goto main;
			} while (ch == 'y' || ch == 'Y');
			break;
		case 2:
		ifelse:
			do
			{
				clrscr();
				ifElseProgramsMenu();
				switch (getChoice()) // 10/12/2022
				{
				case 1:
					do
					{
						clrscr();
						greatestOfTwoNumbersMenu();
						switch (getChoice())
						{
						case 1:
							clrscr();
							greatestTwoIntNumber();
							break;
						case 2:
							clrscr();
							greatestTwoDecNumber();
							break;
						case 4:
							goto main;
						case 3:
							goto ifelse;
						case 5:
							exit(0);
						default:
							printf("\n Invalid Option... Enter Valid Option");
						}
						proceed();
						check("Greatest of 2 Number", "Main");
						if (ch == 'n' || ch == 'N')
							goto main;
					} while (ch == 'Y' || ch == 'y');

					break;
				case 2:
					do
					{
						clrscr();
						greatestOfThreeNumbersMenu();
						switch (getChoice())
						{
						case 1:
							clrscr();
							greatestThreeIntNumber();
							break;
						case 2:
							clrscr();
							printf("\n\n GREATEST OF 3 FLOATS");
							printf("\n -----------------------------\n");
							float greatestThreeDecNumArray[3];
							if (greatestThreeDecNumArray[0] == greatestThreeDecNumArray[1] && greatestThreeDecNumArray[1] == greatestThreeDecNumArray[2])
								printf("\n All Numbers Are Same");
							else if (greatestThreeDecNumArray[0] > greatestThreeDecNumArray[1] && greatestThreeDecNumArray[0] > greatestThreeDecNumArray[2])
								printf("\n %.2f is Greatest Number", greatestThreeDecNumArray[0]);
							else if (greatestThreeDecNumArray[1] > greatestThreeDecNumArray[2])
								printf("\n %.2f is Greatest Number", greatestThreeDecNumArray[1]);
							else
								printf("\n %.2f is Greatest Number", greatestThreeDecNumArray[2]);

							break;
						case 3:
							goto ifelse;
						case 4:
							goto main;
						case 5:
							exit(0);
						default:
							printf("\n Invalid Option... Enter Valid Option");
						}
						check("Greatest of Number", "Main");
						if (ch == 'n' || ch == 'N')
							goto main;
					} while (ch == 'Y' || ch == 'y');
					break;
				case 3:
					clrscr();
					checkPosNegNumber();
					break;
				case 4:
					clrscr();
					checkOddEvenNumber();
					break;
				case 5:
					clrscr();
					printf("\n\n FIND PROFIT OR LOSS");
					printf("\n ------------------------\n");
					printf("\n Enter Purchase Price = ");
					scanf("%d", &n1);
					printf("\n Enter Selling Price = ");
					scanf("%d", &n2);
					if (n1 == n2)
						printf("\n Your Nor Profit OR Loss");
					else if (n1 > n2)
						printf("\n Your Loss");
					else
						printf("\n Your Profit");
					break;
				case 6:
					goto main;
				case 7:
					exit(0);
				default:
					printf("\n Invalid Option... Enter Valid a Option");
				}
				proceed();
				check("If-Else", "Main");
				if (ch == 'n' || ch == 'N')
					goto main;
			} while (ch == 'y' || ch == 'Y');
			break; // end if-else
		case 3:
		loop:
			do
			{
				clrscr();
				loopMenu();
				switch (getChoice())
				{
				case 2:
					do
					{
						clrscr();
						primeNumberMenu();
						switch (getChoice())
						{
						case 1:
							clrscr();
							checkPrimeNumber();

							break;
						case 2:
							clrscr();
							printf("\n\n  PRINT PRIME NUMBER UP TO N NUMBERS");
							printf("\n -----------------------------------------\n");
							printf("\n Enter Last Number = ");
							scanf("%d", &n);
							printf("\n Prime Numbers = ");
							for (n1 = 0; n >= n1; n1++)
							{
								count = 1;
								for (i = 0; n1 / 2 >= i; i++)
								{
									if (n1 % i == 0)
									{
										count++;
										break;
									}
								}
								if (count == 1)
									printf("\t %d", n1);
							}

							break;
						case 3:
							goto loop;
						case 4:
							goto main;
						case 5:
							exit(0);
						default:
							printf("\n Invalid Option... Enter Valid Option");
						}
						check("Prime Number", "Main");
						if (ch == 'n' || ch == 'N')
							goto main;
					} while (ch == 'Y' || ch == 'y');
					break;
				case 5:
					do
					{
						clrscr();
						fibonacciSeriesProgramsMenu();
						switch (getChoice())
						{
						case 1:
							clrscr();
							printf("\n\n FIBONACCI SERIES UP TO N NUMBER");
							printf("\n ------------------------------------\n");
							printf("\n  Enter Last Number = ");
							scanf("%d", &n);
							printf("\n\n Fibonacci Series = ");
							n1 = 0;
							n2 = 1;
							while (n >= n1)
							{
								printf("\t %d", n1);
								n3 = n2 + n1;
								n1 = n2;
								n2 = n3;
							}
							break;
						case 2:
							clrscr();
							printf("\n\n FIBONACCI SERIES UP TO N TERMS");
							printf("\n ------------------------------------\n");
							printf("\n  How Many Terms You Want Print = ");
							scanf("%d", &n);
							printf("\n\n Fibonacci Series = ");
							n1 = 0;
							n2 = 1;
							for (i = 0; n > i; i++)
							{
								printf("\t %d", n1);
								n3 = n2 + n1;
								n1 = n2;
								n2 = n3;
							}
							break;
						case 3:
							clrscr();
							printf("\n\n REVERSE FIBONACCI SERIE");
							printf("\n -----------------------------\n");
							printf("\n  Enter Starting Number = ");
							scanf("%d", &n);
							printf("\n\n Fibonacci Series = ");
							n1 = 0;
							n2 = 1;
							while (n >= n1)
							{

								n3 = n2 + n1;
								n1 = n2;
								n2 = n3;
							}
							while (n1 >= 0)
							{
								printf("\t %d", n1);
								n3 = n2 - n1;
								n2 = n1;
								n1 = n3;
							}
							break;
						case 4:
							goto loop;
						case 5:
							goto main;
						case 6:
							exit(0);
						default:
							printf("\n Invalid Option... Enter Valid Option");
						}
						check("Fibonacci Series", "Main");
						if (ch == 'n' || ch == 'N')
							goto main;
					} while (ch == 'Y' || ch == 'y');
					break;
				case 3:
					clrscr();
					checkPalindronNumber();
					break;
				case 4:
					clrscr();
					checkArmstrongNumber();
					break;
				case 1:
					clrscr();
					printTable();

					break;
				case 7:
					goto main;
				case 6:
					clrscr();
					printf("\n\n CHECK THE TYPE OF TRIANGLE");
					printf("\n ------------------------------");
					printf("\n Enter First Side = ");
					scanf("%d", &n1);
					printf("\n Enter Second Side = ");
					scanf("%d", &n2);
					printf("\n Enter Third Side = ");
					scanf("%d", &n3);
					if (n1 == n2 && n2 == n3)
						printf("\n Equilateral Triangle");
					else if (n1 == n2 || n1 == n3 || n2 == n3)
						printf("\n Isosceles Triangle");
					else if (n1 * n1 == n2 * n2 + n3 * n3 || n2 * n2 == n1 * n1 + n3 * n3 || n3 * n3 == n1 * n1 + n2 * n2)
						printf("\n Right Angle Triangle");
					else
						printf("\n Scalene Triangle");

					break;
				case 8:
					exit(0);
				default:
					printf("\n Invalid Option... Enter Valid a Option");
				}
				check("Loop", "Main");
				if (ch == 'n' || ch == 'N')
					goto main;
			} while (ch == 'y' || ch == 'Y');
			break;
		case 4:
			exit(0);
		default:
			printf("\n Invalid Option... Enter Valid a Option");
		}
		check("Main", "Exit");
	} while (ch == 'Y' || ch == 'y');
	printf("\n Press Any Key to Exit..");
	getch();
	return 0;
}

/**
 * Function: check
 * --------------------------
 * Waits for user input after an operation to determine the next step.
 * Accepts 'Y' or 'N' (case-insensitive) as valid options.
 *
 * - If a valid input ('Y'/'N') is received within 3 attempts, the function returns.
 * - If invalid input is entered 3 times, the program times out and exits.
 *
 * Behavior:
 *   - Prompts user to enter a valid option (Y/N).
 *   - Displays timeout message and exits if no valid input is received.
 */
void check(char yMenu[], char nMenu[])
{
	if (strcmp("Exit", nMenu) == 0)
		printf("\n\nPress Y to go to %s Menu OR\nPress N to go to %s\nEnter = ", yMenu, nMenu);
	else
		printf("\n\nPress Y to go to %s Menu OR\nPress N to go to %s Menu\nEnter = ", yMenu, nMenu);
	for (i = 0; i <= 2; i++)
	{
		scanf(" %c", &ch);
		if (ch == 'n' || ch == 'N' || ch == 'y' || ch == 'Y')
			return;
		else if (i == 2)
		{
			printf("\nTIMEOUT...");
			printf("\nEnter Any Key to Exit...");
			getch();
			exit(0);
		}
		else
			printf("\nPlease Enter (Y/N) Valid Option = ");
	}
}

void getIntegerNumbers(int intArray[], int inputCount)
{
	for (int i = 0; i < inputCount; i++)
	{
		printf("%d. Enter Number = ", i + 1);
		scanf("%d", &intArray[i]);
	}
}

void getDecimalNumbers(float floatArray[], int inputCount)
{
	for (int i = 0; i < inputCount; i++)
	{
		printf("%d. Enter Number = ", i + 1);
		scanf("%f", &floatArray[i]);
	}
}

int getIntNumber()
{
	int num;
	printf("\nEnter Any Number = ");
	scanf("%d", &num);
	return num;
}

// Program Menu Function Definitions Start
void mainMenu()
{
	printf("\n------------------------");
	printf("\n\tMAIN MENU");
	printf("\n------------------------\n");
	printf("\n1. Arthmatic Programs");
	printf("\n2. If-Else Programs");
	printf("\n3. Loops Programs");
	printf("\n4. Exit");
}

void arithmaticProgramsMenu()
{
	printf("\n-----------------------------------");
	printf("\n\tARITHMATIC PROGRAMS");
	printf("\n------------------------------------\n");
	printf("\n1. Addition of 2 Numbers");
	printf("\n2. Subtraction of 2 Numbers");
	printf("\n3. Multiplication of 2 Numbers");
	printf("\n4. Division of 2 Numbers");
	printf("\n5. KM to M Converter");
	printf("\n6. M to KM Converter");
	printf("\n7. Fahrenhiet to Degree Converter");
	printf("\n8. Degree to Fahrenhiet Converter");
	printf("\n9. For Claculation of Simple Interest");
	printf("\n10. Student Progress");
	printf("\n11. Back to Main Menu");
	printf("\n12. Exit");
}

void additionOfTwoNumbersMenu()
{
	printf("\n--------------------------------------");
	printf("\n\tADDITION OF 2 NUMBERS");
	printf("\n---------------------------------------\n");
	printf("\n1. Addition of 2 Integers");
	printf("\n2. Addition of 2 Floats");
	printf("\n3. Back to Arithmatic Menu");
	printf("\n4. Back to Main Menu");
	printf("\n5. Exit");
}

void subtractionOfTwoNumbersMenu()
{
	printf("\n-----------------------------------------");
	printf("\n\tSUBTRACTION OF 2 NUMBERS");
	printf("\n-----------------------------------------\n");
	printf("\n1. Subtraction of 2 Integers");
	printf("\n2. Subtraction of 2 Floats");
	printf("\n3. Back to Arithmatic Menu");
	printf("\n4. Back to Main Menu");
	printf("\n5. Exit");
}

void multiplicationOfTwoNumbersMenu()
{
	printf("\n----------------------------------------------");
	printf("\n\tMULTIPLICATION OF 2 NUMBERS");
	printf("\n----------------------------------------------\n");
	printf("\n1. Multiplication of 2 Integers");
	printf("\n2. Multiplication of 2 Floats");
	printf("\n3. Back to Arithmatic Menu");
	printf("\n4. Back to Main Menu");
	printf("\n5. Exit");
}

void divisionOfTwoNumbersMenu()
{
	printf("\n---------------------------------------");
	printf("\n\tDIVISION OF 2 NUMBERS");
	printf("\n---------------------------------------\n");
	printf("\n1. Division of 2 Integers");
	printf("\n2. Division of 2 Floats");
	printf("\n3. Back to Arithmatic Menu");
	printf("\n4. Back to Main Menu");
	printf("\n5. Exit");
}

void ifElseProgramsMenu()
{
	printf("\n----------------------------------");
	printf("\n\tIF-ELSE PROGRAMS");
	printf("\n----------------------------------\n");
	printf("\n1. Greatest of 2 Numbers");
	printf("\n2. Greatest of 3 Numbers");
	printf("\n3. +ve or -ve Numbers");
	printf("\n4. Odd or Even");
	printf("\n5. Profit or Loss");
	printf("\n6. Back to Main Menu");
	printf("\n7. Exit");
}

void greatestOfTwoNumbersMenu()
{
	printf("\n-----------------------------------------");
	printf("\n\tGREATEST OF 2 NUMBERS");
	printf("\n------------------------------------------\n");
	printf("\n1. Greatest of 2 Integers");
	printf("\n2. Greatest of 2 Floats");
	printf("\n3. Back to If-Else Menu");
	printf("\n4. Back to Main Menu");
	printf("\n5. Exit");
}

void greatestOfThreeNumbersMenu()
{
	printf("\n-------------------------------------");
	printf("\n\t GREATEST OF 3 NUMBERS");
	printf("\n-------------------------------------\n");
	printf("\n1. Greatest of 3 Integers");
	printf("\n2. Greatest of 3 Floats");
	printf("\n3. Back to If-Else Menu");
	printf("\n4. Back to Main Menu");
	printf("\n5. Exit");
}

void loopMenu()
{
	printf("\n--------------------------");
	printf("\n\tLOOP MENU");
	printf("\n--------------------------\n");
	printf("\n1. Table of Any Number");
	printf("\n2. For Prime Number");
	printf("\n3. Check for Palindrome Number");
	printf("\n4. Check for Armstrong Number");
	printf("\n5. Fibonacci Series");
	printf("\n6. Check the Type of Triangle");
	printf("\n7. Back to Main Menu");
	printf("\n8. Exit");
}

void primeNumberMenu()
{
	printf("\n----------------------------------");
	printf("\n\tPRIME NUMBER MENU");
	printf("\n----------------------------------\n");
	printf("\n1. Check the Number is Prime  or Not");
	printf("\n2. Print Prime Number Up to N Numbers");
	printf("\n3. Back to Loop Menu");
	printf("\n4. Back to Main Menu");
	printf("\n5. Exit");
}

void fibonacciSeriesProgramsMenu()
{
	printf("\n------------------------------------------");
	printf("\n\tFIBONACCI SERIES PROGRAMS");
	printf("\n------------------------------------------\n");
	printf("\n1. Fibonacci Series Up to N Number");
	printf("\n2. Fibonacci Series Up to N Terms");
	printf("\n3. Reverse Fibonacci Series");
	printf("\n4. Back to Loop Menu");
	printf("\n5. Back to Main Menu");
	printf("\n6. Exit");
}

// Program Menu Function Definitions End

int getChoice()
{
	int choice;
	printf("\n\nEnter Your Choice = ");
	scanf("%d", &choice);
	return choice;
}

void checkPrimeNumber()
{
	printf("\nCHECK THE NUMBER IS PRIME OR NOT");
	printf("\n--------------------------------------\n");
	int numberToCheckPrime = getIntNumber();
	int count = 1;
	for (i = 2; numberToCheckPrime / 2 > i; i++)
	{
		if (numberToCheckPrime % i == 0)
		{
			count++;
			break;
		}
	}
	if (count == 1)
		printf("\n%d is Prime Number", numberToCheckPrime);
	else
		printf("\n%d is Not Prime Number", numberToCheckPrime);
}

void checkPosNegNumber()
{
	printf("\nFIND POSITIVE OR NEGATIVE NUMBER");
	printf("\n-------------------------------------\n");
	int numberToCheckPosNeg = getIntNumber();
	if (numberToCheckPosNeg == 0)
		printf("\n0 is Nor Positive OR Negative");
	else if (numberToCheckPosNeg > 0)
		printf("\n%d is Positive Number", numberToCheckPosNeg);
	else
		printf("\n%d is Negative Number", numberToCheckPosNeg);
}

void checkOddEvenNumber()
{
	printf("\nFIND ODD OR EVEN NUMBER");
	printf("\n----------------------------\n");
	int numberToCheckOddEven = getIntNumber();
	if (numberToCheckOddEven % 2 == 0)
		printf("\n%d is Even Number", numberToCheckOddEven);
	else
		printf("\n%d is Odd Number", numberToCheckOddEven);
}

void checkPalindronNumber()
{
	printf("\nCHECK FOR PALINDRON NUMBER");
	printf("\n--------------------------------\n");
	int numberToCheckPalindron = getIntNumber();
	int rev = 0;
	int back = numberToCheckPalindron;
	while (numberToCheckPalindron != 0)
	{
		rev = numberToCheckPalindron % 10 + rev * 10;
		numberToCheckPalindron = numberToCheckPalindron / 10;
	}
	if (back == rev)
		printf("\n%d is Palindron Number", rev);
	else
		printf("\n%d is Not Palindron Number", back);
}

void checkArmstrongNumber()
{
	printf("\nCHECK FOR ARMSTRONG NUMBER");
	printf("\n-------------------------------\n");
	int numberToCheckArmstrong = getIntNumber();
	int sum = 0;
	int back = numberToCheckArmstrong;
	int count = 0;
	while (numberToCheckArmstrong != 0)
	{
		numberToCheckArmstrong = numberToCheckArmstrong / 10;
		count = count + 1;
	}
	numberToCheckArmstrong = back;
	while (numberToCheckArmstrong != 0)
	{
		int rem = numberToCheckArmstrong % 10;
		numberToCheckArmstrong = numberToCheckArmstrong / 10;
		n1 = rem;

		while (count != 0)
		{

			n1 = n1 * rem;
			count = count - 1;
		}
		sum = sum + n1;
	}
	if (back == sum)
		printf("\n%d is Armstrong Number And Sum = %d", back, sum);
	else
		printf("\n%d is Not Armstrong Number", back);
}

void printTable()
{
	printf("\nPRINT TABLE OF ANY NUMBER");
	printf("\n------------------------------\n");
	int tableNumber = getIntNumber();
	for (int i = 1; 10 >= i; i++)
		printf("\n%d X %.2d = %d", tableNumber, i, tableNumber * i);
}

void addTwoIntNumber()
{
	printf("\n\tADDITION OF 2 INTEGERS");
	printf("\n-------------------------------------\n");
	int addTwoIntNumArray[2];
	getIntegerNumbers(addTwoIntNumArray, 2);
	printf("\nAddition of %d and %d is %d", addTwoIntNumArray[0], addTwoIntNumArray[1], addTwoIntNumArray[0] + addTwoIntNumArray[1]);
}

void subTwoIntNumber()
{
	printf("\n\tSUBTRACTION OF 2 INTEGERS");
	printf("\n---------------------------------------\n");
	int subTwoIntNumArray[2];
	getIntegerNumbers(subTwoIntNumArray, 2);
	printf("\nSubtraction of %d and %d is %d", subTwoIntNumArray[0], subTwoIntNumArray[1], subTwoIntNumArray[0] - subTwoIntNumArray[1]);
}

void mulTwoIntNumber()
{
	printf("\n\tMULTIPLICATION OF 2 INTEGERS");
	printf("\n----------------------------------------\n");
	int mulTwoIntNumArray[2];
	getIntegerNumbers(mulTwoIntNumArray, 2);
	printf("\nMultiplication of %d and %d is %d", mulTwoIntNumArray[0], mulTwoIntNumArray[1], mulTwoIntNumArray[0] * mulTwoIntNumArray[1]);
}

void divTwoIntNumber()
{
	printf("\n\tDIVISION OF 2 INTEGERS");
	printf("\n----------------------------------------\n");
	int divTwoIntNumArray[2];
	getIntegerNumbers(divTwoIntNumArray, 2);
	printf("\nDivision of %d and %d is %d", divTwoIntNumArray[0], divTwoIntNumArray[1], divTwoIntNumArray[0] / divTwoIntNumArray[1]);
}

void greatestTwoIntNumber()
{
	printf("\nGREATEST OF 2 INTEGERS");
	printf("\n-----------------------------\n");
	int greatestTwoIntNumArray[2];
	getIntegerNumbers(greatestTwoIntNumArray, 2);
	if (greatestTwoIntNumArray[0] == greatestTwoIntNumArray[1])
		printf("\nBoth Numbers Are Same");
	else if (greatestTwoIntNumArray[0] > greatestTwoIntNumArray[1])
		printf("\n%d is Greatest Number", greatestTwoIntNumArray[0]);
	else
		printf("\n%d is Greatest Number", greatestTwoIntNumArray[1]);
}

void greatestThreeIntNumber()
{
	printf("\nGREATEST OF 3 INTEGERS");
	printf("\n-----------------------------\n");
	int greatestThreeIntNumArray[3];
	getIntegerNumbers(greatestThreeIntNumArray, 3);
	if (greatestThreeIntNumArray[0] == greatestThreeIntNumArray[1] && greatestThreeIntNumArray[1] == greatestThreeIntNumArray[2])
		printf("\nAll Numbers Are Same");
	else if (greatestThreeIntNumArray[0] > greatestThreeIntNumArray[1] && greatestThreeIntNumArray[0] > greatestThreeIntNumArray[2])
		printf("\n%d is Greatest Number", greatestThreeIntNumArray[0]);
	else if (greatestThreeIntNumArray[1] > greatestThreeIntNumArray[2])
		printf("\n%d is Greatest Number", greatestThreeIntNumArray[1]);
	else
		printf("\n%d is Greatest Number", greatestThreeIntNumArray[2]);
}

void addTwoDecNumber()
{
	printf("\n\tADDITION OF 2 FLOATS");
	printf("\n-----------------------------------\n");
	float addTwoDecNumArray[2];
	getDecimalNumbers(addTwoDecNumArray, 2);
	printf("\nAddition of %.2f and %.2f is %.2f", addTwoDecNumArray[0], addTwoDecNumArray[1], addTwoDecNumArray[0] + addTwoDecNumArray[1]);
}

void subTwoDecNumber()
{
	printf("\n\tSUBTRACTION OF 2 FLOATS");
	printf("\n---------------------------------------\n");
	float subTwoDecNumArray[2];
	getDecimalNumbers(subTwoDecNumArray, 2);
	printf("\nSubtraction of %.2f and %.2f is %.2f", subTwoDecNumArray[0], subTwoDecNumArray[1], subTwoDecNumArray[0] - subTwoDecNumArray[1]);
}

void divTwoDecNumber()
{
	printf("\n\tDIVISION OF 2 FLOATS");
	printf("\n----------------------------------------\n");
	float divTwoDecNumArray[2];
	getDecimalNumbers(divTwoDecNumArray, 2);
	printf("\nDivision of %.2f and %.2f is %.2f", divTwoDecNumArray[0], divTwoDecNumArray[1], divTwoDecNumArray[0] * divTwoDecNumArray[1]);
}

void greatestTwoDecNumber()
{
	printf("\nGREATEST OF 2 FLOATS");
	printf("\n-----------------------------\n");
	float greatestTwoDecNumArray[2];
	getDecimalNumbers(greatestTwoDecNumArray, 2);
	if (greatestTwoDecNumArray[0] == greatestTwoDecNumArray[1])
		printf("\nBoth Numbers Are Same");
	else if (greatestTwoDecNumArray[0] > greatestTwoDecNumArray[1])
		printf("\n%.2f is Greatest Number", greatestTwoDecNumArray[0]);
	else
		printf("\n%.2f is Greatest Number", greatestTwoDecNumArray[1]);
}

void proceed()
{
	printf("\n\nEnter Any Key to Proceed...");
	getch();
}