#include <iostream>
#include <iomanip>
#include <cstring>							
#include <unistd.h>		                                                            	
#include <Windows.h> 	                                                            				
#include <fstream>

using namespace std;

//struct for SEARCHING
struct custInfo
{
	char name[50];
	char add[100];
	char ic[20];
	char id[10];
	char response;
	char modCode;
	char matCode[5];
	double totalPrice;
};


void displayHello(ofstream &print)
{
	cout << "\n================================================================================";
	cout << "\nWelcome to CREATIVE PHONECASE. A place for you to shop for beautiful phonecases" << endl;
	cout << "\n================================================================================" << endl << endl;
	
	print << "\n================================================================================";
	print << "\nWelcome to CREATIVE PHONECASE. A place for you to shop for beautiful phonecases" << endl;
	print << "\n================================================================================" << endl << endl;
}


//DISCOUNT = 20% for membership
void displayOffer(ofstream &print)
{
	cout << "\n\n      -------------------- S P E C I A L   O F F E R ---------------------- " << endl;
	cout << "\n              20% OFF IS GIVEN TO THE MEMBERS OF CREATIVE PHONECASE        " << endl;
	cout << "\n      ---------------------------------------------------------------------" << endl;
	
	print << "\n\n      -------------------- S P E C I A L   O F F E R ---------------------- " << endl;
	print << "\n              20% OFF IS GIVEN TO THE MEMBERS OF CREATIVE PHONECASE        " << endl;
	print << "\n      ---------------------------------------------------------------------" << endl;
}

//CHARGES
void displayCharges(ofstream &print)
{

	cout << "\n\n\n      ---------------------- S H O P   C H A R G E S -------------------- " << endl;
	cout << "\n                 RM 10 WILL BE ADDED TO EACH PHONECASES BOUGHT        " << endl;
	cout << "\n      -------------------------------------------------------------------" << endl;
	
	print << "\n\n\n      ---------------------- S H O P   C H A R G E S -------------------- " << endl;
	print << "\n                 RM 10 WILL BE ADDED TO EACH PHONECASES BOUGHT        " << endl;
	print << "\n      -------------------------------------------------------------------" << endl;
}

//LOADING ANIMATIONS
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

