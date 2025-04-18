#include <bits/stdc++.h>
#include <GL/glut.h>

using namespace std;
void displayPoint(int x, int y)
{
    glColor3f(0, 0, 1);
    glPointSize(2);
    glBegin(GL_POINTS);
    glVertex2i(x, y);
    glEnd();
}
void simpleline(float x1, float y1, float x2, float y2)
{
    float step;
    float dx = x2 - x1;
    float dy = y2 - y1;
    if (abs(dx) > abs(dy))
    {
        step = abs(dx);
    }
    else
    {
        step = abs(dy);
    }

    float Xinc = dx / step;
    float Yinc = dy / step;
    float x = x1;
    float y = y1;
    for (int i = 0; i <= step; i++)
    {
        displayPoint(x, y);
        x = x + Xinc;
        y = y + Yinc;
    }
    glFlush();
}
void drawCircle(int xc, int yc, int r)
{
    int x = 0, y = r;
    int d = 1 - r;
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
            d = d + 2 * (x - y) + 1;
        }
        else
        {
            d = d + 2 * x + 1;
        }
    }
    glFlush();
}
void init()
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0, 1000, 0, 1000);
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    simpleline(250, 250, 250, 500);
    simpleline(500, 500, 250, 500);
    simpleline(500, 500, 500, 250);
    simpleline(250, 250, 500, 250);
    // inner sqr
    simpleline(375, 250, 250, 375);
    simpleline(250, 375, 375, 500);
    simpleline(375, 500, 500, 375);
    simpleline(500, 375, 375, 250);
    drawCircle(375, 375, 88.39);
    glFlush();
}
int main(int argc, char **argv)
{

    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(700, 700);
    glutCreateWindow("Bresenhams Midpt Circle");
    init();
    glutDisplayFunc(display);

    glutMainLoop();
    return 0;
}