#include<iostream>
//function for calculating the volume
int result(float a, float b) {
	return 3.14*a*a*b;
}
//main program
int main() {
	float radius;
	float height;
	
	//prompt the user for input
	std::cout<<"input radius: ";
	std::cin>>radius;
	
	std::cout<<"input the height: ";
	std::cin>>height;
	
	//call the function
	float volume=result(radius , height);
	std::cout<<"volume: " <<volume;
	
	return 0;
}