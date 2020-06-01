#include <iostream>
#include <iomanip>
#include <cstring>							
#include <unistd.h>			//wheader file using sleep() method
#include <Windows.h> 		//header file COLOR CODE				

using namespace std;

//function prototype

//without return value
void displayHello();
void displayOffer();
void displayReminder();
void displayDesign();
void displayModel();
void displayPrinting();
void displayMaterial();
void displayDone();
void displayCongrats();
void displayError();
void displayLoading();
void displayReport(double, int, int , int ,int, int , int, int, int, int, char*, char*, char*, char*);

//with return value
double calcSelling(double);

//using reference parameter
void calcDiscount(double, double, double&);

//ARRAY
void designArray(char, char*);
void modelArray(char, char*);

void findHighPrints(int, int, int, int, char*);
void findLowPrints(int, int, int, int, char*);
void findHighMat(int, int, int, char*);
void findLowMat(int, int, int, char*);

void displayMember(char, char*);

int main ()
{

	
	system ("COLOR 0F");	
									
//Declaration

	int count = 0, countCust = 0, countSP = 0, countEP = 0, countDP = 0, count3D = 0;
	int countPL = 0, countTP = 0, countCF = 0;
	int totCust, totSP, totEP, totDP, tot3D, totCase = 0;
	int totPL, totTP, totCF;
	double price, charges,off, discount, totalPrice, sellingPrice, discountPrice;
	double totSales = 0, totPrice = 0;
	char name[50], add[100], ic[20], phoNum[15],email[50], modCode, desCode, printCode[5], matCode[5], maxP[20], minP[20], maxM[20], minM[20],
		response, desName[10], modName[10], disText[10];
		 
//ARRAY DECLARATION

	char tryDesign[100][50], tryModel[100][50];
	int a=0, b=0;
	
//introduction of the store	
	displayHello();


//input
	cout << "\n\nEnter name: ";
	cin.getline(name,50);


for(int countCust=1;strcmp(name,"ADMIN")!=0;countCust++) 																		//outer loop for daily report
{

//input	
	cout << "Enter IC Number: ";
	cin >> ws;
	cin.getline(ic,20);
	
	cout << "Enter phone number: ";
	cin >> ws;
	cin.getline(phoNum, 15);
	
	cout << "Enter your address: ";
	cin >> ws;
	cin.getline(add,100);
	
	cout << "Enter your email address: ";
	cin.getline(email,50);
	
//func call
	displayOffer();
		
	cout << "\n\nDo you have a membership here? < Y - YES / N - NO > ";
	cin >> response;
	
			while(response != 'Y' && response != 'N')
			{
				system ("COLOR C0");
				displayError();
				cout << "\n\n\nAre you a member? : ";
				cin >> response;
				system ("COLOR 0F");
				
			}
//func call
	displayMember(response,disText);
			
//func call
	displayReminder();
	
//looping process

	char sentinel = 'N' ;
	char answer;

	cout << "\n\nWould you like to START ORDERING? ";
	cout << "\n\t< Y - YES> ";
	cout << "\n\t< N - NO> ";
	cin >> answer;
	
			while(answer != 'Y' && answer != 'N')
			{
				system ("COLOR C0");
				displayError();
				cout << "\n\n\nWould you like to ORDER NOW?  : ";
				cin >> answer;
				system ("COLOR 0F");
			}
			

for(count = 0; answer != sentinel; count++)																						//inner loop for one customer	  
	{
		//func call
		displayDesign();
		
			cin.clear();
			a++;
			cout << "\n\nEnter design code: ";
			cin >> desCode;
		
			while(desCode != 'C' && desCode != 'O')
			{
				system ("COLOR C0");
				displayError();
				cout << "\n\n\nEnter design code: ";
				cin >> desCode;
				system ("COLOR 0F");
			}	
		
//selection process

		if (desCode == 'C' || desCode == 'O')
		{
			//func call
			displayModel();
				
				cin.clear();
				b++;
				cout << "\n\nEnter model code: ";
				cin >> modCode;
			
			while(modCode != 'S' && modCode != 'O' && modCode != 'V' && modCode != 'X' && modCode != 'I' && modCode != 'H' && modCode != 'L')
			{
				system ("COLOR C0");
				displayError();
				cout << "\n\nEnter model code: ";
				cin >> modCode;
				system ("COLOR 0F");
			}	
	
			if (modCode == 'S'|| modCode == 'O'|| modCode == 'V'|| modCode == 'X'|| modCode == 'I'|| modCode == 'H'|| modCode == 'L')
			{
				//func call
				displayPrinting();
				
					cout << "\n\nEnter printing code: ";
					cin >> printCode;
					
				while( (strcmp(printCode, "SP")!= 0) && (strcmp(printCode, "EP")!=0) && (strcmp(printCode, "DP")!=0) && (strcmp(printCode, "3D")!=0) )
				{
					system ("COLOR C0");
					displayError();
					cout << "\n\n\nEnter printing code: ";
					cin >> printCode;
					system ("COLOR 0F");
				}	
					
				if (strcmp(printCode, "SP")==0)
				{
					//func call
					displayMaterial();
					
						cout << "\n\nEnter material code: ";
						cin >> matCode;
						
					while( (strcmp(matCode, "PL")!= 0) && (strcmp(matCode, "TP")!=0) && (strcmp(matCode, "CF")!=0) )
					{
						system ("COLOR C0");
						displayError();
						cout << "\n\n\nEnter material code: ";
						cin >> matCode;
						system ("COLOR 0F");
					}	
						
						if(strcmp(matCode, "PL")==0)
						{
							price = 10.00;
							countPL++;
						}
						else if(strcmp(matCode, "TP")==0)
						{
							price = 20.00;
							countTP++;
						}
						else if (strcmp(matCode, "CF")==0)
						{
							price = 15.00;
							countCF++;
						}
				countSP++;		
				}
				else if (strcmp(printCode, "EP")==0)
				{
					//func cal
					displayMaterial();
						cout << "\n\nEnter material code: ";
						cin >> matCode;
						
					while( (strcmp(matCode, "PL")!= 0) && (strcmp(matCode, "TP")!=0) && (strcmp(matCode, "CF")!=0) )
					{
						system ("COLOR C0");
						displayError();
						cout << "\n\n\nEnter material code: ";
						cin >> matCode;
						system ("COLOR 0F");
					}
						
						if(strcmp(matCode, "PL")==0)
						{
							price = 15.00;
							countPL++;
						}
						else if (strcmp(matCode, "TP")==0)
						{
							price = 23.00;
							countTP++;
						}
						else if (strcmp(matCode, "CF")==0)
						{
							price = 18.00;
							countCF++;
						}
				countEP++;
				}
				else if (strcmp(printCode, "DP")==0)
				{
					//func call
					displayMaterial();
						cout << "\n\nEnter material code: ";
						cin >> matCode;
						
					while( (strcmp(matCode, "PL")!= 0) && (strcmp(matCode, "TP")!=0) && (strcmp(matCode, "CF")!=0) )
					{
						system ("COLOR C0");
						displayError();
						cout << "\n\n\nEnter material code: ";
						cin >> matCode;
						system ("COLOR 0F");
					}
						
						if (strcmp(matCode, "PL")==0)
						{
							price = 15.00;
							countPL++;
						}
						else if (strcmp(matCode, "TP")==0)
						{
							price = 23.00;
							countTP++;
						}
						else if (strcmp(matCode, "CF")==0)
						{
							price = 18.00;
							countCF++;
						}
				countDP++;
				}
				else if (strcmp(printCode, "3D")==0)
				{
					//func call
					displayMaterial();
						cout << "\n\nEnter material code: ";
						cin >> matCode;
					
					while( (strcmp(matCode, "PL")!= 0) && (strcmp(matCode, "TP")!=0) && (strcmp(matCode, "CF")!=0) )
					{
						system ("COLOR C0");
						displayError();
						cout << "\n\n\nEnter material code: ";
						cin >> matCode;
						system ("COLOR 0F"); 
					}
						
						if (strcmp(matCode, "PL")==0)
						{
							price = 20.00;
							countPL++;
						}
						else if (strcmp(matCode, "TP")==0)
						{
							price = 26.00;
							countTP++;
						}
						else if (strcmp(matCode, "CF")==0)
						{
							price = 23.00;
							countCF++;
						}
				count3D++;
				}
			}
			
		}
		
		//ARRRAY func call (DESIGN)
		
			designArray(desCode, desName);
			
			strcpy(tryDesign[a],desName);
			
			
		//ARRAY func call (MODEL)
		
			modelArray(modCode, modName);
			
			strcpy(tryModel[b],modName);
				
		
//calculate per receipt	

//discount for membership
		if (response == 'Y')
		{
			off = 0.20;
		}
		else if (response == 'N')
		{
			off = 0.00;
		}	
		
//function call to CALCULATE TOTAL PRICE

	sellingPrice = calcSelling(price);				//initialize function call
	
	totPrice = totPrice + sellingPrice;
	
	calcDiscount(totPrice,off,discount);		
	
	totalPrice = totPrice - discount;
	
	//func call
	displayDone();
	
//looping process ends and begins
	cout << "\n\nWould you like to ORDER MORE? ";
	cout << "\n\t< Y - YES> ";
	cout << "\n\t< N - NO> ";
	cin >> answer;
	
	while(answer != 'Y' && answer != 'N')
			{
				system ("COLOR C0");
				displayError();
				cout << "\n\n\nWould you like to make MORE OREDERS? : ";
				cin >> answer;
				system ("COLOR 0F");
			}

	
	}
	
	//func call
	displayCongrats();

//output (Receipt)
	cout << setprecision(2) << fixed;
	cout << "\n\n\t****************************************************************" << endl;
	cout << "\t            - CREATIVE PHONECASE OFFICIAL RECEIPT -             " << endl;
	cout << "\t****************************************************************" << endl;
	cout << "\n\t                BUYER'S PERSONAL INFORMATIONS                     " << endl;
	cout << "\n\tName                           : " << name;
	cout << "\n\n\tTotal phonecases bought        : " << count;
	cout << "\n\n\tIC Number                      : " << ic;
	cout << "\n\n\tPhone Number                   : " << phoNum;
	cout << "\n\n\tE-mail Address                 : " << email;
	cout << "\n\n\tThe items will delivered to    : " << add;
	cout << "\n\n\n\t                CHARGES AND ITEMS INFORMATIONS                       " << endl;
	cout << "\n\n\tTax                                : FREE FROM TAX" ;
	cout << "\n\n\tDesign choosen                     : ";                            
		 	for(int a =  0; a < count; a++)
			{
			 	cout << tryDesign[a] << ","; 
			}
	cout << "\n\n\tPhone model choosen                : ";
			for(int b = 0; b < count; b++)
			{
				cout << tryModel[b] << ",";
			}
	cout << "\n\n\tDiscount                           : " << disText;
	cout << "\n\n\tCharges                            : RM 10.00";
	cout << "\n\n\tTotal Price                        : RM " << totalPrice;
	cout << "\n\n\n\t*****************************************************************" << endl;
	cout << "\t                 THANK YOU FOR BUYING WITH US!                  " << endl;
	cout << "\t*****************************************************************" << endl;
	
//calculate daily report	
	totSales = totSales + totalPrice;
	totCase = totCase + count;
	totCust = countCust;
	
//initialize value for max/min prints 
	totSP = countSP;
	totEP = countEP;
	totDP = countDP;
	tot3D = count3D;
	
//initialize value for count material
	totPL = countPL;
	totTP = countTP;
	totCF = countCF;

                  			//PLEASE ENTER 'ADMIN' INSTEAD OF CUSTOMER'S NAME TO END A DAY'S TRANSACTIONS 
                  			    
                       
	cout << "\nEnter name: "; 													//if enter another cust name, will count next cust
	cin >> ws;
	cin.getline(name,50);
	
//reset to zero for next customer
	totPrice = 0;
	
//func call (MIN MAX PRINTS)
findHighPrints(totSP, totEP, totDP, tot3D, maxP);
findLowPrints(totSP, totEP, totDP, tot3D, minP);

//func call (MIN MAX MATERIAL)
findHighMat(totPL, totTP, totCF, maxM);
findLowMat(totPL, totTP, totCF, minM);

}


//output (Daily report)

		displayLoading();
		displayReport( totSales, totCust, totCase, totSP, totEP,totDP, tot3D, totPL, totTP, totCF,  maxP, minP, maxM, minM);

	system ("pause");
	return 0;
}

