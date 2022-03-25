#include <iostream>
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>
///House4----------------(509)
void House4()
{

///Body

 glBegin(GL_QUADS);
glColor3ub(87, 9, 48);
glVertex2f(0.05f,0.4f);
glVertex2f(-0.069f,0.4f);
glVertex2f(-0.069f,-0.2f);
glVertex2f(0.05f,-0.2f);



///......................(L1)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(0.03f,0.33f);
glVertex2f(-0.045,0.33f);
glVertex2f(-0.045f,0.23f);
glVertex2f(0.03f,0.23f);



///......................(L2)
glColor3ub(252, 255, 64);
glVertex2f(0.03f,0.15f);
glVertex2f(-0.045,0.15f);
glVertex2f(-0.045f,0.05f);
glVertex2f(0.03f,0.05);



///......................(L3)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(-0.045f,-0.03f);
glVertex2f(0.03f,0.-0.03);
glVertex2f(0.03f,-0.12f);
glVertex2f(-0.045,-0.12f);






glEnd();


}


///House5----------------(510)
void House5()
{

///Body

 glBegin(GL_QUADS);
glColor3ub(16, 14, 48);
glVertex2f(0.08f,0.4f);
glVertex2f(-0.1f,0.4f);
glVertex2f(-0.1f,-0.29f);
glVertex2f(0.08f,-0.29f);

///...............................window1

glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(0.06f,0.33f);
glVertex2f(0.02f,0.33f);
glVertex2f(0.02f,-0.23f);
glVertex2f(0.06f,-0.23f);





///......................(L1)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(-0.08f,0.33f);
glVertex2f(-0.005f,0.33f);
glVertex2f(-0.005f,0.23f);
glVertex2f(-0.08f,0.23f);



///......................(L2)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(-0.08f,0.18f);
glVertex2f(-0.005f,0.18f);
glVertex2f(-0.005f,0.08f);
glVertex2f(-0.08f,0.08);


///......................(L3)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(-0.08f,0.03f);
glVertex2f(-0.005f,0.03f);
glVertex2f(-0.005f,-0.07f);
glVertex2f(-0.08f,-0.07);




///......................(L4)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(-0.08f,-0.12f);
glVertex2f(-0.005f,-0.12f);
glVertex2f(-0.005f,-0.22f);
glVertex2f(-0.08f,-0.22);





glEnd();



}



///>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>.......House (6)
///House6----------------(511)
void House6()
{

///Body

 glBegin(GL_QUADS);
glColor3ub(19, 3, 102);
glVertex2f(0.1f,0.4f);
glVertex2f(-0.1f,0.4f);
glVertex2f(-0.1f,-0.4f);
glVertex2f(0.1f,-0.4f);

///...............................window1

glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(0.08f,0.33f);
glVertex2f(0.005f,0.33f);
glVertex2f(0.005f,0.23f);
glVertex2f(0.08f,0.23f);


///......................(2)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(0.08f,0.18f);
glVertex2f(0.005f,0.18f);
glVertex2f(0.005f,0.08f);
glVertex2f(0.08f,0.08);



///......................(3)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(0.08f,0.03f);
glVertex2f(0.005f,0.03f);
glVertex2f(0.005f,-0.07f);
glVertex2f(0.08f,-0.07);



///......................(4)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(0.08f,-0.12f);
glVertex2f(0.005f,-0.12f);
glVertex2f(0.005f,-0.22f);
glVertex2f(0.08f,-0.22);




///......................(L1)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(-0.08f,0.33f);
glVertex2f(-0.005f,0.33f);
glVertex2f(-0.005f,0.23f);
glVertex2f(-0.08f,0.23f);



///......................(L2)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(-0.08f,0.18f);
glVertex2f(-0.005f,0.18f);
glVertex2f(-0.005f,0.08f);
glVertex2f(-0.08f,0.08);


///......................(L3)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(-0.08f,0.03f);
glVertex2f(-0.005f,0.03f);
glVertex2f(-0.005f,-0.07f);
glVertex2f(-0.08f,-0.07);




///......................(L4)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(-0.08f,-0.12f);
glVertex2f(-0.005f,-0.12f);
glVertex2f(-0.005f,-0.22f);
glVertex2f(-0.08f,-0.22);



///......................Door
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(0.032f,-0.28f);
glVertex2f(-0.032f,-0.28f);
glVertex2f(-0.032f,-0.4f);
glVertex2f(0.032f,-0.4);


glEnd();


}
void display1() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

//    background();

   // glTranslatef(0.7f, -0.1f, 0.0f);
  //  sun();
  //  glLoadIdentity();

  //  glTranslatef(0.0f, -0.7f, 0.0f);
 //   Road();
 //   glLoadIdentity();


  //  glTranslatef(0.0f, -0.2f, 0.0f);
  //  Flyover();
  //  glLoadIdentity();



     glScalef(0.7f,0.8f,0.0f);
     glTranslatef(0.9f, 0.2f, 0.0f);
  //   Tree_Trinagle();
     glLoadIdentity();

     ///>>>>>>>>>>>>>>>>>>>>>>>treee(2)
     glScalef(0.5f,0.61f,0.0f);
     glTranslatef(-0.3f, 0.33f, 0.0f);
     Tree_Trinagle();
     glLoadIdentity();


 ///>>>>>>>>>>>>>>>>>>>>>>>circleTree(1)
    glScalef(0.75f,0.5f,0.0f);
    glTranslatef(0.9f, 0.2f, 0.0f);
    circleTree();
    glLoadIdentity();

 ///>>>>>>>>>>>>>>>>>>>>>>>circleTree(2)
    glScalef(0.65f,0.35f,0.0f);
    glTranslatef(0.93f, 0.3f, 0.0f);
    circleTree();
    glLoadIdentity();

     ///>>>>>>>>>>>>>>>>>>>>>>>circleTree(3)
    glScalef(0.75f,0.3f,0.0f);
    glTranslatef(-0.25f, 0.65, 0.0f);
    circleTree();
    glLoadIdentity();

  ///>>>>>>>>>>>>>>>>>>>>>>>circleTree(3)
    glScalef(0.75f,0.45f,0.0f);
    glTranslatef(-0.75f, -1.0, 0.0f);
    circleTree();
    glLoadIdentity();


