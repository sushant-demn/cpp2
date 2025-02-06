#include <GL/glut.h>
#include <math.h>
#include <cmath>
#include <iostream>
   double radians = 45 * M_PI / 180.0;
int centerX, centerY, radiusX, radiusY, radius;
bool firstClick = false;
using namespace std;
void drawCircle(int xc, int yc, int r)
{
    int x = 0, y = r;
    int d = 3 - (2 * r);

    while (x <= y)
    {

        glBegin(GL_POINTS);
        glVertex2i(xc + x, yc + y);
        glVertex2i(xc - x, yc + y);
        glVertex2i(xc + x, yc - y);
        glVertex2i(xc - x, yc - y);
        glVertex2i(xc + y, yc + x);
        glVertex2i(xc - y, yc + x);
        glVertex2i(xc + y, yc - x);
        glVertex2i(xc - y, yc - x);
        glEnd();

        x++;
        if (d > 0)
        {
            y--;
            d = d + 5 * (x - y) + 10;
        }
        else
        {
            d = d + 4 * x + 6;
        }
    }
    glFlush();
}
void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
    case '1':
        glClear(GL_COLOR_BUFFER_BIT);
        drawCircle(centerX, centerY, radius);
        drawCircle(centerX + radius * 2, centerY, radius);
        drawCircle(centerX - radius * 2, centerY, radius);
        drawCircle(centerX, centerY + radius * 2, radius);
        drawCircle(centerX, centerY - radius * 2, radius);
        break;
    case '2':
        glClear(GL_COLOR_BUFFER_BIT);
        drawCircle(centerX, centerY, radius);
        drawCircle(centerX + radius, centerY, radius);
        drawCircle(centerX - radius, centerY, radius);
        drawCircle(centerX, centerY + radius, radius);
        drawCircle(centerX, centerY - radius, radius);
        break;
    case '3':
        glClear(GL_COLOR_BUFFER_BIT);
        glPointSize(5);
        drawCircle(centerX, centerY, radius*0.9);
        glColor3f(0.0, 1.66, 0.81);
        drawCircle(centerX + radius, centerY + radius, radius*0.9);
        glColor3f(2.52, 1.77, 0.49);
        drawCircle(centerX - radius, centerY + radius, radius*0.9);
        glColor3f(2.38, 0.51, 0.78);
        drawCircle(centerX + radius * 2, centerY, radius*0.9);
        glColor3f(0.0, 1.29, 2.0);
        drawCircle(centerX - radius * 2, centerY, radius*0.9);
        break;
    case '4':
        glClear(GL_COLOR_BUFFER_BIT);
        drawCircle(centerX, centerY, radius);
        drawCircle(centerX, centerY+radius*1.618, radius*0.618);
        drawCircle(centerX+(radius*1.618), centerY, radius*0.618);
        drawCircle(centerX, centerY-radius*1.618, radius*0.618);
        drawCircle(centerX-radius*1.618, centerY, radius*0.618);
        drawCircle(centerX+radius*1.618*cos(radians), centerY+radius*1.618*sin(radians), radius*0.618);
        drawCircle(centerX+radius*1.618*cos(3*radians), centerY+radius*1.618*sin(3*radians), radius*0.618);
        drawCircle(centerX+radius*1.618*cos(5*radians), centerY+radius*1.618*sin(5*radians), radius*0.618);
        drawCircle(centerX+radius*1.618*cos(7*radians), centerY+radius*1.618*sin(7*radians), radius*0.618)
        break;
    }
}

void mouse(int button, int state, int x, int y)
{
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        if (!firstClick)
        {
            centerX = x;
            centerY = y;
            firstClick = true;
        }
        else
        {
            radiusX = x;
            radius = abs(radiusX - centerX);
            glClear(GL_COLOR_BUFFER_BIT);
            glColor3f(0.0, 0.0, 0.0);
            drawCircle(centerX, centerY, radius);
            glutKeyboardFunc(keyboard);
            firstClick = false;
        }
    }
}
void init()
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0, 700, 700, 0);
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();
}
int main(int argc, char **argv)
{

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(700, 700);
    glutCreateWindow("Bresnehams Circle Algo");
    init();
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMainLoop();
    return 0;
}
