#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <queue>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>


using namespace std;


int fileStuff();
int queueThingy(int x1,int y1,int z1);


static void display(void)
{

}




int main(int argc,char **argv){
    fileStuff();

    glutInit(&argc, argv);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("IT WORKS!");
    glutDisplayFunc(display);
    glutMainLoop();

    return EXIT_SUCCESS;

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


  }




int queueThingy(int x1,int y1,int z1){
cout << x1<<y1<<z1<<endl;
}


/*
		//this part is for putting points into open gl
 		putPoint(int x,int y, int z){


 		}
*/
