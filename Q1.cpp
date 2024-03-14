#include<iostream>
using namespace std;
class Lamborghini{
	string colour;
	int cubicCapacity;
	int numberOfseats;
	int YearOfManufacture;
	int engineNumber;
	int frameNumber;
	string ownerName;
public:

	Lamborghini(string clr = "Hot Red", int CC = 2000, int NOS = 2, int y = 0, int e = 0, int f = 0, string o = "XYZ") {
		colour = clr;
		cubicCapacity = CC;
		numberOfseats = NOS;
		YearOfManufacture = y;
		engineNumber = e;
		frameNumber = f;
		ownerName = o;
	}
	Lamborghini(const Lamborghini &obj1) {
		colour = obj1.colour;
		cubicCapacity = obj1.cubicCapacity;
		numberOfseats = obj1.numberOfseats;
	}
	void setYOM(int y) {
		YearOfManufacture = y;
	}
	void setEN(int e) {
		engineNumber = e;
	}
	void setFN(int f) {
		frameNumber = f;
	}
	void setON(string o) {
		ownerName = o;
	}
	int getYOM() {
		return YearOfManufacture;
	}
	int getEN() {
		return engineNumber;
	}
	int getFN() {
		return frameNumber;
	}
	string getON() {
		return ownerName;
	}
	void Print() {
		cout << "Your Lamborghini Owner Name is " << ownerName << endl;
		cout << "Color is " << colour << endl;
		cout << "It's Cubic Capacity is " << cubicCapacity << endl;
		cout << "It have " << numberOfseats << " seats" << endl;
		cout << "It's Year of manufacture is " << YearOfManufacture << endl;
		cout << "It's Engine Number is " << engineNumber << endl;
		cout << "It's Frame Number is " << frameNumber << endl;
		cout << endl << endl;
	}

};
int main() {
    Lamborghini l;
    l.Print();
    cout << endl;
	Lamborghini l1;
	l1.setON("Mujtaba");
	l1.setYOM(1992);
	l1.setEN(283653);
	l1.setFN(462354);
	l1.getEN();
	l1.getFN();
	l1.getON();
	l1.getYOM();
	l1.Print();


	return 0;
}
