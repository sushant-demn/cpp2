#include <bits/stdc++.h>
#include <GL/glut.h>
using namespace std;

void simpleLine(int x1, int y1, int x2, int y2)
{
    int dx = abs(x1 - x2), dy = abs(y1 - y2);
    int incx = (x2 > x1) ? 1 : -1, incy = (y2 > y1) ? 1 : -1;
    int x = x1, y = y1;
    glColor3i(0, 0, 0);
    if (dx > dy)
    {
        glBegin(GL_POINTS);
        glVertex2i(x, y);
        glEnd();
        int dk = 2 * dy - dx, inc1 = 2 * dy, inc2 = 2 * (dy - dx);
        for (int i = 0; i < dx; i++)
        {
            x += incx;
            dk += (dk < 0) ? inc1 : inc2;
            if (dk >= 0)
                y += incy;
            glBegin(GL_POINTS);
            glVertex2i(x, y);
            glEnd();
        }
    }

    else
    {
        glBegin(GL_POINTS);
        glVertex2i(x, y);
        glEnd();
        int dk = 2 * dx - dy, inc1 = 2 * dx, inc2 = 2 * (dx - dy);
        for (int i = 0; i < dy; i++)
        {
            y += incy;
            dk += (dk < 0) ? inc1 : inc2;
            if (dk >= 0)
                x += incx;
            glBegin(GL_POINTS);
            glVertex2i(x, y);
            glEnd();
        }
    }
}

void init()
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0, 700, 0, 700);
}

void Display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    simpleLine(0, 350, 700, 350);
    simpleLine(0, 0, 700, 700);
    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(700, 700);
    glutCreateWindow("BULL SHIT LINES");
    init();
    glutDisplayFunc(Display);
    glutMainLoop();
    return 0;
}