//display WELCOME
void displayHello()
{
	cout << "\n********************************************************************************";
	cout << "\nWelcome to CREATIVE PHONECASE. A place for you to shop for beautiful phonecases" << endl;
	cout << "\n********************************************************************************" << endl << endl;
}

//display Discount = 20% for membership
void displayOffer()
{
	cout << "\n\n      -------------------- S P E C I A L   O F F E R ---------------------- " << endl;
	cout << "\n              20% OFF IS GIVEN TO THE MEMBERS OF CREATIVE PHONECASE        " << endl;
	cout << "\n      ---------------------------------------------------------------------" << endl;
}

//display friendly instruction
void displayReminder()
{
	cout << "\n\n\n   -------------------------------------------------------------------------" << endl;
	cout << "\n       ~ Do remember that you must enter the letters in CAPITAL LETTERS ~   " << endl;
	cout << "\n   ------------------------------------------------------------------------- " << endl;
}

//display ORDER COMPLETE
void displayDone()
{
	cout << "\n      ===================================================================" << endl;
	cout << "\n                            Your order is complete!!                       " << endl;
	cout << "\n      ===================================================================" << endl;
}

//display ORDER RECEIVED
void displayCongrats()
{
	cout << "\n\n\t       ++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	cout << "\n\t        CONGRATULATIONS YOUR ORDERS HAS BEEN RECEIVED!  " << endl;
	cout << "\n\t       ++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	
	cout << "\n\n\t    +++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	cout << "\n\t     PLEASE REFER THE RECEIPT BELOW FOR FURTHER DETAILS. " << endl;
	cout << "\n\t    +++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
}