//PRICE ANIMATION
void displayPrice(ofstream &print)
{
	 	cout << "\n\n\t ._________________________. \t ._________________________. ";
 		cout << "\n\t |                         | \t |                         | ";
		cout << "\n\t |     @ ==============    | \t |     @ ==============    | ";
		cout << "\n\t |        I-PHONE (I)      | \t |        ANDROID (A)      | ";
   		cout << "\n\t | .---------------------. | \t | .---------------------. | ";
   		cout << "\n\t | |                     | | \t | |                     | | ";
  		cout << "\n\t | |        PRICES       | | \t | |        PRICES       | | ";
  		cout << "\n\t | |                     | | \t | |                     | | ";
  		cout << "\n\t | |                     | | \t | |                     | | ";
  		cout << "\n\t | |                     | | \t | |                     | | ";
 		cout << "\n\t | | MATERIAL:           | | \t | | MATERIAL:           | | ";
  		cout << "\n\t | |                     | | \t | |                     | | ";
  		cout << "\n\t | |                     | | \t | |                     | | ";
		cout << "\n\t | | PLASTIC:            | | \t | | PLASTIC:            | | ";
 		cout << "\n\t | |         RM 20       | | \t | |         RM 20       | | ";
 		cout << "\n\t | |                     | | \t | |                     | | ";	
 		cout << "\n\t | |                     | | \t | |                     | | ";
 		cout << "\n\t | |                     | | \t | |                     | | ";
   		cout << "\n\t | | THERMOPOLYURATHANE: | | \t | | THERMOPOLYURATHANE: | | ";
 		cout << "\n\t | |         RM 35       | | \t | |         RM 35       | | ";
 		cout << "\n\t | |                     | | \t | |                     | | ";
  		cout << "\n\t | |                     | | \t | |                     | | ";
  		cout << "\n\t | |                     | | \t | |                     | | ";
 		cout << "\n\t | | CARBON FIBER:       | | \t | | CARBON FIBER:       | | ";
  		cout << "\n\t | |         RM 25       | | \t | |         RM 25       | | ";
  		cout << "\n\t | |                     | | \t | |                     | | ";
  		cout << "\n\t | |                     | | \t | |                     | | ";
 		cout << "\n\t | |.____________________. | \t | |.____________________. | ";
 		cout << "\n\t |                         | \t |                         | ";
  		cout << "\n\t |    |__)---------(__|    | \t |    |__)---------(__|    | ";
  		cout << "\n\t |                         | \t |                         | ";
   		cout << "\n\t .-------------------------. \t .-------------------------. ";
   		
   		print << "\n\n\t ._________________________. \t ._________________________. ";
 		print << "\n\t |                         | \t |                         | ";
		print << "\n\t |     @ ==============    | \t |     @ ==============    | ";
		print << "\n\t |        I-PHONE (I)      | \t |        ANDROID (A)      | ";
   		print << "\n\t | .---------------------. | \t | .---------------------. | ";
   		print << "\n\t | |                     | | \t | |                     | | ";
  		print << "\n\t | |        PRICES       | | \t | |        PRICES       | | ";
  		print << "\n\t | |                     | | \t | |                     | | ";
 		print << "\n\t | | MATERIAL:           | | \t | | MATERIAL:           | | ";
  		print << "\n\t | |                     | | \t | |                     | | ";
  		print << "\n\t | |                     | | \t | |                     | | ";
		print << "\n\t | | PLASTIC:            | | \t | | PLASTIC:            | | ";
 		print << "\n\t | |         RM 20       | | \t | |         RM 20       | | ";
 		print << "\n\t | |                     | | \t | |                     | | ";
   		print << "\n\t | | THERMOPOLYURATHANE: | | \t | | THERMOPOLYURATHANE: | | ";
 		print << "\n\t | |         RM 35       | | \t | |         RM 35       | | ";
  		print << "\n\t | |                     | | \t | |                     | | ";
 		print << "\n\t | | CARBON FIBER:       | | \t | | CARBON FIBER:       | | ";
  		print << "\n\t | |         RM 25       | | \t | |         RM 25       | | ";
  		print << "\n\t | |                     | | \t | |                     | | ";
  		print << "\n\t | |                     | | \t | |                     | | ";
 		print << "\n\t | |.____________________. | \t | |.____________________. | ";
 		print << "\n\t |                         | \t |                         | ";
  		print << "\n\t |    |__)---------(__|    | \t |    |__)---------(__|    | ";
  		print << "\n\t |                         | \t |                         | ";
   		print << "\n\t .-------------------------. \t .-------------------------. ";
}


//ARRAY RETURN INDEX (HIGHEST MATERIAL)
int findHighMat(int countPL, int countTP, int countCF)
{
	int arrayMat[3] = {countPL, countTP, countCF};
		
	int highest = arrayMat[0];
	int maxIndex = 0;
	
	for (int i = 0; i < 3; i++)
	{
		if (highest < arrayMat[i])
		{
			highest = arrayMat[i];
			maxIndex = i;
		}
	}
	
	return maxIndex;
}


//ARRAY RETURN INDEX (LOWEST MATERIAL)
int findLowMat(int countPL, int countTP, int countCF)
{
	int arrayMat[3] = {countPL, countTP, countCF};
		
	int lowest = arrayMat[0];
	int minIndex = 0;
	
	for (int i = 0; i < 3; i++)
	{
		if (lowest > arrayMat[i])
		{
			lowest = arrayMat[i];
			minIndex = i;
		}
	}
	
	return minIndex;
}

//calc TOTAL CHARGES FOR 1 CUST
double calcSelling(double price)
{
	double charges,sellingPrice;
	charges = 10.00;
	
	sellingPrice = price + charges;
	

	return sellingPrice;
}

//calc DISCOUNT FOR MEMBER
void calcDiscount(double totPrice, double off,double& discount)
{
	discount = off * totPrice;
	
}

//display TEXT DISCOUNT (20% 0r 0%)
void displayMember(custInfo customer[], char* disText,int& totCust)
{
	if (customer[totCust].response == 'Y')
	{
		strcpy (disText, "20% OFF");
	}
	else if (customer[totCust].response == 'N')
	{
		strcpy (disText, "0% OFF");
	}
}

