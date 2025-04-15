#include <bits/stdc++.h>
#include <GL/glut.h>
using namespace std;

void displayPoint(int x, int y)
{
    glPointSize(2);
    glBegin(GL_POINTS);
    glVertex2i(x, y);
    glEnd();
}

void SimpleLine(float x1, float y1, float x2, float y2)
{
    float step;
    float dx = x2 - x1;
    float dy = y2 - y1;

    if (abs(dx) >= abs(dy))
    {
        step = abs(dx);
    }
    else
    {
        step = abs(dy);
    }

    float Xinc = dx / (float)step;
    float Yinc = dy / (float)step;
    float x = x1;
    float y = y1;

    for (int i = 0; i <= step; i++)
    {
        displayPoint(x, y);
        x = x + Xinc;
        y = y + Yinc;
    }
}

void initialize(void)
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    gluOrtho2D(0, 600, 0, 600);
}

void primitives(void)
{
    glColor3f(1, 0, 0);
    glFlush();
    // glutMouseFunc();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(600, 600);
    glutCreateWindow("OpenGL - Cohen Sutherland Line Clipping Algo");
    initialize();
    glutDisplayFunc(primitives);
    glutMainLoop();
    return 0;
}