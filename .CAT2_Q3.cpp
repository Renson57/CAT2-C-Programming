#include <stdio.h>
int main(){
	float hours_worked, hourly_wage, gross_pay, taxes, net_pay;
	float overtime_rate=1.5, tax_rate=0.15, tax_rate2 = 0.20;
	float tax_bracket = 600;
	
	//Prompt for user to input values
	printf("Enter hours worked in week: ");
	scanf("%f", &hours_worked);
	
	printf("Enter hourly wage: ");
	scanf("%f", &hourly_wage);
	
	//Calculate the gross pay
	if(hours_worked > 40){
		gross_pay = (40 * hourly_wage) +((hours_worked - 40) * hourly_wage * overtime_rate);
	}else{
		gross_pay = hours_worked * hourly_wage;
	}
	
	//Calculate taxes
	if(gross_pay <= tax_bracket){
		taxes = gross_pay *tax_rate;
	}else {
		taxes = (tax_bracket * tax_rate)+((gross_pay - tax_bracket) *tax_rate2);
		}
		
		//Calculate net pay
		net_pay = gross_pay -taxes;
		
		//Print the results
		printf("Gross pay: $%.2f\n",gross_pay);
		printf("Taxes: $%.2f\n",taxes);
		printf("Net pay: $%.2f\n",net_pay);
		
		return 0;
		
}