#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main(){
    int count = 0;
    float sum = 0;
    float mean = 0;
    string textline;
    ifstream source;
	source.open("score.txt");
    while (getline(source,textline)){
    	sum += atof(textline.c_str());
    	count++;
	}
		mean = sum/count;
	cout << "Number of data = " << count << endl; 
	cout << setprecision(3);
    cout << "Mean = " << mean << endl;;
    source.close();
	source.open("score.txt");	
	float Mean = sum/count;
	sum = 0;
	count = 0;
	float SD = 0;
	while (getline(source,textline)){
    	sum += ((atof(textline.c_str())-Mean))*((atof(textline.c_str())-Mean));
    	count++;
	}
	SD = sum/count;
	cout << "Standard deviation = " << sqrt(SD);
	source.close();
	return 0;
}