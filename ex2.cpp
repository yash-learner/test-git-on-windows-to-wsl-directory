#include <GL/glut.h>
using namespace std;
void Init(void)
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    gluOrtho2D(0.0, 300.0, 0.0, 200.0);
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2i(120, 130);
    glVertex2i(150, 100);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glRasterPos2i(50, 150);
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'L');
    glFlush();
}
int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 300);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("lines");
    Init();
    glutDisplayFunc(display);
    glutMainLoop();
}