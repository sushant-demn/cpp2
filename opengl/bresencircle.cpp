#include <bits/stdc++.h>
#include <GL/glut.h>
using namespace std;
int cx, cy, r;
bool firstClick = true;
void displayPoint(int x, int y)
{
    glColor3b(1, 0, 0);
    glBegin(GL_POINTS);
    glVertex2i(x, y);
}

void brensenCircle(int xc, int yc, int r)
{
    int x = 0;
    int y = r;
    int d = (3 - (2 * r));
    glColor3b(0, 0, 0);
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
        if (d < 0)
        {
            x++;
            d = d + (4 * x) + 6;
        }

        else if (d > 0)
        {
            x++;
            y--;
            d = d + 5 * (x - y) + 10;
        }
    }
    glFlush();
}
void mouse(int button, int state, int x, int y)
{
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        if (firstClick)
        {
            cx = x;
            cy = y;
            firstClick = !firstClick;
        }
        else
        {
            glClear(GL_COLOR_BUFFER_BIT);
            r = sqrt((cx - x) * (cx - x) + (cy - y) * (cy - y));
            brensenCircle(cx, cy, r);
            firstClick = !firstClick;
        }
    }
}
void init()
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0, 600, 600, 0);
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(2);
    brensenCircle(300, 300, 50);
    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(600, 600);
    glutCreateWindow("Bresenham line");
    init();
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMainLoop();
    return 0;
}