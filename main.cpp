#include <GL/glut.h>
#include <iostream>
void Inicio(void) {
	glClearColor(0.55, 0.6, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}
void PintarPixel(int x, int y)
{
	glBegin(GL_POINTS);
	glVertex2i(x, y);
	glEnd();
}
void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(10);
	for (int x = 1; x < 640; x++)
	{
		PintarPixel(x, 240);		
	}
	for (int y = 1; y < 480; y++)
	{
		PintarPixel(320, y);
	}
	glFlush();
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	glutInit(&argc, argv); //inicializa OpenGL
	glutInitWindowSize(640, 480); //Tama?o de pantalla
	glutInitWindowPosition(100, 100);//Posicion de inicio de pantalla
	glutCreateWindow("Demo 1");//Titulo de pantalla
	Inicio();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}

