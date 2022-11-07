#pragma once
#include <iostream>
#include <string>

using namespace std;


/*ABS Stone Class*/
class BaseStoneClass {

private:
	string StoneType;
public:
	BaseStoneClass(string StoneType);
	string GetStoneType();
	virtual void StoneAbility();

};

BaseStoneClass::BaseStoneClass(string StoneType = "DefaultStone") {
	this->StoneType = StoneType;
}

string BaseStoneClass::GetStoneType() {
	return StoneType;
}

void BaseStoneClass::StoneAbility() {
	cout << "Virtual Function running." << endl;
}


/*****Green Stone Class*****/
class GreenStoneClass : public BaseStoneClass {
	void StoneAbility();
};

void GreenStoneClass::StoneAbility() {
	cout << "Green Stone Does nothing as an ability. It is a normal stone." << endl;
}


/*Red Stone Class*/
class RedStoneClass : public BaseStoneClass {

	void StoneAbility();
};

void RedStoneClass::StoneAbility() {
	cout << "Red Stone class blocks opposite mancala pool." << endl;
}

/*Blue Stone Class*/
class BlueStoneClass : public BaseStoneClass {
	void StoneAbility();
};

void BlueStoneClass::StoneAbility() {
	cout << "Blue Stone allows stone to move forward or backward one." << endl;
}


/*Orange Stone Class*/
class OrangeStoneClass : public BaseStoneClass {
	void StoneAbility();
};

void OrangeStoneClass::StoneAbility() {
	cout << "Ornage stone allows stone to move forward or backward one." << endl;
}