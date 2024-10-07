#include <iostream>
#include <string>
using namespace std;
const int MAX_CUSTOMERS = 20;
struct Customer {
    int accountNumber;
    string name;
    double balance;
};
void printCustomersWithLowBalance(Customer customers[], int numCustomers) {
    cout << "Customers with balance below Rs. 100:" << endl;
    for (int i = 0; i < numCustomers; i++) {
        if (customers[i].balance < 100.0) {
            cout << "Account Number: "<<customers[i].accountNumber<<", Name: "<<customers[i].name<<std::endl;
        }
    }
}
void processTransaction(Customer customers[],int numCustomers,int accountNumber,double amount,int code)
{
    for (int i = 0; i < numCustomers; i++) {
        if (customers[i].accountNumber == accountNumber) {
            if (code == 1) {
                customers[i].balance += amount;
                cout << "Deposit of Rs. "<<amount<<" to Account Number "<<accountNumber<<" is successful."<<endl;
            } else if (code == 0) {
                if (customers[i].balance >= amount) {
                    customers[i].balance -= amount;
                    cout<<"Withdrawal of Rs. "<<amount<<" from Account Number "<<accountNumber<<" is successful."<<endl;
                }
                else {
                    cout<<"Insufficient balance for withdrawal from Account Number "<<accountNumber<<"." << endl;
                }
            }
            else {
                cout<<"Invalid code. Use 1 for deposit or 0 for withdrawal." << endl;
            }
            return;
        }
    }
    cout<<"Account Number "<<accountNumber<<" not found."<<endl;
}
int main()
{
    Customer customers[MAX_CUSTOMERS] = {
        {101, "Alice", 500.0},
        {102, "Bob", 75.0},
        {103, "Charlie", 150.0},
    };
    int numCustomers = 3;
    printCustomersWithLowBalance(customers, numCustomers);
    processTransaction(customers, numCustomers, 101, 200.0, 1);
    processTransaction(customers, numCustomers, 102, 50.0, 0);
    processTransaction(customers, numCustomers, 104, 100.0, 1);
    return 0;
}