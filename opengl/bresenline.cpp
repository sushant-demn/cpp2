#include <bits/stdc++.h>
#include <GL/glut.h>
using namespace std;

void simpleLine(int x1, int y1, int x2, int y2)
{
    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);
    int x = x1, y = y1;

    int sx = (x2 > x1) ? 1 : -1;
    int sy = (y2 > y1) ? 1 : -1;

    glBegin(GL_POINTS);

    if (dx > dy)
    {
        int p = 2 * dy - dx;
        for (int i = 0; i <= dx; i++)
        {
            glVertex2i(x, y);
            x += sx;
            if (p < 0)
            {
                p += 2 * dy;
            }
            else
            {
                y += sy;
                p += 2 * (dy - dx);
            }
        }
    }
    else
    {
        int p = 2 * dx - dy;
        for (int i = 0; i <= dy; i++)
        {
            glVertex2i(x, y);
            y += sy;
            if (p < 0)
            {
                p += 2 * dx;
            }
            else
            {
                x += sx;
                p += 2 * (dx - dy);
            }
        }
    }

    glEnd();
    glFlush();
}
int diff(int x1, int x2)
{
    return x1 + (x2 - x1) / 2;
}
void squareintosquare(int x[])
{
    simpleLine(x[0], x[1], x[2], x[3]);
    simpleLine(x[2], x[3], x[4], x[5]);
    simpleLine(x[4], x[5], x[6], x[7]);
    simpleLine(x[6], x[7], x[0], x[1]);
    simpleLine(x[0] + (x[2] - x[0]) / 2, x[1] + (x[3] - x[1]) / 2, x[2] + (x[4] - x[2]) / 2, x[3]);
    simpleLine(x[2] + (x[4] - x[2]) / 2, x[3], x[4], x[5] + (x[7] - x[5]) / 2);
    simpleLine(x[2] + (x[4] - x[2]) / 2, x[3], x[4], x[5] + (x[7] - x[5]) / 2);
    simpleLine(x[4], x[5] + (x[7] - x[5]) / 2, x[6] + (x[0] - x[6]) / 2, x[7]);
    simpleLine(x[6] + (x[0] - x[6]) / 2, x[7], x[0], x[1] + (x[3] - x[1]) / 2);
    int a, b, c, d;
    a = (x[0] + (x[2] - x[0]) / 2) + ((x[2] + (x[4] - x[2]) / 2) - (x[0] + (x[2] - x[0]) / 2)) / 2;
    b = (x[1] + (x[3] - x[1]) / 2) + ((x[3] + (x[5] - x[3]) / 2) - (x[1] + (x[3] - x[1]) / 2)) / 2;
    c = (x[2] + (x[4] - x[2]) / 2) + ((x[4] + (x[6] - x[4]) / 2) - (x[2] + (x[4] - x[2]) / 2)) / 2;
    d = (x[3] + (x[5] - x[3]) / 2) + ((x[5] + (x[7] - x[5]) / 2) - (x[3] + (x[5] - x[3]) / 2)) / 2;
    simpleLine(a, b, c, d);
}

void init(void)
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    // glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0, 600, 600, 0);
}
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3b(0, 0, 0);
    glPointSize(2);
    int x[8] = {200, 200, 200, 500, 500, 500, 500, 200};
    squareintosquare(x);
    glFlush();
}
int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(600, 600);
    glutCreateWindow("Brensenham Line");
    init();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}