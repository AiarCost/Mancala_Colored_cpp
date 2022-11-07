#include <iostream>
#include <string>

using namespace std;

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

int main() {

	BaseStoneClass TestStone;

	TestStone.StoneAbility();
	cout << TestStone.GetStoneType();

}