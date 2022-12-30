#include <stdio.h>
int main()
{
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
    printf("Quarterly total employees: %d", &quarterTotalEmployees);
    
    return 0;
}