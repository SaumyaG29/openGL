#include <Windows.h>
#include <GL\glew.h>
#include <GL\freeglut.h>
#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <string>

using namespace std; 

void display() {

    glClearColor(0.0, 0.0, 0.0, 1);
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(20);

    glBegin(GL_LINES);
    glVertex3f(-1, -1, 0);
    glVertex3f(1, 1, 0);
    glEnd();

    glBegin(GL_LINES);
    glVertex3f(-1, 0, 0);
    glVertex3f(1, 0, 0);
    glEnd();

    glBegin(GL_LINES);
    glVertex3f(0, 1, 0);
    glVertex3f(0, -1, 0);
    glEnd();

    glBegin(GL_LINES);
    glVertex3f(-1, 1, 0);
    glVertex3f(1, -1, 0);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex3f(-0.3f, 0.0f, 0.0f);
    glVertex3f(-0.2f, -0.2f, 0.0f);
    glVertex3f(0.0f, -0.3f, 0.0f);
    glVertex3f(0.2f, -0.2f, 0.0f);
    glVertex3f(0.3f, 0.0f, 0.0f);
    glVertex3f(0.2f, 0.2f, 0.0f);
    glVertex3f(0.0f, 0.3f, 0.0f);
    glVertex3f(-0.2f, 0.2f, 0.0f);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex3f(-0.6f, 0.0f, 0.0f);
    glVertex3f(-0.4f, -0.4f, 0.0f);
    glVertex3f(0.0f, -0.6f, 0.0f);
    glVertex3f(0.4f, -0.4f, 0.0f);
    glVertex3f(0.6f, 0.0f, 0.0f);
    glVertex3f(0.4f, 0.4f, 0.0f);
    glVertex3f(0.0f, 0.6f, 0.0f);
    glVertex3f(-0.4f, 0.4f, 0.0f);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex3f(-0.9f, 0.0f, 0.0f);
    glVertex3f(-0.6f, -0.6f, 0.0f);
    glVertex3f(0.0f, -0.9f, 0.0f);
    glVertex3f(0.6f, -0.6f, 0.0f);
    glVertex3f(0.9f, 0.0f, 0.0f);
    glVertex3f(0.6f, 0.6f, 0.0f);
    glVertex3f(0.0f, 0.9f, 0.0f);
    glVertex3f(-0.6f, 0.6f, 0.0f);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex3f(-0.55f, 0.0f, 0.0f);
    glVertex3f(-0.35f, -0.35f, 0.0f);
    glVertex3f(0.0f, -0.55f, 0.0f);
    glVertex3f(0.35f, -0.35f, 0.0f);
    glVertex3f(0.55f, 0.0f, 0.0f);
    glVertex3f(0.35f, 0.35f, 0.0f);
    glVertex3f(0.0f, 0.55f, 0.0f);
    glVertex3f(-0.35f, 0.35f, 0.0f);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex3f(-0.45f, 0.0f, 0.0f);
    glVertex3f(-0.3f, -0.3f, 0.0f);
    glVertex3f(0.0f, -0.45f, 0.0f);
    glVertex3f(0.3f, -0.3f, 0.0f);
    glVertex3f(0.45f, 0.0f, 0.0f);
    glVertex3f(0.3f, 0.3f, 0.0f);
    glVertex3f(0.0f, 0.45f, 0.0f);
    glVertex3f(-0.3f, 0.3f, 0.0f);
    glEnd();
    
    glFlush();
    glutSwapBuffers();
}

int main(int argc, char** argv) { // Initialize GLUT and 

    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_SINGLE);   // Use single color buffer and no depth buffer.

    glutInitWindowSize(700, 800);        // Size of display area, in pixels.

    glutInitWindowPosition(50, 50);    // Location of window in screen coordinates.

    glutCreateWindow("SpiderWeb: Saumya_140"); // Parameter is window title.

    glutDisplayFunc(display);           // Called when the window needs to be redrawn.

    glutMainLoop(); // Run the event loop! This function does not return.

                    // Program ends when user closes the window.

    return 0;

}
