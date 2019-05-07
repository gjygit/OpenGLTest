//#include<iostream>
//#include<Windows.h>
//#include<glut.h>
//
//using namespace std;
//
//void init()
//{
//	glClearColor(1.0, 1.0, 1.0, 0.0);
//
//	glMatrixMode(GL_PROJECTION);
//	gluOrtho2D(0.0, 200.0, 0.0, 150.0);
//}
//
//void lineSegment()
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//
//	glColor3f(0.0, 0.4, 0.2);
//	glBegin(GL_LINES);
//	glVertex2i(180, 15);
//	glVertex2i(10, 145);
//	glEnd();
//
//	glFlush();
//}
//
//void test(int argc, char* argv[])
//{
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//	glutInitWindowPosition(50, 100);
//	glutInitWindowSize(400, 300);
//	glutCreateWindow("An Example OpenGL Program");
//
//	init();
//	glutDisplayFunc(lineSegment);
//	glutMainLoop();
//}
//
//int main(int argc, char* argv[])
//{
//	test(argc, argv);
//	return 0;
//}




#include <Windows.h>
#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <glut.h>
using namespace std;

#define Pi 3.1415926

void circleDisplay(void)
{
	double rr, gg, bb;
	float x, y;
	glClear(GL_COLOR_BUFFER_BIT);

	srand((unsigned)time(NULL));

	glPointSize(10.0);
	glBegin(GL_POINTS);
	for (int i = 0; i < 1000; i++)
	{
		rr = rand() / double(RAND_MAX);
		gg = rand() / double(RAND_MAX);
		bb = rand() / double(RAND_MAX);

		x = (rand() % (400 + 1)) - 200;
		y = (rand() % (400 + 1)) - 200;

		glColor3d(rr, gg, bb);
		glVertex2f(x, y);
	}
	glEnd();

	glFlush();
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(50, 100);
	glutInitWindowSize(800, 800);
	glutCreateWindow("第一个OpenGL程序");

	glClearColor(1.0, 1.0, 1.0, 0.0);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-200.0, 200.0, -200.0, 200.0);

	glutDisplayFunc(circleDisplay);
	glutMainLoop();

	return 0;
}