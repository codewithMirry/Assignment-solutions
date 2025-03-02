#include <iostream>
class Person {
	protected:
		std::string name;
	
	public:
		void setName (std::string n) {
			name=n;
		}
		std::string getName() {
			return name;
		}
};

class LibraryMember :public Person {
	private:
		int memberID;
		int booksBorrowed;
		
	//constructor
	public:
	LibraryMember(std::string n , int m , int b) {
		name=n;
		memberID=m;
		booksBorrowed=b;
	}
	public:
		int getMemberID() {
			return memberID;
		}
		int getBooksBorrowed() {
			return booksBorrowed;
		}
};

class PremiumMember :public LibraryMember{
	private:
		double membershipFee;
	public:
		PremiumMember(std::string n , int m , int b , double f) 
			:LibraryMember(n , m , b) {
				membershipFee=f;
			}
	double getMembershipFee() {
		return membershipFee;
	}			
};

int main() {
	PremiumMember premiumMember1 ("Miriam" , 145 , 14 , 20.98);
	std::cout<<"Name: "<<premiumMember1.getName()<<std::endl;
	std::cout<<"Member's ID: "<<premiumMember1.getMemberID()<<std::endl;
	std::cout<<"Books borrowed: "<<premiumMember1.getBooksBorrowed()<<std::endl;
	std::cout<<"Membership fee: "<<premiumMember1.getMembershipFee()<<std::endl;
	
	return 0;
}
	
		

























