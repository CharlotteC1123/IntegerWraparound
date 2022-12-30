#include <iostream>
#include<string>
using namespace std;
void displaymenu()
{ cout<<"===================================================== \n";
cout<<" \t\tMENU \t \n ";
cout<<"===================================================== \n";
cout<<" 1.Calculate first quarter new employees\n";
cout<<" 2.Calculate second quarter new employees\n";
cout<<" 3.Calculate third quarter new employees\n";
cout<<" 4.Calculate fourth quarter new employees\n";
cout<<" 5.Calculate total year new employees \n";
}
void CalcFirstQuarter()
{
cout<< "You have selected calculate first quarter : \n";
short getMonthlyEmployeeIntakeJan;
printf("Enter employee intake for January: ");
scanf("%d", &getMonthlyEmployeeIntakeJan);  
    
short getMonthlyEmployeeIntakeFeb;
printf("Enter employee intake for February: ");
scanf("%d", &getMonthlyEmployeeIntakeFeb);  
    
short getMonthlyEmployeeIntakeMar;
printf("Enter employee intake for March: ");
scanf("%d", &getMonthlyEmployeeIntakeMar);  

short quarterTotalEmployees = getMonthlyEmployeeIntakeJan + getMonthlyEmployeeIntakeFeb + getMonthlyEmployeeIntakeMar;
printf("First quarterly total: %d", quarterTotalEmployees);
}
void CalcSecondQuarter()
{
cout<< "You have selected calculate second quarter : \n";
short getMonthlyEmployeeIntakeApr;
printf("Enter employee intake for April: ");
scanf("%d", &getMonthlyEmployeeIntakeApr);  
    
short getMonthlyEmployeeIntakeMay;
printf("Enter employee intake for May: ");
scanf("%d", &getMonthlyEmployeeIntakeMay);  
    
short getMonthlyEmployeeIntakeJun;
printf("Enter employee intake for June: ");
scanf("%d", &getMonthlyEmployeeIntakeJun);  

short quarterTotalEmployees = getMonthlyEmployeeIntakeApr + getMonthlyEmployeeIntakeMay + getMonthlyEmployeeIntakeJun;
printf("Second quarterly total: %d", quarterTotalEmployees);
}
void CalcThirdQuarter()
{
cout<< "You have selected calculate third quarter :\n";
short getMonthlyEmployeeIntakeJul;
printf("Enter employee intake for July: ");
scanf("%d", &getMonthlyEmployeeIntakeJul);  
    
short getMonthlyEmployeeIntakeAug;
printf("Enter employee intake for August: ");
scanf("%d", &getMonthlyEmployeeIntakeAug);  
    
short getMonthlyEmployeeIntakeSep;
printf("Enter employee intake for September: ");
scanf("%d", &getMonthlyEmployeeIntakeSep);  

short quarterTotalEmployees = getMonthlyEmployeeIntakeJul + getMonthlyEmployeeIntakeAug + getMonthlyEmployeeIntakeSep;
printf("Third quarterly total: %d", quarterTotalEmployees);
}
void CalcFourthQuarter()
{
cout<< "You have selected calculate fourth quarter :\n";
short getMonthlyEmployeeIntakeOct;
printf("Enter employee intake for October: ");
scanf("%d", &getMonthlyEmployeeIntakeOct);  
    
short getMonthlyEmployeeIntakeNov;
printf("Enter employee intake for November: ");
scanf("%d", &getMonthlyEmployeeIntakeNov);  
    
short getMonthlyEmployeeIntakeDec;
printf("Enter employee intake for December: ");
scanf("%d", &getMonthlyEmployeeIntakeDec);  

short quarterTotalEmployees = getMonthlyEmployeeIntakeOct + getMonthlyEmployeeIntakeNov + getMonthlyEmployeeIntakeDec;
printf("Fourth quarterly total: %d", quarterTotalEmployees);
}
void CalcTotalYear()
{
cout<< "You have selected calculate total year :\n";
short getMonthlyEmployeeIntakeJan;
printf("Enter employee intake for January: ");
scanf("%d", &getMonthlyEmployeeIntakeJan);  
    
short getMonthlyEmployeeIntakeFeb;
printf("Enter employee intake for February: ");
scanf("%d", &getMonthlyEmployeeIntakeFeb);  
    
short getMonthlyEmployeeIntakeMar;
printf("Enter employee intake for March: ");
scanf("%d", &getMonthlyEmployeeIntakeMar);  

short getMonthlyEmployeeIntakeApr;
printf("Enter employee intake for April: ");
scanf("%d", &getMonthlyEmployeeIntakeApr);  
    
short getMonthlyEmployeeIntakeMay;
printf("Enter employee intake for May: ");
scanf("%d", &getMonthlyEmployeeIntakeMay);  
    
short getMonthlyEmployeeIntakeJun;
printf("Enter employee intake for June: ");
scanf("%d", &getMonthlyEmployeeIntakeJun); 

short getMonthlyEmployeeIntakeJul;
printf("Enter employee intake for July: ");
scanf("%d", &getMonthlyEmployeeIntakeJul);  
    
short getMonthlyEmployeeIntakeAug;
printf("Enter employee intake for August: ");
scanf("%d", &getMonthlyEmployeeIntakeAug);  

short getMonthlyEmployeeIntakeSep;
printf("Enter employee intake for September: ");
scanf("%d", &getMonthlyEmployeeIntakeSep);  
    
short getMonthlyEmployeeIntakeOct;
printf("Enter employee intake for October: ");
scanf("%d", &getMonthlyEmployeeIntakeOct);  
    
short getMonthlyEmployeeIntakeNov;
printf("Enter employee intake for November: ");
scanf("%d", &getMonthlyEmployeeIntakeNov); 

short getMonthlyEmployeeIntakeDec;
printf("Enter employee intake for December: ");
scanf("%d", &getMonthlyEmployeeIntakeDec);  

short quarterTotalEmployees = getMonthlyEmployeeIntakeJan 
+ getMonthlyEmployeeIntakeFeb + getMonthlyEmployeeIntakeMar 
+ getMonthlyEmployeeIntakeApr + getMonthlyEmployeeIntakeMay 
+ getMonthlyEmployeeIntakeJun + getMonthlyEmployeeIntakeJul 
+ getMonthlyEmployeeIntakeAug + getMonthlyEmployeeIntakeSep 
+ getMonthlyEmployeeIntakeOct + getMonthlyEmployeeIntakeNov + getMonthlyEmployeeIntakeDec;
printf("Quarterly total: %d", quarterTotalEmployees);
}

int main()
{ 
 
string st[20];
int itemcount = 0;
 
displaymenu(); 
int yourchoice;
cout<<"Enter your choice(1-5):";
cin>>yourchoice;
switch (yourchoice)
{
case 1: CalcFirstQuarter(); break;
case 2: CalcSecondQuarter();break;
case 3: CalcThirdQuarter(); break;
case 4: CalcFourthQuarter(); break;
case 5: CalcTotalYear(); break;
default: cout<<"invalid"; break;
}
}