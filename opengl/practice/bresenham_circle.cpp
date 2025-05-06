#include <bits/stdc++.h>
#include <GL/glut.h>
using namespace std;

void displayPoint(int x, int y)
{
    glBegin(GL_POINTS);
    glVertex2i(x, y);
    glEnd();
}

void bresenhamCircle(int xc, int yc, int r)
{
    float dr = 3 - 2 * r;
    int x = 0, y = r;
    glColor3i(0, 0, 0);
    glPointSize(2);
    while (x <= y)
    {
        displayPoint(xc + x, yc + y);
        displayPoint(xc - x, yc + y);
        displayPoint(xc + x, yc - y);
        displayPoint(xc - x, yc - y);
        displayPoint(xc + y, yc + x);
        displayPoint(xc - y, yc + x);
        displayPoint(xc + y, yc - x);
        displayPoint(xc - y, yc - x);

        x++;
        if (dr < 0)
            dr = dr + (4 * x) + 6;
        else
        {
            y--;
            dr = dr + 4 * (x - y) + 10;
        }
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
    bresenhamCircle(350, 350, 250);
    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(700, 700);
    glutCreateWindow("I dont know");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}