#include<iostream>
#include<GL/glut.h>
 
using namespace std;
 
void simpleline(int x1, int y1, int x2, int y2)
{
    int M, p, dx, dy, x, y;
    if (x2 - x1 == 0)
    {
        M = (y2 - y1);
    }
    else
    {
        M = (y2 - y1) / (x2 - x1);
    }
    if (abs(M) < 1)
    {
        if (x1 > x2)
        {
            swap(x1, x2);
            swap(y1, y2);
        }
        dx = abs(x2 - x1);
        dy = abs(y2 - y1);

        p = 2 * dy - dx;

        x = x1;
        y = y1;

        glBegin(GL_POINTS);
        while (x <= x2)
        {
            glVertex2f(x, y);
            x = x + 1;

            if (p >= 0)
            {
                if (M < 1)
                {
                    y++;
                }
                else
                {
                    y--;
                }
                p = p + 2 * dy - 2 * dx;
            }
            else
            {
                y = y;
                p = p + 2 * dy;
            }
        }
        glEnd();
    }
    if (abs(M) >= 1)
    {
        if (x1 > x2)
        {
            swap(x1, x2);
            swap(y1, y2);
        }
        dx = abs(x2 - x1);
        dy = abs(y2 - y1);

        p = 2 * dy - dx;

        x = x1;
        y = y1;

        glBegin(GL_POINTS);
        while (x <= x2)
        {
            glVertex2f(x, y);
            x = x + 1;

            if (p >= 0)
            {
                if (M < 1)
                {
                    y++;
                }
                else
                {
                    y--;
                }
                p = p + 2 * dy - 2 * dx;
            }
            else
            {
                y = y;
                p = p + 2 * dy;
            }
        }
        glEnd();
    }
    if (M >= 1)
    {
        if (y1 > y2)
        {
            swap(y1, y2);
            swap(x1, x2);
        }
        dx = abs(x2 - x1);
        dy = abs(y2 - y1);

        p = 2 * dx - dy;

        x = x1;
        y = y1;

        glBegin(GL_POINTS);

        while (y <= y2)
        {
            glVertex2f(x, y);
            y = y + 1;
            if (p >= 0)
            {
                if (M >= 1)
                {
                    x++;
                }
                else
                {
                    x--;
                    p = p + 2 * dx - dy;
                }
            }
            else
            {
                x = x;
                p = p + 2 * dx;
            }
        }
        glEnd();
    }
    glFlush();
}
void initialize(void)
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	gluOrtho2D(0, 600, 600, 0);
}
 
void primitives(void)
{
	glColor3f(1, 0, 0);
	simpleline(0, 300, 600, 300);
	simpleline(300, 0, 300, 600);
	// glutKeyboardFunc(keyboard);
}
 
int main(int argc, char** argv){
 
    glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(600, 600);
	glutCreateWindow("OPENGL Bresenhams ALGO");
	initialize();
    glutDisplayFunc(primitives);
    glutMainLoop();
    return 0;
}