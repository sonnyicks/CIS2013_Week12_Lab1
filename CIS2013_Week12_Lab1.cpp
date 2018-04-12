#include <iostream>
#include <cstring>
using namespace std;

class Human {
	private:
		int legs;
		int arms;

	public:
	
		string hair;
		string name;
		
		Human(){ //constructor named same as class; will run immediately
			setName();
			setHair();
			legs = 2;
			arms = 2;
		}
		
		int getLegs(){
			return legs;
		}
		int getArms(){
			return arms;
		}
		
		void setName(){
			cout << "What is the Human's name?:";
			cin >> name;
		}
		void setHair(){
			cout << "Wht hair color do you want?: ";
			cin >> hair;
		}
		
};

int main(){
	
	Human bob;
	Human sue;
	
	cout << bob.name << " has " << bob.getLegs() << " legs and " << bob.getArms() 
		 << " arms and their hair color is " << bob.hair << endl;
		 
	cout << sue.name << " has " << sue.getLegs() << " legs and " << sue.getArms() 
		 << " arms and their hair color is " << sue.hair;
	
	
	return 0;
}
