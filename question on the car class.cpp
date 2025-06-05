#include <iostream> 
class Car {
public:
	std::string brand, model;
	float price;
	int mileage;
//public member function 'display'
void display(std::string brand,std::string model, float price, int mileage) {
	std::cout<<"Brand: " << brand <<std::endl;
	std::cout<<"Model: " << model <<std::endl;
	std::cout<<"Price: " <<price <<std::endl;
	std::cout<<"Mileage: " <<mileage <<std::endl;
}	
//public member function 'drive'
//d=distance driven , m=mileage , u=updated mileage
int u;
int drive(int d, int m) {
	return u=d+m;
	std::cout<<"Updated mileage is: "<<u;
}

};

int main(){
	
//object creation of the class Car
	Car myCar;
	
	//call the display function
	myCar.display("toyota","corolla",20000,5000);
	
	//call the drive function
	int distanceDriven=150;
	int myMileage=5000;
	int updatedMileage=myCar.drive(150, 5000);
	std::cout<<"The updated mileage is: "<<updatedMileage<<std::endl;
	
	return 0;
}



















