#include<iostream>
using namespace std;
class Student {
	int* stuMarks;
public:
	Student() {
		stuMarks = new int[5];
		for (int i = 0; i < 5; i++) {
			stuMarks[i] = 0;
		}
	}
	void setMarks(int marks, int ii) {
		for (int i = 0; i < 5; i++) {
			stuMarks[ii] = marks;
		}
	}
	void Print() {
		for (int i = 0; i < 5; i++) {
			cout << "Number "<< i << " student Marks are " << stuMarks[i];
			cout << endl;
		}
		cout << endl;
	}
	void Deallocate() {
		delete[] stuMarks;
		stuMarks = NULL;
	}
	Student(Student &s) {
		stuMarks = new int[5];
		for (int i = 0; i < 5; i++) {
			stuMarks[i] = s.stuMarks[i];
		}
	}
	~Student() {
    }
};
int main() {
	Student s1;
	int marks, index;
	for (int i = 0; i < 5; i++) {
		marks = 0, index = 0;
		cout << "Enter Marks : ";
		cin >> marks;
		cout << "Enter Index : ";
		cin >> index;
		s1.setMarks(marks, index);
		cout << endl;
	}
	cout << "Class C1 Marks" << endl << endl;;
	s1.Print();
	cout << endl << endl;
	Student s2 = s1;
	cout << "Class C2 Marks" << endl << endl;
	s2.Print();
	cout << endl << endl;
	cout << "When Deallocated and After Deep Copy " << endl;
	s1.Deallocate();
	s2.Print();
	cout << endl << endl;
}