//display SORTING MATERIAL
void sorting (ofstream &print,int& countPL, int& countTP, int& countCF)
{
	int matList[3] = {countPL, countTP, countCF};
	char matName[3][30] = {"Plastic","Thermo-polyurathane", "Carbon Fiber"};
	
	int temp;
	char tempName[50];
	for(int iteration=1; iteration<3; iteration++)
	{
		for(int i=0; i<3-iteration; i++)
		{
			if(matList[i] < matList[i+1])
			{
				temp= matList[i];
				matList[i]= matList[i+1];
				matList[i+1]= temp;
	
				strcpy(tempName,matName[i]);
				strcpy(matName[i],matName[i+1]);
				strcpy(matName[i+1],tempName);
			}
		}
	}
	
	cout << "\n\n\n\t\t----------------------------------------" << endl;
	cout << "\t\t| SORTING MATERIAL IN DESCENDING ORDER |" << endl;
	cout << "\t\t----------------------------------------" << endl;
	cout << "\n\t\t\tQUANTITY\tMATERIAL";
	cout << "\n\t\t\t------------------------" << endl;
	for (int i = 0; i < 3; i++)
	{	
		cout <<"\t\t\t" << matList[i] <<  "   -   " << matName[i] << endl;
	}
	
	print << "\n\n\n\t\t----------------------------------------" << endl;
	print << "\t\t| SORTING MATERIAL IN DESCENDING ORDER |" << endl;
	print << "\t\t----------------------------------------" << endl;
	print << "\n\t\t\tQUANTITY\tMATERIAL";
	print  << "\n\t\t\t------------------------" << endl;
	for (int i = 0; i < 3; i++)
	{	
		print <<"\t\t\t" << matList[i] <<  "   -   " << matName[i] << endl;
	}

}
//display DAILY REPORT
void displayReport(ofstream &print,double totSales, int totCase,double averageSales, int totPL, int totTP, int totCF, int indexMaxMat, int indexMinMat,int& countPL, int& countTP, int& countCF,const int size)
{
	char material[3][20] = { "Plastic", "Thermo-polyurathane", "Carbon Fiber"};

	
	cout << "\n\n\t\tWelcome ADMIN! You have worked hard today.";
	cout << "\n\t\tThis the report of the day!";
	
	cout << setprecision << fixed;
	cout << "\n\n\t****************************************************************" << endl;
	cout << "\t                     - DAILY REPORT ON SALES -                  " << endl;
	cout << "\t****************************************************************" << endl;
	cout << "\n\tTotal customers                        : " << size;
	cout << "\n\n\tTotal Sales                            : RM " << totSales;
	cout << "\n\n\tAverage Sales                          : RM " << averageSales;
	cout << "\n\n\tTotal phonecases sold                  : " << totCase;
	cout << "\n\n\n\tTotal Plastic Material                 : " << totPL;
	cout << "\n\n\tTotal Thermo-polyurathane Material     : " << totTP;
	cout << "\n\n\tTotal Carbon Fiber Material            : " << totCF;
	cout << "\n\n\n\tHighest Material                       : " << material[indexMaxMat];
	cout << "\n\n\tLowest Material                        : " << material[indexMinMat];
	cout << "\n\n\n\t****************************************************************" << endl;
	cout << "\t                          See you again!                        " << endl;
	cout << "\t****************************************************************" << endl;
	
	print << "\n\n\t\tWelcome ADMIN! You have worked hard today.";
	print << "\n\t\tThis the report of the day!";
	
	cout << setprecision << fixed;
	print << "\n\n\t****************************************************************" << endl;
	print << "\t                     - DAILY REPORT ON SALES -                  " << endl;
	print << "\t****************************************************************" << endl;
	print << "\n\tTotal customers                        : " << size;
	print << "\n\tTotal Sales                            : RM " << totSales;
	print << "\n\tAverage Sales                          : RM " << averageSales;
	print << "\n\tTotal phonecases sold                  : " << totCase;
	print << "\n\n\tTotal Plastic Material                 : " << totPL;
	print << "\n\tTotal Thermo-polyurathane Material     : " << totTP;
	print << "\n\tTotal Carbon Fiber Material            : " << totCF;
	print << "\n\n\tHighest Material                       : " << material[indexMaxMat];
	print  << "\n\tLowest Material                        : " << material[indexMinMat];
	sorting (print ,countPL, countTP, countCF);
	print << "\n\n\n\t****************************************************************" << endl;
	print << "\t                          See you again!                        " << endl;
	print << "\t****************************************************************" << endl << endl;


}

