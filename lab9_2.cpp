#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");
	string textline = "";
	string text;
	while(getline(source,text)){
		textline += text;
		textline += "\n";
	}
	dest << "-------------------- BOOM ---------------------\n";
	dest << textline;
	dest << "-------------------- HA!! ---------------------";
    source.close();
    dest.close();
	return 0;
}
