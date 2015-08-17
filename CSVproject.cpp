#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <queue>


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
				int number;
				istringstream (value) >> number;
				queue< int > arr;
                arr.push(number);
                cout << arr.front() << endl ;
			}
    return 0;
  }

/*
		//this part is for putting points into open gl
 		putPoint(int x,int y, int z){


 		}
*/