//display ERROR (USED SLEEP FOR 2 SECONDS)
void displayError()
{
	for(int i=1;i<=1;i++) 																									//2 time statement will blink
         {
         	system ("COLOR C"); 																																															//wait for a second
			cout << "\n\n\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
			cout << "\n\t\t       ERROR! YOU HAVE ENTERED INVALID CODE!         " << endl;
			cout << "\n\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;										//print this statement on screen.
			sleep(1.5); 																										//wait for a second 
			system ("COLOR 0F");
          }
}

void displayLoading()
{
	
	system("COLOR 0E" );
	char d=177, c=219;
	
	cout << "\n\n\n\t\t\t\tLoading...";
	cout << "\n\n\n";
	cout << "\t\t\t";
	for (int i=0; i <=25; i++)
		cout << d;
		Sleep(150);
	cout <<"\r";
	cout <<"\t\t\t";
	for (int i=0; i <= 25; i++)
	{
		cout <<c;
		Sleep(200);
	}
	
	cout << "\n\n\n\n\n";
	system ("COLOR 0F");
}



//menu table
void displayDesign()
{
	cout << "\n\n\t\t\t|-|----------|-|-----------------|-|" << endl;
	cout << "\t\t\t| | Letter   | |   Designs       | |" << endl;
	cout << "\t\t\t|-|----------|-|-----------------|-|" << endl;
	cout << "\t\t\t| |    C     | |   Customize     | |" << endl;
	cout << "\t\t\t|-|----------|-|-----------------|-|" << endl;
	cout << "\t\t\t| |    O     | |   Original      | |" << endl;
	cout << "\t\t\t|-|----------|-|-----------------|-|" << endl;
}

