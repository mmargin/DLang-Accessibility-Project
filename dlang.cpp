#include <iostream>
		
using namespace std;
		
		
double balance(double & bal, double & annual_interest, double & mon_payment, int & num_months) {
		
    double monthly_interest = (annual_interest / 100) / 12;
		
    bal -= mon_payment;
		
    bal += (monthly_interest * bal);
		
    return bal;
		
    
		
}
		
		
void input(double & loan, double & annual_int, double & mon_pay, int & num_mon) {
		
    cout << "Enter amount of loan: " << endl;
		
    cin >> loan;
		
    cout << "Enter annual interest rate: " << endl;
		
    cin  >> annual_int;
		
    cout << "Enter monthly payment: " << endl;
		
    cin  >> mon_pay;
		
    cout << "Enter number of months to calculate: " << endl;
		
    cin  >> num_mon;
		
}
		
		
void print_out(double balance){
		
    cout << "Balance remaining after ___ payment: " << balance << endl;
		
}
		
		
int main() {
		
    double loan_amount = 0;
		
    double annual_interest = 0;
		
    double mon_payment = 0;
		
    int num_months = 0;
		
		
    input(loan_amount, annual_interest, mon_payment, num_months);
		
		
    for(int i = 0; i < num_months; ++i) {
		
        print_out(balance(loan_amount, annual_interest, mon_payment, num_months));
		
    }
		
		
    return 0;

