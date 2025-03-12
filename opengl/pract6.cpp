#include <bits/stdc++.h>
#include <GL/glut.h>
using namespace std;
int ch;
float intCol[3] = {1.0, 1.0, 1.0};
float fillColf[3] = {1.0, 0.0, 0.0};
float fillColb[3] = {0.0, 0.0, 1.0};
float borderColor[3] = {1.0, 0.0, 0.0};
void setPixel(int x, int y, float f[3])
{
    glBegin(GL_POINTS);
    glColor3fv(f);
    glVertex2i(x, y);
    glEnd();
    glFlush();
}
void drawPolygon(int x1, int y1, int x2, int y2)
{
    glBegin(GL_LINE_LOOP);
    glVertex2i(x1, y1);
    glVertex2i(x1, y2);
    glVertex2i(x2, y2);
    glVertex2i(x2, y1);
    glEnd();
    glFlush();
}
void floodfill4(int x, int y, float ocolor[3], float ncolor[3])
{
    float color[3];
    glReadPixels(x, y, 1.0, 1.0, GL_RGB, GL_FLOAT, color);
    if (color[0] == ocolor[0] && color[1] == ocolor[1] && color[2] == ocolor[2])
    {
        setPixel(x, y, ncolor);
        floodfill4(x, y + 1, ocolor, ncolor);
        floodfill4(x + 1, y, ocolor, ncolor);
        floodfill4(x - 1, y, ocolor, ncolor);
        floodfill4(x, y - 1, ocolor, ncolor);
    }
}
void boundaryFill4(int x, int y, float fillColor[3], float borderColor[3])
{
    float interiorColor[3];
    glReadPixels(x, y, 1.0, 1.0, GL_RGB, GL_FLOAT, interiorColor);
    if ((interiorColor[0] != borderColor[0] || interiorColor[1] != borderColor[1] ||
         interiorColor[2] != borderColor[2]) &&
        (interiorColor[0] != fillColor[0] || interiorColor[1] != fillColor[1] ||
         interiorColor[2] != fillColor[2]))
    {
        setPixel(x, y, fillColor);
        boundaryFill4(x + 1, y, fillColor, borderColor);
        boundaryFill4(x - 1, y, fillColor, borderColor);
        boundaryFill4(x, y + 1, fillColor, borderColor);
        boundaryFill4(x, y - 1, fillColor, borderColor);
        boundaryFill4(x + 1, y + 1, fillColor, borderColor);
        boundaryFill4(x - 1, y - 1, fillColor, borderColor);
        boundaryFill4(x - 1, y + 1, fillColor, borderColor);
        boundaryFill4(x + 1, y - 1, fillColor, borderColor);
    }
}

void mouse(int btn, int state, int x, int y)
{
    if (btn == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        int xi = x;
        int yi = 600 - y;
        if (ch == 1)
        {
            floodfill4(xi, yi, intCol, fillColf);
        }
        else if (ch == 2)
        {
            boundaryFill4(xi, yi, fillColb, borderColor);
        }
    }
    glFlush();
}
void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'f':
        ch = 1;
        glClearColor(1.0, 1.0, 1.0, 1.0);
        glClear(GL_COLOR_BUFFER_BIT);
        glColor3f(0.0, 0.0, 0.0);
        drawPolygon(100, 100, 150, 150);
        glutMouseFunc(mouse);
        break;
    case 'b':
        ch = 2;
        glClearColor(1.0, 1.0, 1.0, 1.0);
        glClear(GL_COLOR_BUFFER_BIT);
        glColor3f(1.0, 0.0, 0.0);
        drawPolygon(150, 250, 300, 440);
        glEnd();
        glutMouseFunc(mouse);
        break;
    default:
        break;
    }
    glutPostRedisplay();
}

void init()
{
    gluOrtho2D(0, 600, 0, 600);
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_COLOR_BUFFER_BIT);
}

void display()
{
    glFlush();
}

int main(int argc, char **argv)
{

    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutCreateWindow("Flood Fill and Boundary Fill");
    init();
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    cout << "f : Flood Fill \n"
         << "b : Boundary Fill \n";

    glutMainLoop();
    return 0;

    return 0;
}