void displayModel()
{
	cout << "\n\n\t\t\t|-|----------|-|-----------------|-|" << endl;
	cout << "\t\t\t| | Letter   | |   Phone Model   | |" << endl;
	cout << "\t\t\t|-|----------|-|-----------------|-|" << endl;
	cout << "\t\t\t| |    S     | |   Samsung       | |" << endl;
	cout << "\t\t\t|-|----------|-|-----------------|-|" << endl;
	cout << "\t\t\t| |    O     |-|   Oppo          | |" << endl;
	cout << "\t\t\t|-|----------|-|-----------------|-|" << endl;
	cout << "\t\t\t| |    V     |-|   Vivo          | |" << endl;
	cout << "\t\t\t|-|----------|-|-----------------|-|" << endl;
	cout << "\t\t\t| |    X     |-|   Xiaomi        | |" << endl;
	cout << "\t\t\t|-|----------|-|-----------------|-|" << endl;
	cout << "\t\t\t| |    I     |-|   IPhone        | |" << endl;
	cout << "\t\t\t|-|----------|-|-----------------|-|" << endl;
	cout << "\t\t\t| |    H     |-|   Huawei        | |" << endl;
	cout << "\t\t\t|-|----------|-|-----------------|-|" << endl;
	cout << "\t\t\t| |    L     |-|   Lenovo        | |" << endl;
	cout << "\t\t\t|-|----------|-|-----------------|-|" << endl;
}

