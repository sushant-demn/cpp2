#include<GL/glut.h>
#include<iostream>
using namespace std;
void initialize()
{
	glClearColor(1,1,1,1);
	glClear(GL_COLOR_BUFFER_BIT);
	gluOrtho2D(0,600,0,600);
}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glFlush();	
}
void mainMenu(int choice){
	switch(choice){
		case 1: // Pixel;
		glPointSize(10);
		glColor3f(1,1,0);
		glBegin(GL_POINTS);
		glVertex2i(100,100);
		glEnd();
		break;
		case 2: //Line
		glLineWidth(3);
		glColor3f(1,0,0);
		glBegin(GL_LINES);
		glVertex2i(10,10);
		glVertex2i(300,10);
		glEnd();
		break;
		case 3: //Triangle
		glColor3f(0,0,1);
		glBegin(GL_TRIANGLES);
		glVertex2i(50,50);
		glVertex2i(300,50);
		glVertex2i(150,100);
		glEnd();
		break;
		case 4: //Polygon
		glColor3f(0,1,1);
		glBegin(GL_POLYGON);
		glVertex2i(150,150);
		glVertex2i(400,150);
		glVertex2i(400,250);
		glVertex2i(150,250);
		glEnd();
		break;
		case 5: //Exit
		exit(0);
		break;
	}
}
int main(int argc,char **argv){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowPosition(0,0);
	glutInitWindowSize(600,600);
	glutCreateWindow("SIB50 Menu");
	initialize();
	glutCreateMenu(mainMenu);
	glutAddMenuEntry("Pixel", 1);
	glutAddMenuEntry("Line", 2);
	glutAddMenuEntry("Triangle", 3);
	glutAddMenuEntry("Polygon", 4);
	glutAddMenuEntry("Exit", 5);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
