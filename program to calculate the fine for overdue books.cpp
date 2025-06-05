#include <iostream>
int result(int a , int b) {
	return a-b;
}

int main() {
	int bookID;
	int dueDate;
	int returnDate;
	int charges_per_day;
	int fine;
	
	//prompt input from the user
	std::cout<<"input bookID: ";
	std::cin>>bookID;
	
	std::cout<<"input the return date: ";
	std::cin>>returnDate;
	
	std::cout<<"input the due date: ";
	std::cin>>dueDate;
	
	//calculate overdue days
	int overdueDays=result(returnDate , dueDate);
	std::cout<<"the overdue number of days are: "<<overdueDays<<std::endl;
	
	//determine the fine rates
	if(overdueDays>=1&&overdueDays<=7) {
		fine=overdueDays*20;
	} else if (overdueDays>=8&&overdueDays<=14) {
		fine=overdueDays*50;
	} else if (overdueDays>=15) {
		fine=overdueDays*100;
	} else {
		std::cout<<"you have no overdue date ";
	}
	std::cout<<"your total fine is: " <<fine<<std::endl<<std::endl;
	
	//display of everything 
	std::cout<<"BookID: "<<bookID<<std::endl;
	std::cout<<"Due date: "<<dueDate<<std::endl;
	std::cout<<"Return date: "<<returnDate<<std::endl;
	std::cout<<"Days Overdue: "<<overdueDays<<std::endl;
	std::cout<<"Fine: "<<fine<<std::endl;
		
	return 0;
}