void displayPrinting()
{
	cout << "\n\n\t\t\t|-|----------|-|-----------------|-|" << endl;
	cout << "\t\t\t| | Letter   | |   Printing      | |" << endl;
	cout << "\t\t\t|-|----------|-|-----------------|-|" << endl;
	cout << "\t\t\t| |    SP    | |   Screen        | |" << endl;
	cout << "\t\t\t|-|----------|-|-----------------|-|" << endl;
	cout << "\t\t\t| |    EP    |-|   Embossing     | |" << endl;
	cout << "\t\t\t|-|----------|-|-----------------|-|" << endl;
	cout << "\t\t\t| |    DP    |-|   Debossing     | |" << endl;
	cout << "\t\t\t|-|----------|-|-----------------|-|" << endl;
	cout << "\t\t\t| |    3D    |-|  3D Sublimation | |" << endl;
	cout << "\t\t\t|-|----------|-|-----------------|-|" << endl;
	
}

void displayMaterial()
{
	cout << "\n\n\t\t\t|-|----------|-|------------------|-|" << endl;
	cout << "\t\t\t| | Letter   | |    Material      | |" << endl;
	cout << "\t\t\t|-|----------|-|------------------|-|" << endl;
	cout << "\t\t\t| |    PL    | |    Plastic       | |" << endl;
	cout << "\t\t\t|-|----------|-|------------------|-|" << endl;
	cout << "\t\t\t| |    TP    |-|Thermopolyurathane| |" << endl;
	cout << "\t\t\t|-|----------|-|------------------|-|" << endl;
	cout << "\t\t\t| |    CF    |-|   Carbon Fiber   | |" << endl;
	cout << "\t\t\t|-|----------|-|------------------|-|" << endl;		
}

//calculate and decide the highest printings
void findHighPrints(int totSP, int totEP, int totDP, int tot3D,char* maxP)
{
	
	if (totSP > totEP && totSP > totDP && totSP > tot3D)
	{
		strcpy (maxP, "Screen Printing");
	}
	else if (totEP > totSP && totEP > totDP && totEP > tot3D)
	{
		strcpy (maxP, "Embossing Printing");
	}
	else if (totDP > totSP && totDP > totEP && totDP > tot3D)
	{
		strcpy (maxP, "Debossing Printing");
	}
	else if (tot3D > totSP && tot3D > totEP && tot3D > totDP )
	{
		strcpy (maxP, "3D Sublimation Printing");
	}
}


//calculate and decide the lowest printings
void findLowPrints(int totSP, int totEP, int totDP, int tot3D,char* minP)
{
	
	if (totSP < totEP && totSP < totDP && totSP < tot3D)
	{
		strcpy (minP, "Screen Printing");
	}
	else if (totEP < totSP && totEP < totDP && totEP < tot3D)
	{
		strcpy (minP, "Embossing Printing");
	}
	else if (totDP < totSP && totDP < totEP && totDP < tot3D)
	{
		strcpy (minP, "Debossing Printing");
	}
	else if (tot3D < totSP && tot3D < totEP && tot3D < totDP )
	{
		strcpy (minP, "3D Sublimation Printing");
	}
}

