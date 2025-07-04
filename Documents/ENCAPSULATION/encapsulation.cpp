#include <iostream>
//enforce encapsulation
class BankAccount {
	private:
		std::string accountHolder;
		double balance;
//public functions to initialize private variables		
	public:	
	//getter for accountHolder
        std::string getAccountHolder() {
        	return accountHolder;
		}	
	//setter for accountHolder
	void setAccountHolder(std::string a) {
		accountHolder=a;
	}
	//getter for balance
	double getBalance() {
		return balance;
	}
	//setter for balance
	void setbalance(double b) {
		balance=b;
	}
};

int main() {
	BankAccount bankaccount;
	//using the setters to set values
	bankaccount.setAccountHolder("Miriam");
	bankaccount.setbalance(12000);
	//displaying values using the getters
	std::cout<<"The account holder: "<<bankaccount.getAccountHolder() <<std::endl;
	std::cout<<"The balance is: "<<bankaccount.getBalance() <<std::endl;
	
	return 0;
}