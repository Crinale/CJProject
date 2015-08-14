#include <iostream>
#include <string>
#include <fstream>


using namespace std;

int fileStuff();

int main(){

fileStuff();


}


// file opening stuff so that it can be used in putPoint.......
  int fileStuff(){
        ifstream file("test.csv");
        string value;
			while (!file.eof()){

				getline(file,value,',');
				cout << value;

			}

return 0;
		}
/*
		//this part is for putting points into open gl
 		putPoint(int a,int b, int c){


 		}
*/