///>>>>>>>>>>>>>>>>>>>>>>>circleTree(4)
    glScalef(0.75f,0.45f,0.0f);
    glTranslatef(-0.55f, -1.0, 0.0f);
    circleTree();
    glLoadIdentity();

///>>>>>>>>>>>>>>>>>>>>>>>circleTree(5)
     glScalef(0.75f,0.45f,0.0f);
    glTranslatef(-0.35f, -1.0, 0.0f);
    circleTree();
    glLoadIdentity();






///>>>>>>>>>>>>>>>>>>>>>>>circleTree(6)
    glScalef(0.75f,0.45f,0.0f);
    glTranslatef(1.0f, -1.0, 0.0f);
    circleTree();
    glLoadIdentity();

///>>>>>>>>>>>>>>>>>>>>>>>circleTree(7)
     glScalef(0.75f,0.45f,0.0f);
    glTranslatef(0.8f, -1.0, 0.0f);
    circleTree();
    glLoadIdentity();


///>>>>>>>>>>>>>>>>>>>>>>>circleTree(8)

  glScalef(0.75f,0.45f,0.0f);
    glTranslatef(0.6f, -1.0, 0.0f);
    circleTree();
    glLoadIdentity();









///>>>>>>>>>>>>>>>>>>>>>house


    glScalef(1.0f,0.8f,0.0f);
    glTranslatef(0.28f, 0.37f, 0.0f);
    House1();
    glLoadIdentity();



    ///>>>>>>>>>>>>>>>>>>>>>house(2)

    glScalef(0.9f,0.8f,0.0f);
    glTranslatef(0.15f, 0.3f, 0.0f);
    House2();
    glLoadIdentity();





///>>>>>>>>>>>>>>>>>>>>>house(3)
    glScalef(0.9f,0.7f,0.0f);
    glTranslatef(0.53f, 0.37f, 0.0f);
    House3();
    glLoadIdentity();

///>>>>>>>>>>>>>>>>>>>>>house(4)
    glScalef(0.95f,0.8f,0.0f);
    glTranslatef(1.0f, 0.37f, 0.0f);
    House4();
    glLoadIdentity();

///>>>>>>>>>>>>>>>>>>>>>house(5)
    glScalef(0.85f,0.8f,0.0f);
    glTranslatef(0.95f, 0.37f, 0.0f);
    House5();
    glLoadIdentity();


    ///>>>>>>>>>>>>>>>>>>>>>house(6)
    glScalef(0.81f,0.45f,0.0f);
    glTranslatef(-1.0f, 0.84f, 0.0f);
    House6();
    glLoadIdentity();


    ///>>>>>>>>>>>>>>>>>>>>>house(7)
    glScalef(0.65f,0.7f,0.0f);
    glTranslatef(-0.99f, 0.57f, 0.0f);
    House7();
    glLoadIdentity();


    ///>>>>>>>>>>>>>>>>>>>>>house(8)
    glScalef(0.65f,0.55f,0.0f);
    glTranslatef(-0.78f, 0.58f, 0.0f);
    House8();
    glLoadIdentity();


    ///>>>>>>>>>>>>>>>>>>>>>house(9)
    glScalef(0.75f,0.65f,0.0f);
    glTranslatef(-0.49f, 0.5f, 0.0f);
    House9();
    glLoadIdentity();

    glPushMatrix();
    glScalef(0.9f,0.9f,0.0f);
    glTranslatef(carPosition+0.8f, -0.08f, 0.0f);
    Car();
    glPopMatrix();
    glLoadIdentity();


    glPushMatrix();
    glScalef(0.7f,0.6f,0.0f);
    glTranslatef(busPosition+0.9f, -0.23f, 0.0f);
    Bus();
    glPopMatrix();
    glLoadIdentity();



///>>>>>>>>>>>>>>>>>>>>>>>>>..............Clouds
    glScalef(0.9f,1.0f,0.0f);
    glTranslatef(0.0f, 0.91f, 0.0f);
    makeCloud();
    glLoadIdentity();



    glScalef(0.9f,1.0f,0.0f);
    glTranslatef(-0.75f, 0.91f, 0.0f);
    makeCloud();
    glLoadIdentity();



   // glTranslatef(-0.5f, -0.2f, 0.0f);

    //CAAr();

   // glLoadIdentity();

    glFlush();

}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Test");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display1);
//	 glutTimerFunc(100, Update, 0);
//    glutTimerFunc(100, update, 0);
	glutMainLoop();
	return 0;
}
