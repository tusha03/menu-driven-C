void check();
void get2i();
void get2f();
void get3i();
void get3f();
void geti();
char ch;
int i,n,n1,n2,n3;
float fn1,fn2,fn3;

void main()
{
	int count,rev,rem,back,sum;
	long ln;
	clrscr();
	main:
	do //main menu
	{
		clrscr();
		printf("\n------------------------");
		printf("\n\t MAIN MENU");
		printf("\n------------------------");
		printf("\n\n 1. Arthmatic Programs");
		printf("\n 2. If-Else Programs");
		printf("\n 3. Loops Programs");
		printf("\n 4. Exit");
		printf("\n\n Enter Your Choice = ");
		scanf("%d",&n);
		switch(n)
		{
			case 1 : arth:
					 do  //arthmatic main menu
					 {
						clrscr();
						printf("\n-----------------------------------");
						printf("\n\t ARITHMATIC PROGRAMS");
						printf("\n------------------------------------");
						printf("\n\n 1. Addition of 2 Numbers");
						printf("\n 2. Subtraction of 2 Numbers");
						printf("\n 3. Multiplication of 2 Numbers");
						printf("\n 4. Division of 2 Numbers");
						printf("\n 5. KM to M Converter");
						printf("\n 6. M to KM Converter");
						printf("\n 7. Fahrenhiet to Degree Converter");
						printf("\n 8. Degree to Fahrenhiet Converter");
						printf("\n 9. For Claculation of Simple Interest");
						printf("\n10. Student Progress");
						printf("\n11. Back to Main Menu");
						printf("\n12. Exit");
						printf("\n\n Enter Your Choice = ");
						scanf("%d",&n);
						switch(n)
						{
							case 1 : do        //addition main menu
									 {
										clrscr();
										printf("\n--------------------------------------");
										printf("\n\t ADDITION OF 2 NUMBERS");
										printf("\n---------------------------------------");
										printf("\n\n 1. Addition of 2 Integers");
										printf("\n 2. Addition of 2 Floats");
										printf("\n 3. Back to Arithmatic Menu");
										printf("\n 4. Back to Main Menu");
										printf("\n 5. Exit");
										printf("\n\n Enter Your Choice = ");
										scanf("%d",&n);
										switch(n)
										{
											case 1 : clrscr();
													 printf("\n\n\t ADDITION OF 2 INTEGERS");
													 printf("\n-------------------------------------\n");
													 get2i();
													 printf("\n\n Addition of %d and %d is %d",n1,n2,n1+n2);

												 break;
											case 2 : clrscr();
													 printf("\n\n\t ADDITION OF 2 FLOATS");
													 printf("\n-----------------------------------\n");
													 get2f();
													 printf("\n Addition of %.2f and %.2f is %.2f",fn1,fn2,fn1+fn2);

												 break;
											case 3 : goto arth;
											case 4 : goto main;
											case 5 : exit(0);
											default : printf("\n Invalid Option... Enter Valid Option");
										}
										printf("\n\n Enter Any Key to Proceed...");
										getch();
										printf("\n\n Press Y to go to Addition Menu OR\n Press N to go to MAIN NENU\n Enter = ");
										check();
										if( ch == 'n' || ch == 'N' )
											goto main;
									 }while(ch == 'Y' || ch == 'y');

									 break;
							case 2 : do                                                  //subtraction main menu
									 {
										clrscr();
										printf("\n-----------------------------------------");
										printf("\n\t SUBTRACTION OF 2 NUMBERS");
										printf("\n-----------------------------------------");
										printf("\n\n 1. Subtraction of 2 Integers");
										printf("\n 2. Subtraction of 2 Floats");
										printf("\n 3. Back to Arithmatic Menu");
										printf("\n 4. Back to Main Menu");
										printf("\n 5. Exit");
										printf("\n\n Enter Your Choice = ");
										scanf("%d",&n);
										switch(n)
										{
											case 1 : clrscr();
													 printf("\n\t SUBTRACTION OF 2 INTEGERS");
													 printf("\n---------------------------------------\n");
													 get2i();
													 printf("\n Subtraction of %d and %d is %d",n1,n2,n1-n2);

												 break;
											case 2 : clrscr();
													 printf("\n\t SUBTRACTION OF 2 FLOATS");
													 printf("\n---------------------------------------\n");
													 get2f();
													 printf("\n Subtraction of %.2f and %.2f is %.2f",fn1,fn2,fn1-fn2);

													 break;
											case 3 : goto arth;
											case 4 : goto main;
											case 5 : exit(0);
											default : printf("\n Invalid Option... Enter Valid Option");
										}
										printf("\n\n Enter Any Key to Proceed...");
										getch();
										printf("\n\n Press Y to go to Subtraction Menu OR\n Press N to go to MAIN NENU\n Enter = ");
										check();
										if( ch == 'n' || ch == 'N' )
											goto main;
									 }while(ch == 'Y' || ch == 'y');

								  break;
							case 3 : do                        //multiplication main menu
									 {
										clrscr();
										printf("\n----------------------------------------------");
										printf("\n\t MULTIPLICATION OF 2 NUMBERS");
										printf("\n----------------------------------------------");
										printf("\n\n 1. Multiplication of 2 Integers");
										printf("\n 2. Multiplication of 2 Floats");
										printf("\n 3. Back to Arithmatic Menu");
										printf("\n 4. Back to Main Menu");
										printf("\n 5. Exit");
										printf("\n\n Enter Your Choice = ");
										scanf("%d",&n);
										switch(n)
										{
											case 1 : clrscr();
													 printf("\n\t MULTIPLICATION OF 2 INTEGERS");
													 printf("\n----------------------------------------\n");
													 get2i();
													 printf("\n Multiplication of %d and %d is %d",n1,n2,n1*n2);

													break;
											case 2 : clrscr();
													 printf("\n\t MULTIPLICATION OF 2 FLOATS");
													 printf("\n----------------------------------------\n");
													 get2i();
													 printf("\n Multiplication of %.2f and %.2f is %.2f",fn1,fn2,fn1*fn2);
													 break;
											case 3 : goto arth;
											case 4 : goto main;
											case 5 : exit(0);
											default : printf("\n Invalid Option... Enter Valid Option");
										}
										printf("\n\n Enter Any Key to Proceed...");
										getch();
										printf("\n\n Press Y to go to Multiplication Menu OR\n Press N to go to MAIN NENU\n Enter = ");
										check();
										if( ch == 'n' || ch == 'N' )
											goto main;
									 }while(ch == 'Y' || ch == 'y');

									break;
							case 4 : do    //division main menu
									 {
										clrscr();
										printf("\n---------------------------------------");
										printf("\n\t DIVISION OF 2 NUMBERS");
										printf("\n---------------------------------------");
										printf("\n\n 1. Division of 2 Integers");
										printf("\n 2. Division of 2 Floats");
										printf("\n 3. Back to Arithmatic Menu");
										printf("\n 4. Back to Main Menu");
										printf("\n 5. Exit");
										printf("\n\n Enter Your Choice = ");
										scanf("%d",&n);
										switch(n)
										{
											case 1 : clrscr();
													 printf("\n\t DIVISION OF 2 INTEGERS");
													 printf("\n----------------------------------------\n");
													 get2i();
													 printf("\n Division of %d and %d is %d",n1,n2,n1*n2);
												 break;
											case 2 : clrscr();
													 printf("\n\t DIVISION OF 2 FLOATS");
													 printf("\n----------------------------------------\n");
													 get2i();
													 printf("\n Division of %.2f and %.2f is %.2f",fn1,fn2,fn1*fn2);
													 break;
											case 3 : goto arth;
											case 4 : goto main;
											case 5 : exit(0);
											default : printf("\n Invalid Option... Enter Valid Option");
										}
										printf("\n\n Enter Any Key to Proceed...");
										getch();
										printf("\n\n Press Y to go to Division Menu OR\n Press N to go to MAIN NENU\n Enter = ");
										check();
										if( ch == 'n' || ch == 'N' )
											goto main;
									 }while(ch == 'Y' || ch == 'y');

									 break;
							case 5 : clrscr();
									 printf("\n KM TO M DISTANCE CONVERTER");
									 printf("\n ------------------------------\n");
									 printf("\n Enter Distance in Kilometer = ");
									 scanf("%f",&fn1);
									 printf("\n Meter = %.2f M",fn1*1000);
									 break;
							case 6 : clrscr();
									 printf("\n M TO KM DISTANCE CONVERTER");
									 printf("\n ------------------------------\n");
									 printf("\n Enter Distance in Meter = ");
									 scanf("%d",&n1);
									 printf("\n Kilometer = %d KM",n1/1000);
									 break;
							case 7 : clrscr();
									 printf("\n FAHRENHEIT TO DEGREE CONVERTER");
									 printf("\n ------------------------------\n");
									 printf("\n Enter Fahrenheit = ");
									 scanf("%d",&n1);
									 printf("\n Degree = %.2f",(n1-32)*5/9);
									 break;
							case 8 : clrscr();
									 printf("\n DEGREE TO FAHRENHEIT CONVERTER");
									 printf("\n ------------------------------\n");
									 printf("\n Enter Degree = ");
									 scanf("%d",&n1);
									 printf("\n Fahrenheit = %.2f",(n1*9/5)+32);
									 break;
							case 9 : clrscr();
									 printf("\n\n CALCULATION OF SIMPLE INTEREST");
									 printf("\n ---------------------------------\n");
									 printf("\n Enter Principle Amount = ");
									 scanf("%ld",&ln);
									 printf("\n Enter Rate of Intrest = ");
									 scanf("%fn1",&fn1);
									 printf("\n Enter Number of Year = ");
									 scanf("%d",&n1);
									 printf("\n Simple Intrest = %.2f",(ln*fn1*n1)/100);
									break;
							case 10 : clrscr();
									  printf("\n\n PROGRESS OF STUDENT");
									  printf("\n -------------------------\n");
									  printf("\n Enter the Marks obtained in Math's = ");
									  scanf("%d",&n1);
									  printf("\n Enter the Marks obtained in Physics = ");
									  scanf("%d",&n2);
									  printf("\n Enter the Marks obtained in Chemistry = ");
									  scanf("%d",&n3);
									  n = n1+n2+n3;
									  printf("\n Total Marks obtained out of 300 are %d\n",n);
									  fn1 =  n/3.0;
									  if(fn1 >= 40)
									  {
										printf("\n Percentage = %.2f\n",fn1);
										if(fn1 >= 70)
											printf("\n You are Passe in Distinction Class");
										else if(fn1 >= 60)
											printf("\n You are Passe in First Class");
										else if(fn1 >= 50)
											printf("\n You are Passe in Second Class");
										else
											printf("\n You are Passe");
									  }
									  else
										printf("\n\n Your Fail. Try Again!!!");
									 break;
							case 11 : goto main;
							case 12 : exit(0);
							default : printf("\n Invalid Option... Enter Valid Option");
						}
						printf("\n\n Enter Any Key to Proceed...");
						getch();
						printf("\n\n Press Y to go to Arthmatic Menu OR\n Press N to go to MAIN MENU\n Enter = ");
						check();
						if( ch == 'n' || ch == 'N' )
							goto main;
					 }while(ch == 'y' || ch == 'Y');
					 break;
			case 2 : ifelse:
					 do
					 {
						 clrscr();
						 printf("\n----------------------------------");
						 printf("\n\t IF-ELSE PROGRAMS");
						 printf("\n----------------------------------");
						 printf("\n\n 1. Greatest of 2 Numbers");
						 printf("\n 2. Greatest of 3 Numbers");
						 printf("\n 3. +ve or -ve Numbers");
						 printf("\n 4. Odd or Even");
						 printf("\n 5. Profit or Loss");
						 printf("\n 6. Back to Main Menu");
						 printf("\n 7. Exit");
						 printf("\n\n Enter Your Choice : ");
						 scanf("%d",&n);
						 switch(n)               //10/12/2022
						 {
							 case 1 : do
									 {
										clrscr();
										printf("\n-----------------------------------------");
										printf("\n\t GREATEST OF 2 NUMBERS");
										printf("\n------------------------------------------");
										printf("\n\n 1. Greatest of 2 Integers");
										printf("\n 2. Greatest of 2 Floats");
										printf("\n 3. Back to If-Else Menu");
										printf("\n 4. Back to Main Menu");
										printf("\n 5. Exit");
										printf("\n\n Enter Your Choice : ");
										scanf("%d",&n);
										switch(n)
										{
											case 1 : clrscr();
													 printf("\n\n GREATEST OF 2 INTEGERS");
													 printf("\n -----------------------------\n");
													 get2i();
													 if(n1 == n2)
														printf("\n Both Numbers Are Same");
													 else if(n1 > n2)
														printf("\n %d is Greatest Number",n1);
													 else
														printf("\n %d is Greatest Number",n2);
													 break;
											case 2 : clrscr();
													 printf("\n\n GREATEST OF 2 FLOATS");
													 printf("\n -----------------------------\n");
													 get2f();
													 if(fn1 == fn2)
														printf("\n Both Numbers Are Same");
													 else if(fn1 > fn2)
														printf("\n %.2f is Greatest Number",fn1);
													 else
														printf("\n %.2f is Greatest Number",fn2);
													 break;
											case 4 : goto main;
											case 3 : goto ifelse;
											case 5 : exit(0);
											default : printf("\n Invalid Option... Enter Valid Option");
										}
										printf("\n\n Enter Any Key to Proceed...");
										getch();
										printf("\n\n Press 'Y' to go Greatest of 2 Number Menu \n Press 'N' to go Main Menu = ");
										check();
										if( ch == 'n' || ch == 'N' )
											goto main;
									 }while(ch == 'Y' || ch == 'y');

									 break;
							 case 2 : do
									  {
										clrscr();
										printf("\n-------------------------------------");
										printf("\n\t GREATEST OF 3 NUMBERS");
										printf("\n-------------------------------------");
										printf("\n\n 1. Greatest of 3 Integers");
										printf("\n 2. Greatest of 3 Floats");
										printf("\n 3. Back to If-Else Menu");
										printf("\n 4. Back to Main Menu");
										printf("\n 5. Exit");
										printf("\n\n Enter Your Choice : ");
										scanf("%d",&n);
										switch(n)
										{
											case 1 : clrscr();
													 printf("\n\n GREATEST OF 3 INTEGERS");
													 printf("\n -----------------------------\n");
													 get3i();
													 if(n1 == n2 && n2 == n3)
														printf("\n All Numbers Are Same");
													 else if(n1 > n2 && n1 > n3)
														printf("\n %d is Greatest Number",n1);
													 else if(n2  > n3)
														printf("\n %d is Greatest Number",n2);
													 else
														printf("\n %d is Greatest Number",n3);

													 break;
											case 2 : clrscr();
													 printf("\n\n GREATEST OF 3 FLOATS");
													 printf("\n -----------------------------\n");
													 get3f();
													 if(fn1 == fn2 && fn2 == fn3)
														printf("\n All Numbers Are Same");
													 else if(fn1 > fn2 && fn1 > fn3)
														printf("\n %.2f is Greatest Number",fn1);
													 else if(fn2  > fn3)
														printf("\n %.2f is Greatest Number",fn2);
													 else
														printf("\n %.2f is Greatest Number",fn3);

													 break;
											case 3 : goto ifelse;
											case 4 : goto main;
											case 5 : exit(0);
											default : printf("\n Invalid Option... Enter Valid Option");
										}
										printf("\n\n Press 'Y' to go Greatest of Number Menu \n Press 'N' to go Main Menu = ");
									check();
									if( ch == 'n' || ch == 'N' )
										goto main;
									 }while(ch == 'Y' || ch == 'y');
									 break;
							 case 3 : clrscr();
									  printf("\n\n FIND POSITIVE OR NEGATIVE NUMBER");
									  printf("\n -------------------------------------\n");
									  geti();
									  if( n == 0 )
										printf("\n 0 is Nor Positive OR Negative");
									  else if(n > 0)
										printf("\n %d is Positive Number",n);
									  else
										printf("\n %d is Negative Number",n);
									 break;
							 case 4 : clrscr();
									  printf("\n\n FIND ODD OR EVEN NUMBER");
									  printf("\n ----------------------------\n");
									  geti();
									  if(n%2 == 0)
										printf("\n %d is Even Number",n);
									  else
										printf("\n %d is Odd Number",n);
									 break;
							 case 5 : clrscr();
									  printf("\n\n FIND PROFIT OR LOSS");
									  printf("\n ------------------------\n");
									  printf("\n Enter Purchase Price = ");
									  scanf("%d",&n1);
									  printf("\n Enter Selling Price = ");
									  scanf("%d",&n2);
									  if(n1 == n2)
										printf("\n Your Nor Profit OR Loss");
									  else if(n1 > n2)
										printf("\n Your Loss");
									  else
										printf("\n Your Profit");
									 break;
							 case 6 : goto main;
							 case 7 : exit(0);
							 default : printf("\n Invalid Option... Enter Valid a Option");
						 }
						 printf("\n\n Enter Any Key to Proceed...");
						 getch();
						printf("\n\n Press Y to go to If-Else Menu OR\n Press N to go to MAIN MENU\n Enter = ");
						check();
						if( ch == 'n' || ch == 'N' )
							goto main;
					 }while(ch == 'y' || ch == 'Y');
					break;    //end if-else
			case 3 : loop:
					 do
					 {
						 clrscr();
						 printf("\n--------------------------");
						 printf("\n\t LOOP MENU");
						 printf("\n--------------------------");
						 printf("\n\n 1. Table of Any Number");
						 printf("\n 2. For Prime Number");
						 printf("\n 3. Check for Palindrome Number");
						 printf("\n 4. Check for Armstrong Number");
						 printf("\n 5. Fibonacci Series");
						 printf("\n 6. Check the Type of Triangle");
						 printf("\n 7. Back to Main Menu");
						 printf("\n 8. Exit");
						 printf("\n\n Enter Your Choice : ");
						 scanf("%d",&n);
						 switch(n)
						 {
							 case 2 : do
									  {
										clrscr();
										printf("\n----------------------------------");
										printf("\n\t PRIME NUMBER MENU");
										printf("\n----------------------------------");
										printf("\n\n 1. Check the Number is Prime  or Not");
										printf("\n 2. Print Prime Number Up to N Numbers");
										printf("\n 3. Back to Loop Menu");
										printf("\n 4. Back to Main Menu");
										printf("\n 5. Exit");
										printf("\n\n Enter Your Choice : ");
										scanf("%d",&n);
										switch(n)
										{
											case 1 : clrscr();
													 printf("\n\n CHECK THE NUMBER IS PRIME OR NOT");
													 printf("\n --------------------------------------\n");
													 geti();
													 count = 1;
													 for(i=2;n/2 > i;i++)
													 {
														if(n%i == 0)
														{
															count++;
															break;
														}
													 }
													 if(count == 1)
														printf("\n %d is Prime Number",n);
													 else
														printf("\n %d is Not Prime Number",n);

													 break;
											case 2 : clrscr();
													 printf("\n\n  PRINT PRIME NUMBER UP TO N NUMBERS");
													 printf("\n -----------------------------------------\n");
													 printf("\n Enter Last Number = ");
													 scanf("%d",&n);
													 printf("\n Prime Numbers = ");
													 for(n1=0;n >= n1;n1++)
													 {
														count = 1;
														for(i=0;n1/2 >= i;i++)
														{
															if(n1%i == 0)
															{
																count++;
																break;
															}
														}
														if(count == 1)
															printf("\t %d",n1);
													 }


													 break;
											case 3 : goto loop;
											case 4 : goto main;
											case 5 : exit(0);
											default : printf("\n Invalid Option... Enter Valid Option");
										}
										printf("\n\n Press 'Y' to go Prime Number Menu \n Press 'N' to go Main Menu = ");
										check();
										if( ch == 'n' || ch == 'N' )
											goto main;
									 }while(ch == 'Y' || ch == 'y');
									 break;
							 case 5 : do
									  {
										clrscr();
										printf("\n------------------------------------------");
										printf("\n\t FIBONACCI SERIES PROGRAMS");
										printf("\n------------------------------------------");
										printf("\n\n 1. Fibonacci Series Up to N Number");
										printf("\n 2. Fibonacci Series Up to N Terms");
										printf("\n 3. Reverse Fibonacci Series");
										printf("\n 4. Back to Loop Menu");
										printf("\n 5. Back to Main Menu");
										printf("\n 6. Exit");
										printf("\n\n Enter Your Choice : ");
										scanf("%d",&n);
										switch(n)
										{
											case 1 : clrscr();
													 printf("\n\n FIBONACCI SERIES UP TO N NUMBER");
													 printf("\n ------------------------------------\n");
													 printf("\n  Enter Last Number = ");
													 scanf("%d",&n);
													 printf("\n\n Fibonacci Series = ");
													 n1 =  0; n2 = 1;
													 while(n >= n1)
													 {
														printf("\t %d",n1);
														n3 = n2 +n1;
														n1 = n2;
														n2 = n3;
													 }
													 break;
											case 2 : clrscr();
													 printf("\n\n FIBONACCI SERIES UP TO N TERMS");
													 printf("\n ------------------------------------\n");
													 printf("\n  How Many Terms You Want Print = ");
													 scanf("%d",&n);
													 printf("\n\n Fibonacci Series = ");
													 n1 =  0; n2 = 1;
													 for(i=0;n > i;i++)
													 {
														printf("\t %d",n1);
														n3 = n2 +n1;
														n1 = n2;
														n2 = n3;
													 }
													 break;
											case 3 : clrscr();
													 printf("\n\n REVERSE FIBONACCI SERIE");
													 printf("\n -----------------------------\n");
													 printf("\n  Enter Starting Number = ");
													 scanf("%d",&n);
													 printf("\n\n Fibonacci Series = ");
													 n1 =  0; n2 = 1;
													 while(n >= n1)
													 {

														n3 = n2 +n1;
														n1 = n2;
														n2 = n3;
													 }
													 while(n1 >= 0)
													 {
														printf("\t %d",n1);
														n3 = n2 - n1;
														n2 = n1;
														n1 = n3;
													 }
													 break;
											case 4 : goto loop;
											case 5 : goto main;
											case 6 : exit(0);
											default : printf("\n Invalid Option... Enter Valid Option");
										}
										printf("\n\n Press 'Y' to go Fibonacci Series Menu /n Press 'N' to go Main Menu = ");
										check();
										if( ch == 'n' || ch == 'N' )
											goto main;
									 }while(ch == 'Y' || ch == 'y');
									 break;
							 case 3 : clrscr();
									  printf("\n\n CHECK FOR PALINDRON NUMBER");
									  printf("\n --------------------------------\n");
									  geti();
									  rev = 0;
									  back = n;
									  while(n != 0)
									  {
										rev = n%10 + rev*10;
										n = n/10;
									  }
									  if(back == rev)
										printf("\n %d is Palindron Number",rev);
									  else
										printf("\n %d is Not Palindron Number",back);

									 break;
							 case 4 : clrscr();
									  printf("\n\n CHECK FOR ARMSTRONG NUMBER");
									  printf("\n -------------------------------\n");
									  geti();
									  sum = 0; back = n; count = 0;
									  while(n != 0)
									  {
										n = n/10;
										count= count + 1;

									  }
									  n = back;
									  while(n != 0)
									  {
										rem = n%10;
										n = n/10;
										n1 = rem;

										while(count != 0)
										{

											n1 = n1*rem;
											count = count - 1;
										}
										sum = sum + n1 ;

									  }
									  if(back == sum)
										printf("\n %d is Armstrong Number And Sum = %d",back,sum);
									  else
										printf("\n %d is Not Armstrong Number",back);

									 break;
							 case 1 : clrscr();
									  printf("\n\n PRINT TABLE OF ANY NUMBER");
									  printf("\n ------------------------------\n");
									  geti();
									  for(i=1;10 >= i;i++)
										printf("\n %d X %.2d = %d",n,i,n*i);
								 break;
							 case 7 : goto main;
							 case 6 : clrscr();
									  printf("\n\n CHECK THE TYPE OF TRIANGLE");
									  printf("\n ------------------------------");
									  printf("\n Enter First Side = ");
									  scanf("%d",n1);
									  printf("\n Enter Second Side = ");
									  scanf("%d",n2);
									  printf("\n Enter Third Side = ");
									  scanf("%d",n3);
									  if(n1 == n2 && n2 == n3)
										printf("\n Equilateral Triangle");
									  else if(n1 == n2 || n1 == n3 || n2 == n3)
										printf("\n Isosceles Triangle");
									  else if(n1*n1 == n2*n2 + n3*n3 || n2*n2 == n1*n1 + n3*n3 || n3*n3 == n1*n1 + n2*n2)
										printf("\n Right Angle Triangle");
									  else
										printf("\n Scalene Triangle");

									 break;
							 case 8 : exit(0);
							 default : printf("\n Invalid Option... Enter Valid a Option");
						 }
						printf("\n\n Press Y to go to Loop Menu OR\n Press N to go to MAIN MENU\n Enter = ");
						check();
						if( ch == 'n' || ch == 'N' )
							goto main;
					 }while(ch == 'y' || ch == 'Y');
					break;
			case 4 : exit(0);
			default : printf("\n Invalid Option... Enter Valid a Option");
		}
		printf("\n\n Press Y to go to MAIN MENU OR\n Press N to Exit\n Enter = ");
		check();
	}while(ch == 'Y' || ch == 'y');
	printf("\n Press Any Key to Exit..");
	getch();
}
//fuction
void check()
{

	scanf(" %c",&ch);
	if(ch != 'y' || ch != 'Y')
	{
		for(i = 0;i <= 3;i++)
		{
			if(ch == 'n' || ch == 'N')
				return;
			else if(ch == 'y' || ch == 'Y')
				break;
			else if(i == 3)
			{
				printf("\n TIMEOUT...");
				printf("\n Enter Any Key to Exit...");
				getch();
				exit(0);
			}
			else
			{
				printf("\n Please Enter (Y/N) Valid Option = ");
				scanf(" %c",&ch);
			}
		}
	}
}
void get2i()
{
	printf("\n Enter First Number = ");
	scanf("%d",&n1);
	printf("\n Enter Second Number = ");
	scanf("%d",&n2);
}
void get2f()
{
	printf("\n Enter First Number = ");
	scanf("%f",&fn1);
	printf("\n Enter Second Number = ");
	scanf("%f",&fn2);
}
void get3i()
{
	printf("\n Enter First Number = ");
	scanf("%d",&n1);
	printf("\n Enter Second Number = ");
	scanf("%d",&n2);
	printf("\n Enter Third Number = ");
	scanf("%d",&n3);
}
void get3f()
{
	printf("\n Enter First Number = ");
	scanf("%f",&fn1);
	printf("\n Enter Second Number = ");
	scanf("%f",&fn2);
	printf("\n Enter Third Number = ");
	scanf("%f",&fn3);
}
void geti()
{
	printf("\n Enter Any Number = ");
	scanf("%d",&n);
}




