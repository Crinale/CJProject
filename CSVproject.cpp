#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <queue>


using namespace std;


int fileStuff();
int queueThingy(int x1,int y1,int z1);
int main(){

fileStuff();

}


// file opening stuff so that it can be used in putPoint.......
    int fileStuff(){
        ifstream file("test.csv");
        string value;
        int number;
        queue< int > arr;
			while (!file.eof()){
				getline(file,value,',');
				istringstream (value) >> number;
                arr.push(number);
   			}

   			for(int i= 0; i < 4 ; i++){
                int x = arr.front();
                arr.pop();
                int y = arr.front();
                arr.pop();
                int z = arr.front();
                arr.pop();
                queueThingy(x,y,z);
   			}



    return 0;
  }




int queueThingy(int x1,int y1,int z1){
cout << x1<<y1<<z1<<endl;
}


/*
		//this part is for putting points into open gl
 		putPoint(int x,int y, int z){


 		}
*/