//function SEARCHING FOR SELLER
void searching (custInfo customer[],ifstream& find,ofstream& print,int size)
{
	char searchItem[10];
	int loc;
	bool found = false;

		loc = 0;
		
		cout << "\nEnter customer's ID: ";
		find.getline(searchItem,10,';');
		
		while (loc <= size && !found)
		{
			if (strcmp(customer[loc].id,searchItem)==0)
			{
				found = true;
			}
			else
			{
				loc++;
			}
		}
		
		
		if (found)
		{
			cout << "\n\n\t======= CUSTOMER'S INFORMATION ======" << endl;	
			cout << "\tName: " << customer[loc].name<< endl;
			cout << "\tID Code: " << customer[loc].id << endl;
			cout << "\tIC Number: " << customer[loc].ic  << endl;
			cout << "\tAddress: " << customer[loc].add <<endl;
			cout << "\tTotal Price: RM" << customer[loc].totalPrice << endl;
		}
		else
		{
		
			cout << "Customer doen't exist!";
		}


			if (found)
		{
			print << "\n\n\t======= CUSTOMER'S INFORMATION ======" << endl;	
			print << "\tName: " << customer[loc].name<< endl;
			print << "\tID Code: " << customer[loc].id<< endl;
			print << "\tIC Number: " << customer[loc].ic  << endl;
			print << "\tAddress: " << customer[loc].add <<endl;
			print << "\tTotal Price: RM" << customer[loc].totalPrice << endl;
		}
		else
		{
			print << "Customer doen't exist!";
		}

}


//function INPUT
void readInput (custInfo customer[], ifstream &input,int& totCust)
{
	cout << "\n\nEnter name: ";
	input.getline(customer[totCust].name,50, ';');

	cout << "Enter user ID: ";
	input.getline(customer[totCust].id,10, ';');
	
	cout << "Enter IC Number: ";
	input.getline(customer[totCust].ic,20, ';');
	
	cout << "Enter your address: ";
	input.getline(customer[totCust].add,100, ';');
		
}

//display RECEIPT PER CUST
void displayReceipt (custInfo customer[],ofstream &print, int count, char* disText,int& totCust, int size)
{
			
//output (Receipt)
	cout << setprecision(2) << fixed;
	
	cout << "\n\n\t****************************************************************" << endl;
	cout << "\t            - CREATIVE PHONECASE OFFICIAL RECEIPT -             " << endl;
	cout << "\t****************************************************************" << endl;
	cout << "\n\t                BUYER'S PERSONAL INFORMATIONS                     " << endl;
	cout << "\n\tName                           : " << customer[totCust].name;
	cout << "\n\n\tUser ID                        : " << customer[totCust].id;
	cout << "\n\n\tTotal phonecases bought        : " << count;
	cout << "\n\n\tIC Number                      : " << customer[totCust].ic;
	cout << "\n\n\tThe items will delivered to    : " << customer[totCust].add;
	cout << "\n\n\n\t                CHARGES AND ITEMS INFORMATIONS                       " << endl;
	cout << "\n\n\tTax                                : FREE FROM TAX" ;
	cout << "\n\n\tDiscount                           : " << disText;
	cout << "\n\n\tCharges                            : RM 10.00 each";
	cout << "\n\n\tTotal Price                        : RM " << customer[totCust].totalPrice;
	cout << "\n\n\n\t*****************************************************************" << endl;
	cout << "\t                 THANK YOU FOR BUYING WITH US!                  " << endl;
	cout << "\t*****************************************************************" << endl;


	
	cout << setprecision(2) << fixed;
	print << "\n\n\t****************************************************************" << endl;
	print << "\t            - CREATIVE PHONECASE OFFICIAL RECEIPT -             " << endl;
	print << "\t****************************************************************" << endl;
	print << "\n\t                BUYER'S PERSONAL INFORMATIONS                     " << endl;
	print << "\n\tName                           : " << customer[totCust].name;
	print << "\n\tUser ID                        : " << customer[totCust].id;
	print << "\n\tTotal phonecases bought        : " << count;
	print << "\n\tIC Number                      : " << customer[totCust].ic;
	print << "\n\tThe items will delivered to    : " << customer[totCust].add;
	print << "\n\n\t                CHARGES AND ITEMS INFORMATIONS                       " << endl;
	print << "\n\tTax                                : FREE FROM TAX" ;
	print << "\n\tDiscount                           : " << disText;
	print << "\n\tCharges                            : RM 10.00 each";
	print << "\n\tTotal Price                        : RM " << customer[totCust].totalPrice;
	print << "\n\n\t*****************************************************************" << endl;
	print << "\t                 THANK YOU FOR BUYING WITH US!                  " << endl;
	print << "\t*****************************************************************" << endl;

}


