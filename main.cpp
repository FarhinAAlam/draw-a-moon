#include <stdio.h>
#include<windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>



void init (void)

{
    glClearColor(0.0f,0.0f,0.0f,0.0f);
    glOrtho(-60,20,-60,20,10,0);

}

void circle(GLfloat p,GLfloat q,GLfloat m,GLfloat n)
{

    glBegin(GL_TRIANGLE_FAN);
       glVertex2f(m,  n);

    for(int i=0;i<=100;i++){

        float angle = 2.0f * 3.1416f * i/200;

        float x = p*cosf(angle);
        float y = q*sinf(angle);
        glVertex2f((x+m),(y+n));


    }
    glEnd();


}

void Display(void)

{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.2f,0.8f,0.0f);
    circle(-10,-10,0,0);
    glColor3f(0.0f,0.0f,0.0f);
    circle(-10,-6,0,0);

    glFlush ();

}




int main(int argc, char** argv)

{

    glutInit(&argc, argv);

    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);

    glutInitWindowSize (600, 600);
    glutInitWindowPosition (100, 100);

    glutCreateWindow ("Farhina Alam 172-15-9705");

    init ();

    glutDisplayFunc(Display);

    glutMainLoop();

    return 0;

}
