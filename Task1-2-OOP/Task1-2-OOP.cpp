//Create class Student that contains the following :
			//// attributes
//-Id
//- Name
//- Marks[5]
		   //// methods
//- Default constructor
//- Parameterized constructor = > Student(int i, string n)
//- setId, getId
//- setName.getName
//- read_marks() = > method that read 5 numbers from users and then
//store each number in marks array = > read student marks
//- printInfo() = > method print student’s information(id and name ang avg)
//	- calc_avg() = > method that calc student avg and return it

#include <iostream>
using namespace std;

class Student {
private:
	// attributes
	int Id;
	string Name;
	double Marks[5];
public:
	Student() {
		//default
		Id = 0;
		Name = "";
		for (int i = 0; i < 5; ++i) {
			Marks[i] = 0;
		}
	}
	Student(int i, string n) {
		//parametrized
		Id = i;
		Name = n;
	}
	//Setters
	void setId(int i) { Id = i; }
	void setName(string n) { Name = n; }
	//Getters
	int getId() { return Id; }
	string getName() { return Name; }

	//- read_marks() = > method that read 5 numbers from users and then store each number in marks array = > read student marks
	void read_marks() {
		double m[5];
		for (int i = 0; i < 5; i++) {
			cin >> m[i];
			Marks[i] = m[i];
		}
	}
	double store_marks() {
		for (int i = 0; i < 5; i++) {
			return Marks[i];
		}
	}
	double calc_avg() {
		double sum = 0;
		for (int i = 0; i < 5; i++) {
			sum += Marks[i];
		}
		double avg = sum / 5;
		return avg;
	}
	void printInfo() {
		cout << "ID : " << Id << " " << "Name : " << Name << " ";
		for (int i = 0; i < 5; i++) {
			cout << Marks[i] << " ";
		} 
		cout << "Avg : " << calc_avg() << endl;
	}


};

//Define function get_max(), pass your array of objects to the function, and return the student that has maximum gpa .
Student get_max(Student students[], int num) {
	Student maxSt;
	double maxAvg = 0.0;

	for (int i = 0; i < num; ++i) {
		double avg = students[i].calc_avg();
		if (avg > maxAvg) {
			maxAvg = avg;
			maxSt = students[i];
		}
	}
	return maxSt;
}
//In main :
//● Define an array of 3 elements of type Student .
//● Ask the user to enter their information .
//● Print information for the student that has a maximum gpa .

int main()
{
	/*Student a;
	a.setId(1);
	a.setName("Am");
	a.read_marks();
	a.printInfo();	*/

	Student st[3];
	for (int i = 0; i < 3; i++) {
		int id;
		string name;
		double marks[5];
		cin >> id >> name;
		st[i].read_marks();
		st[i].setId(id);
		st[i].setName(name);
		cout << st[i].calc_avg()<< endl;
	}
		get_max(st, 3).printInfo();
}