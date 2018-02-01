#include <iostream>
#include <vector>
3include <string>
#include "Fruits.h"
using namespace std;
int main(){
	vector <Fruits>myFruits;//New Vector
	string FruitType;
	int Amtfruit;
	for(i=0;i<4;i++){
	cout<<"Enter a Fruit";
	cin>> fruitType;
	cout<<"Enter number of fruits";
	cin>>Amtfruit;
	Fruit market=new Fruits();
	market.setFruit(FruitType);
	market.setAmt(AmtFruit);
	myfruits.push_back(market);
	}
	for(int x=0;X=myFruits.size();x++){
		cout<<myFruits[x].getName()<<endl;
		cout<<myFruits[x].getAmt()<<endl;
	}
}