//calculate and decide the highest material
void findHighMat(int totPL, int totTP, int totCF, char* maxM)
{
	if (totPL > totTP && totPL > totCF)
	{
		strcpy (maxM, "Plastic");
	}
	else if (totTP > totPL && totTP > totCF)
	{
		strcpy (maxM, "Thermo-polyurathane");
	}
	else if (totCF > totPL && totCF > totTP)
	{
		strcpy (maxM, "Carbon Fiber");
	}
}

//calculate and decide the lowest material
void findLowMat(int totPL, int totTP, int totCF, char* minM)
{
	if (totPL < totTP && totPL < totCF)
	{
		strcpy (minM, "Plastic");
	}
	else if (totTP < totPL && totTP < totCF)
	{
		strcpy (minM, "Thermo-polyurathane");
	}
	else if (totCF < totPL && totCF < totTP)
	{
		strcpy (minM, "Carbon Fiber");
	}
}

//calculate the total charges for one customer
double calcSelling(double price)
{
	double charges,sellingPrice;
	
	charges = 10.00;
	
	sellingPrice = price + charges;
	

	return sellingPrice;
}

//calculate the discount given (membership)
void calcDiscount(double totPrice, double off,double& discount)
{
	discount = off * totPrice;
	
}

//display text of the discount (20% 0r 0%)
void displayMember(char response, char* disText)
{
	if (response == 'Y')
	{
		strcpy (disText, "20% OFF");
	}
	else if (response == 'N')
	{
		strcpy (disText, "0% OFF");
	}
}

//ARRAY
void designArray(char desCode, char*desName)
{
	if(desCode == 'C')
	{
		strcpy(desName, "Customize");
	}
	else if (desCode == 'O')
	{
		strcpy(desName, "Original");	
	}	
}

void modelArray(char modCode, char* modName)
{
	if (modCode == 'S')
	{
		strcpy(modName, "Samsung");
	}
	else if (modCode == 'O')
	{
		strcpy(modName, "Oppo");
	}
	else if (modCode == 'V')
	{
		strcpy(modName, "Vivo");
	}
	else if (modCode == 'X')
	{
		strcpy(modName, "Xiomi");
	}
	else if (modCode == 'I')
	{
		strcpy(modName, "Iphone");
	}
	else if (modCode == 'H')
	{
		strcpy(modName, "Huawei");
	}
	else if (modCode == 'L')
	{
		strcpy(modName, "Lenovo");
	}
	
}
//display DAILY REPORT
void displayReport(double totSales, int totCust, int totCase, int totSP,int totEP, int totDP, int tot3D, int totPL, int totTP, int totCF, char* maxP, char* minP, char* maxM, char* minM )
{
	cout << "\n\n\t\tWelcome ADMIN! You have worked hard today.";
	cout << "\n\t\tThis the report of the day!";
	
	cout << setprecision << fixed;
	cout << "\n\n\t****************************************************************" << endl;
	cout << "\t                     - DAILY REPORT ON SALES -                  " << endl;
	cout << "\t****************************************************************" << endl;
	cout << "\n\tTotal Sales                            : RM " << totSales;
	cout << "\n\n\tTotal customers                        : " << totCust;
	cout << "\n\n\tTotal phonecases sold                  : " << totCase;
	cout << "\n\n\n\tTotal Screen Printings                 : " << totSP;
	cout << "\n\n\tTotal Embosssing Printings             : " << totEP;
	cout << "\n\n\tTotal Debossing Printings              : " << totDP;
	cout << "\n\n\tTotal 3D Sublimation Printings         : " << tot3D;
	cout << "\n\n\n\tTotal Plastic Material                 : " << totPL;
	cout << "\n\n\tTotal Thermo-polyurathane Material     : " << totTP;
	cout << "\n\n\tTotal Carbon Fiber Material            : " << totCF;
	cout << "\n\n\n\tHighest Prints                 	       : " << maxP;
	cout << "\n\n\tLowest Prints                          : " << minP;
	cout << "\n\n\n\tHighest Material                       : " << maxM;
	cout << "\n\n\tLowest Material                        : " << minM;
	cout << "\n\n\n\t****************************************************************" << endl;
	cout << "\t                          See you again!                        " << endl;
	cout << "\t****************************************************************" << endl << endl;

}


