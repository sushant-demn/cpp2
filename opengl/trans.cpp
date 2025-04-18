#include <GL/glut.h>
#include <cmath>
#include <iostream>
using namespace std;

struct Point
{
    int xc;
    int yc;
} p[10];
int i = 0;
int n = 4;

bool flag = true;
int tx, ty, sx, sy;
int angle;
int px, py;

void drawPolygon(struct Point p[], int n)
{
    glPointSize(1.0);
    glBegin(GL_LINE_LOOP);
    for (int j = 0; j < n; j++)
    {
        glVertex2i(p[j].xc, p[j].yc);
    }
    glEnd();
    glFlush();
}

void myDisplay()
{
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_LINES);
    glVertex2i(300, 0);
    glVertex2i(300, 600);
    glVertex2i(0, 300);
    glVertex2i(600, 300);
    glEnd();
}

void translate(int tx, int ty)
{
    myDisplay();
    drawPolygon(p, n);
    struct Point pt[10];

    for (int j = 0; j < n; j++)
    {
        pt[j].xc = p[j].xc + tx;
        pt[j].yc = p[j].yc + ty;
    }

    drawPolygon(pt, n);
    glFlush();
}

void scaling(int sx, int sy)
{
    myDisplay();
    drawPolygon(p, n);
    struct Point pt[10];

    for (int j = 0; j < n; j++)
    {
        pt[j].xc = p[j].xc * sx;
        pt[j].yc = p[j].yc * sy;
    }

    drawPolygon(pt, n);
    glFlush();
}

void rotation1(int angle)
{
    float ang = angle * 3.14 / 180.0;
    myDisplay();
    drawPolygon(p, n);
    Point pt[10];

    for (int j = 0; j < n; j++)
    {
        pt[j].xc = p[j].xc * cos(ang) - p[j].yc * sin(ang);
        pt[j].yc = p[j].xc * sin(ang) + p[j].yc * cos(ang);
    }

    drawPolygon(pt, n);
    glFlush();
}

void rotation2(int angle, int px, int py)
{
    float ang = angle * 3.14 / 180.0;
    myDisplay();
    drawPolygon(p, n);
    Point pt[10];

    for (int j = 0; j < n; j++)
    {
        pt[j].xc = p[j].xc - px;
        pt[j].yc = p[j].yc - py;
        pt[j].xc = pt[j].xc * cos(ang) - pt[j].yc * sin(ang);
        pt[j].yc = pt[j].xc * sin(ang) + pt[j].yc * cos(ang);
        pt[j].xc = pt[j].xc + px;
        pt[j].yc = pt[j].yc + py;
    }

    drawPolygon(pt, n);
    glFlush();
}
void refx()
{
    myDisplay();
    drawPolygon(p, n);
    struct Point pt[10];
    for (int j = 0; j < n; j++)
    {
        pt[j].xc = p[j].xc;
        pt[j].yc = 300 - (p[j].yc - 300);
    }

    drawPolygon(pt, n);
    glFlush();
}
void refy()
{
    myDisplay();
    drawPolygon(p, n);
    struct Point pt[10];
    for (int j = 0; j < n; j++)
    {
        pt[j].xc = 300 - (p[j].xc - 300);
        pt[j].yc = p[j].yc;
    }

    drawPolygon(pt, n);
    glFlush();
}
void refxy()
{
    myDisplay();
    drawPolygon(p, n);
    struct Point pt[10];
    for (int j = 0; j < n; j++)
    {
        pt[j].xc = 300 - (p[j].xc - 300);
        pt[j].yc = 300 - (p[j].yc - 300);
    }

    drawPolygon(pt, n);
    glFlush();
}
void menu(int choice)
{
    switch (choice)
    {
    case 1: // Translate
        cout << "\n enter tx and ty: ";
        cin >> tx >> ty;
        translate(tx, ty);
        break;
    case 2: // Scaling
        cout << "\n enter sx and sy: ";
        cin >> sx >> sy;
        scaling(sx, sy);
        break;
    case 3: // Rotation about origin
        cout << "\n enter angle: ";
        cin >> angle;
        rotation1(angle);
        break;
    case 4: // Rotation about point
        cout << "\n enter angle: ";
        cin >> angle;
        cout << "\n enter px and py: ";
        cin >> px >> py;
        rotation2(angle, px, py);
        break;
    case 5: // Reflection about x axis
        refx();
        break;
    case 6:
        // Reflection about y axis
        refy();
        break;
    case 7: // Reflection about xy
        refxy();
        break;
    case 8:
        exit(0);
    }
    glutPostRedisplay();
}

void myMouse(int button, int state, int x, int y)
{
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        if (flag == true)
        {
            p[i].xc = x;
            p[i].yc = 600 - y;
            i++;
        }
    }
    else if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
    {
        n = i;
        drawPolygon(p, n);
        flag = false;
        glutCreateMenu(menu);
        glutAddMenuEntry("1. Translate", 1);
        glutAddMenuEntry("2. Scaling", 2);
        glutAddMenuEntry("3. Rotation about origin", 3);
        glutAddMenuEntry("4. Rotation about point", 4);
        glutAddMenuEntry("5. Reflection at x axis", 5);
        glutAddMenuEntry("6. Reflection at yaxis", 6);
        glutAddMenuEntry("7. Reflection at xyaxis", 7);
        glutAddMenuEntry("8. Exit", 8);
        glutAttachMenu(GLUT_RIGHT_BUTTON);
    }
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(600, 600);
    glutCreateWindow("My Drawing Screen");
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 600, 0, 600);
    glutDisplayFunc(myDisplay);
    glutMouseFunc(myMouse);
    glutMainLoop();
    return (0);
}