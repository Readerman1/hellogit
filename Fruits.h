#ifndef Fruits_H
#define Fruits_H
#include <string>
Class Fruits{
	private:

	string type;
	int NumberF;

	public:
	Fruits(){
		type="Apple";
		NumberF=0;
	}
	~Fruits(){
		type="";
		NumberF=-1;
	}
	void setFruit(std::string FruitType){
		type=FruitType;
	}	
	void setAmt(int AmtFruit){
		NumberF=AmtFruit;
	}
	string getName(){
	return type;
	}
	int getAmt(){
	return NumberF;
	}
};
#endif
