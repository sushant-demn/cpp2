#include <bits/stdc++.h>
#include <GL/glut.h>
using namespace std;
int a[6];
int tx, ty;
bool firstclick = true;
bool secondclick = false;
void brensenhamLine(int x1, int y1, int x2, int y2)
{
    glColor3i(0, 0, 0);
    int dx, dy, sx, sy, x = x1, y = y1;
    dx = abs(x1 - x2);
    dy = abs(y1 - y2);
    sx = (x2 > x1) ? 1 : -1;
    sy = (y2 > y1) ? 1 : -1;
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
        for (int i = 0; i < dy; i++)
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

void drawTriangle(int x[])
{
    glPointSize(2);
    brensenhamLine(x[0], x[1], x[2], x[3]);
    brensenhamLine(x[2], x[3], x[4], x[5]);
    brensenhamLine(x[4], x[5], x[0], x[1]);
}

void transform(int x[])
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(2);
    brensenhamLine(x[0] + tx, x[1] + ty, x[2] + tx, x[3] + ty);
    brensenhamLine(x[2] + tx, x[3] + ty, x[4] + tx, x[5] + ty);
    brensenhamLine(x[4] + tx, x[5] + ty, x[0] + tx, x[1] + ty);
    glFlush();
}
void refy(int x[])
{
    glClear(GL_COLOR_BUFFER_BIT);
    for (int i = 0; i <= 5; i = i + 2)
    {
        x[i] = 300 - (x[i] - 300);
    }
    drawTriangle(x);
}
void refx(int x[])
{
    glClear(GL_COLOR_BUFFER_BIT);
    for (int i = 1; i <= 5; i = i + 2)
    {
        x[i] = 300 - (x[i] - 300);
    }
    drawTriangle(x);
}

void mouse(int btn, int state, int x, int y)
{
    if (btn == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        if (firstclick)
        {
            a[0] = x;
            a[1] = y;
            firstclick = !firstclick;
            secondclick = !secondclick;
        }
        else if (secondclick)
        {
            a[2] = x;
            a[3] = y;
            secondclick = !secondclick;
        }
        else
        {
            a[4] = x;
            a[5] = y;
            drawTriangle(a);
            firstclick = !firstclick;
        }
    }
    glFlush();
}

void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 't':
        cout << "Enter the value of tx and ty\n";
        cin >> tx >> ty;
        transform(a);
        break;
    case 'x':
        cout << "Reflection x\n";
        refx(a);
        break;
    case 'y':
        cout << "Reflection y\n";
        refy(a);
        break;
    default:
        break;
    }
}
void init()
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    gluOrtho2D(0, 600, 600, 0);
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
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(600, 600);
    glutCreateWindow("Mock Practical 2D transformation");
    init();
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}