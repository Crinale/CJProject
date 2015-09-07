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
static void display(void);
void reshape(int width,int height);


int main(int argc,char **argv){
    fileStuff();
    glutInit(&argc, argv);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutInitDisplayMode(GLUT_RGB);
	glutCreateWindow("CSV Thingy");
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-5.0,5.0,-5.0,5.0,-5.0,5.0);
	glClearColor(0.5, 0.5, 0.5, 0.5);
	glutMainLoop();
	return 0;

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


static void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glBegin(GL_TRIANGLES);
    glColor3f(.1,.2,.3);
    glVertex3f(-1,0,0);
    glVertex3f(1,0,0);
    glVertex3f(0,1,0);
    glEnd();
    //glColor4f(1.0, 0.0, 0.0, 1.0);
    //glutSolidTeapot(2);
    glFlush();
}

void reshape(int width, int height)
{
    glViewport(0,0,width,height);
}
