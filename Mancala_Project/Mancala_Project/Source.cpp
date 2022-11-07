#include <iostream>
#include "MancalaPool.h"
using namespace std;




int main() {

	BaseStoneClass testStone("Green"), new RedStoneClass("red");
	vector<BaseStoneClass> testPool = {};
	cout << "TestStoneName: " << testStone.GetStoneType() << endl;
	cout << "TestStoneFcn: ";
	testStone.StoneAbility();

	//cout << "Hello everyone and welcome to mancala!" << endl;
}

void MancalaBoardASCIICreate() {

	char MancalaBoard[20][20] = { {'+', '+','+',},{'+','+','+'},{'+','+','+'} };
}

void PrintOutBoard() {


}