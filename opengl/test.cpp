#include <iostream>
#include <GL/glut.h>

using namespace std;
void display_point(int x, int y)
{
    glColor3f(1, 0, 0);
    glPointSize(2);
    glBegin(GL_POINTS);
    glVertex2i(x, y);
    glEnd();
}

void dda(int x1, int y1, int x2, int y2)
{
    display_point(x1, y1);
    int length;
    int dx = abs(x1 - x2);
    int dy = abs(y1 - y2);
    if (dx >= dy)
        length = dx;
    else
        length = dy;

    int xincr = dx / length;
    int yincr = dy / length;
    int x = x1, y = y1;
    for (int i = 0; i < length; i++)
    {
        x = x + xincr;
        y = y + yincr;
        display_point(x, y);
    }
}

void init()
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    gluOrtho2D(0, 600, 0, 600);
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    dda(0, 0, 600, 600);
    glFlush();
}
int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(540, 960);
    glutInitWindowSize(600, 600);
    glutCreateWindow("Test Windows");
    init();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
