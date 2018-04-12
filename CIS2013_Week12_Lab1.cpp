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
//inheritance
class Man: public Human {//Man inherits pieces from these other classes
	public:
		bool hasEgo = true;
		string pee = "standing";
};

class Woman: public Human {//Man inherits pieces from these other classes
	public:
		bool hasEgo = false;
		string pee = "sitting";
};

int main(){
	
	Man bob;
	Woman sue;
	
	cout << bob.name << " has " << bob.getLegs() << " legs and " << bob.getArms() 
		 << " arms and their hair color is " << bob.hair << endl;
		 
	cout << bob.name << " has an ego?" << bob.hasEgo << " and pees " 
		 << bob.pee << endl;
		 
	cout << sue.name << " has " << sue.getLegs() << " legs and " << sue.getArms() 
		 << " arms and their hair color is " << sue.hair;
	cout << sue.name << " has an ego? " << sue.hasEgo;
	
	
	return 0;
}
