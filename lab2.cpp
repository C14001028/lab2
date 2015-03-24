#include "lab2.h"
#include <fstream>
#include <string>
int main(){
	Body bdy;
	string Bs;
	double BMIn;
	double height,mass;
	ifstream inFile("file.in",ios::in);
	ofstream outFile("file.out",ios::out);
	while(inFile >> height >> mass){
		if(height==0&&mass==0) break;
		bdy.get(height,mass);
		Bs = bdy.BMIs();
		BMIn = bdy.BMIn();
		outFile << BMIn << Bs <<endl;
	}
}
