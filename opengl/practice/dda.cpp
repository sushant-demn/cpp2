#include <bits/stdc++.h>
#include <GL/glut.h>
using namespace std;

void displayPoint(int x, int y)
{
    glBegin(GL_POINTS);
    glVertex2i(x, y);
    glEnd();
}

void simpleLine(int x1, int y1, int x2, int y2)
{
    int dx = abs(x1 - x2), dy = abs(y1 - y2);
    int length = (dx > dy) ? dx : dy;
    float xinc = dx / length, yinc = dy / length;
    glColor3i(0, 0, 0);
    displayPoint(x1, y1);
    for (int i = 0; i < length; i++)
    {
        x1 += xinc;
        y1 += yinc;
        displayPoint(x1, y1);
    }
    glFlush();
}

void init()
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0, 700, 0, 700);
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    simpleLine(0, 350, 700, 350);
    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(700, 700);
    glutCreateWindow("Shut the fuck up you bitch ass nigga");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}