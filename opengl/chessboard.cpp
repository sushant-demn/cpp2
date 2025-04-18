/*Chit NO. 5
Title:  Implement Bresenham's line drawing algorithm to draw a chessboard (4*4). Use mouse interfacing concept to accept xmin, ymin, xmax, and ymax value.

Instructions: First using mouse left click to select (left bottom) xmin,ymin and next again using mouse left click to select (right top) xmax,ymax
Check below video for how to run a program:
https://drive.google.com/file/d/1IA6cK4VvvwB73bLycSnSEdrn53sjFxrQ/view?usp=drive_link  */
#include <GL/glut.h>
#include<iostream>
#include<math.h>
using namespace std;
int xmin,ymin,xmax,ymax,pt=0;

void SimpleLine(int x1, int y1, int x2, int  y2)
{
  int M,p,dx,dy,x,y,t;
    //glClear(GL_COLOR_BUFFER_BIT);

    if((x2-x1)==0)
       M = (y2-y1);
    else
        M = (y2-y1)/(x2-x1);

    if(abs(M)<1)
    {
        if(x1>x2)
        {
            t = x1;
            x1 = x2;
            x2 = t;

            t = y1;
            y1 = y2;
            y2 = t;
        }

        dx = abs(x2-x1);
        dy = abs(y2-y1);

        p = 2*dy-dx;

        x=x1;
        y=y1;

        glBegin(GL_POINTS);
            while(x<=x2)
            {
              glVertex2f(x,y);
              x=x+1;

              if(p>=0)
              {
                 if(M<1)
                    y=y+1;
                else
                    y=y-1;
                 p = p+2*dy-2*dx;
              }
              else
              {
                  y=y;
                  p = p+2*dy;
              }
            }
        glEnd();
    }

    if(abs(M)>=1)
    {
        if(y1>y2)
        {
            t = x1;
            x1 = x2;
            x2 = t;

            t = y1;
            y1 = y2;
            y2 = t;
        }

        dx = abs(x2-x1);
        dy = abs(y2-y1);

        p = 2*dx-dy;

        x=x1;
        y=y1;

        glBegin(GL_POINTS);
            while(y<=y2)
            {
              glVertex2f(x,y);
              y=y+1;

              if(p>=0)
              {
                 if(M>=1)
                    x=x+1;
                else
                    x=x-1;
                 p = p+2*dx-2*dy;
              }
              else
              {
                  x=x;
                  p = p+2*dx;
              }
            }
        glEnd();
    }

   glFlush();
}
void drawChessboard(int boardSize) {
    int squareSize;


    squareSize = (xmax-xmin) / boardSize;  // Adjust the size based on the window size


    bool isWhite = true;

    for (int i = 0; i <= boardSize; i++) {
        // Draw horizontal lines
        SimpleLine(xmin, ymin+i * squareSize, boardSize * squareSize, ymin+i * squareSize);
        // Draw vertical lines
        SimpleLine(xmin+i*squareSize, ymin, xmin+i * squareSize, boardSize * squareSize);
    }

    // Color alternating squares
  for (int row = 0; row < boardSize; row++) {
        for (int col = 0; col < boardSize; col++) {
            if ((row + col) % 2 == 0) {
                // Light squares
                glColor3f(1.0f, 1.0f, 1.0f); // White
            } else {
                // Dark squares
                glColor3f(0.0f, 0.0f, 0.0f); // Black
            }

            // Draw the squares (basic filled rectangles)
            glBegin(GL_POLYGON);
            glVertex2i(xmin+col * squareSize, ymin+row * squareSize);
            glVertex2i(xmin+(col + 1) * squareSize, ymin+row * squareSize);
            glVertex2i(xmin+(col + 1) * squareSize, ymin+(row + 1) * squareSize);
            glVertex2i(xmin+col * squareSize, ymin+(row + 1) * squareSize);
            glEnd();
        }
    }
}
void mouse(int button,int state,int x,int y)
{
    if(button==GLUT_LEFT_BUTTON&&state==GLUT_DOWN)
    {
        if(pt==0)
        {

        xmin=x;
        ymin=600-y;
        pt++;
        }
        else
        {
            xmax=x;
            ymax=600-y;
        }
    }
    else if(button==GLUT_RIGHT_BUTTON&&state==GLUT_DOWN)
    {
        drawChessboard(4);
        glFlush();
    }


    }

void initOpenGL() {
    glClearColor(0.8, 0.8, 0.8, 1.0); // Set background color to light gray
    gluOrtho2D(0, 600, 0, 600); // Set orthogonal projection
    glPointSize(1.0); // Set point size for Bresenham's line
}
void display() {
    glClear(GL_COLOR_BUFFER_BIT); // Clear the screen
glutMouseFunc(mouse);
   // drawChessboard(4); // Draw an 8x8 chessboard

    glFlush(); // Ensure everything is rendered
    glutSwapBuffers(); // Swap buffers (for double buffering)
}
int main(int argc, char **argv)
{
   glutInit(&argc, argv);
   glutInitDisplayMode(GLUT_SINGLE);
   glutInitWindowPosition(0, 0);
   glutInitWindowSize(600, 600);
   glutCreateWindow("chessboard 4*4");
   initOpenGL();

   glutDisplayFunc(display);
   glutMainLoop();
   return 0;
}


