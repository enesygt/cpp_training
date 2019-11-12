#include <iostream>
#include <string>
#include <fstream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	const int num_of_names =50;
	
	int n =0;
	string names[num_of_names];
	string fileName;
	ifstream inputFile;

	cout<<"Enter name of input file: ";
	
	getline(cin,fileName);
	
	inputFile.open(fileName.c_str());
	
	if(inputFile.fail())
	{
		cout<<"This file is not exist.";
	}
if(getline(inputFile, names[n]))
			n++;
			if(getline(inputFile, names[n]))
			n++;

/*	if(inputFile>>names[n]){
		n++;
	}*/
	cout<<n<<"lines of text read from the input file.\n"
<< "Here are the unsorted names:\n"
        << "--------------------------- \n";
   for (int i = 0; i < n; i++) {
        cout << "[" << (i+1) << "] " << names[i] << endl;
    }
	return 0;
}