//fuction SELECTION
void custSelect(custInfo customer[],ifstream &input2,double& price, int& countPL, int& countTP,int& countCF,int count,int& totCust)
{
			//MODEL SELECTION
				cin.clear();
				cout << "\n\nEnter model code: ";
				input2 >> customer[totCust].modCode;

			if (customer[totCust].modCode == 'A'|| customer[totCust].modCode == 'I')
			{
					
					//MATERIAL SELECTION
						cout << "\n\nEnter material code: ";
						input2 >> customer[totCust].matCode;

						if(strcmp(customer[totCust].matCode, "PL")==0)
						{
							price = 20.00;
							countPL++;
						}
						else if(strcmp(customer[totCust].matCode, "TP")==0)
						{
							price = 35.00;
							countTP++;
						}
						else if (strcmp(customer[totCust].matCode, "CF")==0)
						{
							price = 25.00;
							countCF++;
						}		
				}

}


int main ()
{
									
//NORMAL Declaration
	int count = 0,totCase = 0, limit;
	int countPL = 0, countTP = 0, countCF = 0, totPL, totTP, totCF; 
	double price, charges,off, discount, sellingPrice, discountPrice, averageSales;
	double totSales = 0, totPrice = 0;
	char modName[20],maxMat[20], minM[20], disText[10];
	
	//total customers
	const int size =4;
			 
//ARRAY Declaration
	char tryModel[100][50];
	int b=0;
	int indexMaxMat, indexMinMat;
	int matList[3];
	
//STRUCT Declaration
	custInfo customer[size];
	
	
	//TEXT FILE INPUT / OUTPUT
		ifstream input ("in-info.txt");
		ifstream input2 ("in-select.txt");
		ofstream print ("out-all.txt");
		
		
		//WELCOME & PRICE TABLE & DISCOUNT & CHARGES
		displayHello(print);
		displayOffer(print);
		displayPrice(print);
		displayCharges(print);
		
				
//READ INPUT
	for (int totCust =0; totCust < size; totCust++)
	{
		readInput (customer,input,totCust);
	}
	
for (int totCust =0; totCust < size; totCust++)
{
	
//DISCOUNT OFFER		
	cout << "\n\nDo you have a membership here? < Y - YES / N - NO > ";
	input2 >> customer[totCust].response;
	
	cout << "\n\nHow many do you want to buy?";
	input2 >> limit;
		
	displayMember(customer,disText,totCust);

for(count = 0; count < limit; count++)																						//inner loop for one customer	  
{

	//SELECTION PROCESS
		custSelect(customer,input2,price,countPL, countTP,countCF,count,totCust);
		
				
				
//DISCOUNT
		if (customer[totCust].response == 'Y')
		{
			off = 0.20;
		}
		else if (customer[totCust].response == 'N')
		{
			off = 0.00;
		}	
		
		
//CALCULATE TOTAL PRICE
	sellingPrice = calcSelling(price);			
	totPrice = totPrice + sellingPrice;
	calcDiscount(totPrice,off,discount);		
	customer[totCust].totalPrice = totPrice - discount;

	
} //LOOPING ITEM END
	
	
	//RECEIPT
		displayReceipt (customer,print,count,disText,totCust,size);
	                                                          

//CALCULATE DAILY REPORT	
	totSales = totSales + customer[totCust].totalPrice;
	totCase = totCase + count;
	averageSales = totSales/size;
	
//initialize value for count material
	totPL = countPL;
	totTP = countTP;
	totCF = countCF;

		input.close();
		
	
//reset to zero for next customer
	totPrice = 0;
	
//func call ARRAY (MIN MAX MATERIAL)
	indexMaxMat = findHighMat(countPL, countTP, countCF);
	indexMinMat = findLowMat(countPL, countTP, countCF);

} //ONEDAY LOOP ENDS

	//DAILY REPORT
		displayLoading();
		displayReport(print, totSales, totCase,averageSales ,totPL, totTP, totCF, indexMaxMat, indexMinMat,countPL,countTP,countCF,size);
		
	//SEARCHING OPTION
		ifstream find ("in-search.txt");
		const int cust = 2;
		
		for (int i =0; i < cust;i++)
			searching(customer,find,print,size);
		
		find.close();
		print.close();	
		
	return 0;
}
