#include <GL/glut.h>

void draw(void)
{
  // Clear the background
  glClearColor(0.0, 1.0, 0.0, 1.0);
  glClear(GL_COLOR_BUFFER_BIT);

  // Draw
  glFlush();
}

int main(int argc, char **argv)
{
  glutInit(&argc, argv);
  
  // Simple buffer
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  glutInitWindowPosition(50, 25);
  glutInitWindowSize(500, 250);
  glutCreateWindow("Green Window");

  glutDisplayFunc(draw);
  glutMainLoop();

  return 0;
}
