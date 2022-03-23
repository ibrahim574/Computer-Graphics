#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>

# define PI           3.14159265358979323846


///////////////////////////////////////// Md. Ibrahim

void airportSound()
{
    PlaySound("AirportSound.wav", NULL, SND_ASYNC|SND_FILENAME);
}

/////////////////////////////////////////


////////////////////// Md. Ibrahim
GLfloat position = 0.0f;
GLfloat position_2 = 0.0f;
GLfloat speed = 0.3f;
GLfloat speed_2 = 0.07f;

GLfloat position_3 = 0.0f;
GLfloat position_4 = 0.0f;
GLfloat speed_3 = 0.25f;
GLfloat speed_4 = 0.06f;

GLfloat position_5 = 0.0f;
GLfloat position_6 = 0.0f;
GLfloat speed_5 = 0.02f;
GLfloat speed_6 = 0.06f;

GLfloat position_7 = 0.0f;
GLfloat speed_7 = 0.04f;

GLfloat position_8 = 0.0f;
GLfloat speed_8 = 0.02f;

GLfloat position_9 = 0.0f;
GLfloat speed_9 = 0.03f;

void takeoff(int val)
{
    position_2 += speed_2;
}

void langing(int val)
{
    if(position_4<=-1.5f){
        position_4 = -1.5;
    }
    position_4 -= speed_4;
}



void update(int value) {

    position += speed;

    glutTimerFunc(1200,takeoff,0);

	glutPostRedisplay();

	glutTimerFunc(100, update, 0);
}

void update_1(int value) {

    if(position_3>11.2)
    {
        position_3 = 11.2f;
    }
    position_3 += speed_3;
    langing(1);

	glutPostRedisplay();

	glutTimerFunc(100, update_1, 0);
}


void update_2(int val)
{
    if(position_5 >1.5)
    {
        position_5 = 15.0f;
    }

    position_5 += speed_5 ;
    glutPostRedisplay();

    glutTimerFunc(100, update_2, 0);
}

void sun_update(int val)
{
    if(position_7 >3.5)
    {
        position_7 = 3.5;
    }

    position_7 += speed_7 ;
    glutPostRedisplay();

    glutTimerFunc(100, sun_update, 0);
}

void lorry_update_1(int val)
{
    if(position_8 >3.5)
    {
        position_8 = 3.5;
    }

    position_8 -= speed_8 ;
    glutPostRedisplay();

    glutTimerFunc(100, lorry_update_1, 0);
}

void lorry_update_2(int val)
{
    if(position_9 >3.5)
    {
        position_9 = 3.5;
    }

    position_9 -= speed_9 ;
    glutPostRedisplay();

    glutTimerFunc(100, lorry_update_2, 0);
}



///////////////////////////////////////


////////////////////////////////////// Rozina
GLfloat i=0.0f;
GLfloat position2 =0.0f;
GLfloat speed2 =0.01f;
GLfloat position3 =0.0f;
GLfloat speed3 =0.02f;

void update2(int value) { //for bird animation

    if(position2 <-1.0)
        position2 = 1.0f;

    position2 -= speed2; //position=position-speed;1-.1=.9

	glutPostRedisplay();

	glutTimerFunc(100, update2, 0);
}

void update3(int value){ //for sky animation
if(position3 > 5.5)
    position3 = -5.0f;
position3 += speed3;

glutPostRedisplay();
glutTimerFunc(100, update3, 0);

}


////////////////////////////////////////


/////////////////////////////////////// sobita
/////////////////////////////////
GLfloat positionr = 0.0f;
GLfloat speedr = 0.05f;
GLfloat positionEngineer=0.0f;
GLfloat speedEngineer=0.05f;
GLfloat positionRain = 0.0f;
GLfloat speedRain = 0.09f;
GLfloat positionLorry = 0.0f;
GLfloat speedLorry = 0.09f;
GLfloat positionSun = 0.0f;
GLfloat speedSun= 0.02f;



void updater(int value) {
 if(positionr <-7.5)
        positionr = 5.0f;

    positionr -= speedr;
    glutPostRedisplay();

	glutTimerFunc(100, updater, 0);
}
void updateEnginnerMan(int value) {
 if(positionEngineer >9)
        positionEngineer = -5.0f;

    positionEngineer +=speedEngineer ;
    glutPostRedisplay();
	glutTimerFunc(100, updateEnginnerMan, 0);
}
void updateRain(int value) {
 if(positionRain <-7.5)
        positionRain = 2.0f;

    positionRain -=speedRain ;
    glutPostRedisplay();

	glutTimerFunc(100, updateRain, 0);
}
void updateSun(int value) {
 if(positionSun <-7.5)
        positionSun = 1.790f;

    positionSun -=speedSun ;
    glutPostRedisplay();

	glutTimerFunc(100, updateSun, 0);
}
void updateLorry(int value) {
 if(positionLorry >7.5)
        positionLorry = -5.0f;

    positionLorry +=speedLorry ;
    glutPostRedisplay();



	glutTimerFunc(100, updateLorry, 0);
}

//////////////////////////////////////////


////////////////////////////////////////// Mouse Interaction

void handleMouse(int button, int state, int x, int y)
{
	if (button == GLUT_LEFT_BUTTON)
        {
			speed_8 += 0.02f;
        }
    if (button == GLUT_RIGHT_BUTTON)
        {
            speed_8 -= 0.02f;
        }
	glutPostRedisplay();
}


///////////////////////////////////////// Keyboard interaction

void handleKeypress(unsigned char key, int x, int y) {
    switch (key) {
case 'c':
    speed3 = 0.0f;          //for cloud
    break;
case 'd':
    speed3 += 0.06f;
    break;
    case 'b':
    speed2 = 0.0f;                 //for bird
    break;
     case 'i':
    speed2 += 0.04f;
    break;
    case 't':                       //ibrahim takeoff
    //update(1);
    //takeoffSound();
    break;


    case 'a':
    speedr -= 0.05f;
    break;
     case 'l':
    speedr += 0.08f;
    break;
                   //engi
    case 'e':
    speedEngineer -= 0.003f;
    break;
    case 'n':
    speedEngineer = .05f;
    break;
    case 'g':
    speedEngineer = 0.0f;
    break;
                     //lorry
    case 'o':
    speedLorry = 0.0f;
    break;



    case 'y':
    speedLorry -= 0.03f;
    break;
     case 'r':
    speedLorry += 0.08f;
    break;

    // Lorry of Md. Ibrahim
    case 'z':
    speed_9 += 0.03f;
    break;
     case 'x':
    speed_9 -= 0.03f;
    break;



glutPostRedisplay();
    }
}



void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}


void night()
{
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;

	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	//gluOrtho2D(-5,5,-4,4); //(L,R,B,T)

    // Full BG
    glBegin(GL_QUADS);
              glColor3ub(77, 195, 255);
              glVertex2f(-9,-4);
              glVertex2f(5,-4);
              glVertex2f(5,4);
              glVertex2f(-9,4);
    glEnd();

    // Sky
    glBegin(GL_QUADS);
              glColor3ub(0, 31, 77);
              glVertex2f(-5,0.1);
              glVertex2f(5,0.1);
              glVertex2f(5,5);
              glVertex2f(-5,5);
    glEnd();

    // low line
    glBegin(GL_QUADS);
              glColor3ub(46, 184, 46);
              glVertex2f(-5,-4);
              glVertex2f(5,-4);
              glVertex2f(5,-3.78);
              glVertex2f(-5,-3.78);
    glEnd();


///////////////////////////////////////////////////////// Md. Ibrahim
//moon and stars

/////////////  Moon  //////////////
GLfloat x27=-3.61f; GLfloat y27=4.01f; GLfloat radius_27 =0.30f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(230, 230, 230);
		glVertex2f(x27, y27);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x27 + (radius_27 * cos(i *  twicePi / triangleAmount)),
			    y27 + (radius_27 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	GLfloat x28=-3.75f; GLfloat y28=4.15f; GLfloat radius_28 =0.30f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(0, 31, 77);
		glVertex2f(x28, y28);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x28 + (radius_28 * cos(i *  twicePi / triangleAmount)),
			    y28 + (radius_28 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


/////////// stars

    glPointSize(3);
    glBegin(GL_POINTS);
            glColor3ub(242, 242, 242);
            glVertex2f(-4.5,3.5);
    glEnd();

    glBegin(GL_POINTS);
            glColor3ub(242, 242, 242);
            glVertex2f(-4.19,4.81);
    glEnd();

    glBegin(GL_POINTS);
            glColor3ub(242, 242, 242);
            glVertex2f(-2.95,3.7);
    glEnd();

    glBegin(GL_POINTS);
            glColor3ub(242, 242, 242);
            glVertex2f(-2.58,4.55);
    glEnd();


    glBegin(GL_POINTS);
            glColor3ub(242, 242, 242);
            glVertex2f(-1.52,3.7);
    glEnd();

    glBegin(GL_POINTS);
            glColor3ub(242, 242, 242);
            glVertex2f(-2.1,4.1);
    glEnd();

    glBegin(GL_POINTS);
            glColor3ub(242, 242, 242);
            glVertex2f(-1.72,4.72);
    glEnd();

    glBegin(GL_POINTS);
            glColor3ub(242, 242, 242);
            glVertex2f(-1.52,3.7);
    glEnd();

    glBegin(GL_POINTS);
            glColor3ub(242, 242, 242);
            glVertex2f(-1.02,4.38);
    glEnd();

    glBegin(GL_POINTS);
            glColor3ub(242, 242, 242);
            glVertex2f(-0.2,4.61);
    glEnd();

    glBegin(GL_POINTS);
            glColor3ub(242, 242, 242);
            glVertex2f(0.34,3.64);
    glEnd();

    glBegin(GL_POINTS);
            glColor3ub(242, 242, 242);
            glVertex2f(0.5,4.26);
    glEnd();

    glBegin(GL_POINTS);
            glColor3ub(242, 242, 242);
            glVertex2f(0.9,4.77);
    glEnd();

    glBegin(GL_POINTS);
            glColor3ub(242, 242, 242);
            glVertex2f(1.41,4.11);
    glEnd();

    glBegin(GL_POINTS);
            glColor3ub(242, 242, 242);
            glVertex2f(1.72,4.7);
    glEnd();

    glBegin(GL_POINTS);
            glColor3ub(242, 242, 242);
            glVertex2f(0.5,4.26);
    glEnd();

    glBegin(GL_POINTS);
            glColor3ub(242, 242, 242);
            glVertex2f(0.25,3.77);
    glEnd();

    glBegin(GL_POINTS);
            glColor3ub(242, 242, 242);
            glVertex2f(3.15,4.33);
    glEnd();

    glBegin(GL_POINTS);
            glColor3ub(242, 242, 242);
            glVertex2f(3.46,3.79);
    glEnd();

    glBegin(GL_POINTS);
            glColor3ub(242, 242, 242);
            glVertex2f(3.97,4.62);
    glEnd();

    glBegin(GL_POINTS);
            glColor3ub(242, 242, 242);
            glVertex2f(4.63,3.66);
    glEnd();

    glBegin(GL_POINTS);
            glColor3ub(242, 242, 242);
            glVertex2f(4.87,4.65);
    glEnd();

    glBegin(GL_POINTS);
            glColor3ub(242, 242, 242);
            glVertex2f(1.5,3.5);
    glEnd();

    glBegin(GL_POINTS);
            glColor3ub(242, 242, 242);
            glVertex2f(-4.83,4.56);
    glEnd();

    glBegin(GL_POINTS);
            glColor3ub(242, 242, 242);
            glVertex2f(3.15,4.33);
    glEnd();

    glBegin(GL_POINTS);
            glColor3ub(242, 242, 242);
            glVertex2f(2.89,3.55);
    glEnd();









/////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////





////////////////////////////////////////////////// Roza plane
                                                //up plane 1st
     glPushMatrix();
   glTranslatef(positionr,0,0);
    glBegin(GL_POLYGON);
              glColor3ub(204, 255, 255);

               glVertex2f(2.66,4.32);
              glVertex2f(2.73,4.19);
              glVertex2f(2.85,4.1);
              glVertex2f(2.97,4.07);
              glVertex2f(3.27,4.04);
              glVertex2f(3.71,4.06);

              glVertex2f(4.04,4.15);
              glVertex2f(4.09,4.19);
             glVertex2f(4.09,4.24);
             glVertex2f(4.08,4.28);
             glVertex2f(3.37,4.45);
             glVertex2f(3.15,4.49);
             glVertex2f(3.02,4.51);
             glVertex2f(2.87,4.51);
             glVertex2f(2.74,4.46);
             glVertex2f(2.67,4.37);

    glEnd();

                                             //up plane wing
      glBegin(GL_QUADS);
              glColor3ub(255, 71, 26);
              glVertex2f(3.8,4.34);
             glVertex2f(3.97,4.3);
             glVertex2f(3.97,4.59);
             glVertex2f(3.88,4.57);

            glEnd();
                                            //up plane wing side
       glBegin(GL_POLYGON);
              glColor3ub(255, 71, 26);
              glVertex2f(3.76,3.99);
               glVertex2f(3.42,4.19);
               glVertex2f(3.39,4.21);
               glVertex2f(3.36,4.22);
               glVertex2f(3.3,4.22);
               glVertex2f(3.21,4.22);
               glVertex2f(3.17,4.21);
               glVertex2f(3.15,4.2);
               glVertex2f(3.15,4.18);
               glVertex2f(3.18,4.16);
               glVertex2f(3.21,4.15);
            glEnd();

                                            //side wing up plane
            glBegin(GL_POLYGON);
              glColor3ub(255, 71, 26);
             glVertex2f(3.88,4.17);
             glVertex2f(3.92,4.13);
             glVertex2f(3.99,4.12);
             glVertex2f(4.05,4.12);
             glVertex2f(4.1,4.13);
             glVertex2f(4.14,4.14);
             glVertex2f(4.16,4.16);
             glVertex2f(4.13,4.18);
             glVertex2f(4.09,4.19);
             glVertex2f(4.04,4.2);
             glVertex2f(3.98,4.2);
             glVertex2f(3.92,4.19);


    glEnd();

                                          //up plane wheel
            glBegin(GL_POLYGON);
              glColor3ub(204, 255, 255);
             glVertex2f(3.45,4.05);
             glVertex2f(3.38,4.03);
             glVertex2f(3.37,3.98);
              glVertex2f(3.38,3.93);
             glVertex2f(3.43,3.9);
              glVertex2f(3.5,3.9);
             glVertex2f(3.55,3.93);
             glVertex2f(3.57,3.97);
             glVertex2f(3.54,4.02);
             glVertex2f(3.55,4.01);
             glEnd();
              glBegin(GL_POLYGON);
              glColor3ub(51, 10, 0);
             glVertex2f(3.42,3.93);
             glVertex2f(3.44,3.95);
             glVertex2f(3.44,3.99);
             glVertex2f(3.41,4.02);
             glVertex2f(3.39,3.99);
             glVertex2f(3.39,3.95);
             glEnd();


                                                 //up plane 2nd wheel
            glBegin(GL_POLYGON);
              glColor3ub(204, 255, 255);
             glVertex2f(3.2,4.05);
              glVertex2f(3.16,4.05);
             glVertex2f(3.14,4.02);
             glVertex2f(3.12,3.99);
             glVertex2f(3.14,3.94);
             glVertex2f(3.2,3.9);
             glVertex2f(3.26,3.91);
             glVertex2f(3.3,3.94);
             glVertex2f(3.32,3.98);
             glVertex2f(3.27,4.04);
              glEnd();

            glBegin(GL_POLYGON);
              glColor3ub(51, 10, 0);

             glVertex2f(3.18,3.93);
             glVertex2f(3.21,3.96);
             glVertex2f(3.21,3.99);
             glVertex2f(3.18,4.02);
             glVertex2f(3.15,3.99);
             glVertex2f(3.15,3.96);


    glEnd();

                                               //window up plane
     glBegin(GL_QUADS);
              glColor3ub(0, 92, 230);
             glVertex2f(2.67,4.37);
             glVertex2f(2.75,4.36);
             glVertex2f(2.8,4.42);
             glVertex2f(2.74,4.46);

            glEnd();

            glBegin(GL_QUADS);
              glColor3ub(0, 92, 230);

             glVertex2f(2.76,4.35);
             glVertex2f(2.84,4.33);
             glVertex2f(2.87,4.38);
             glVertex2f(2.81,4.41);

            glEnd();

            glBegin(GL_QUADS);
              glColor3ub(0, 92, 230);
             glVertex2f(3.05,4.25);
             glVertex2f(3.09,4.25);
             glVertex2f(3.09,4.33);
             glVertex2f(3.05,4.33);
            glEnd();

            glBegin(GL_QUADS);
              glColor3ub(0, 92, 230);
             glVertex2f(3.14,4.25);
             glVertex2f(3.18,4.25);
             glVertex2f(3.18,4.33);
             glVertex2f(3.14,4.33);
            glEnd();

             glBegin(GL_QUADS);
              glColor3ub(0, 92, 230);
             glVertex2f(3.23,4.25);
             glVertex2f(3.27,4.25);
             glVertex2f(3.27,4.33);
             glVertex2f(3.23,4.33);
            glEnd();

            glBegin(GL_QUADS);
              glColor3ub(0, 92, 230);
             glVertex2f(3.32,4.25);
             glVertex2f(3.36,4.25);
             glVertex2f(3.36,4.33);
             glVertex2f(3.32,4.33);
            glEnd();

             glBegin(GL_QUADS);
              glColor3ub(0, 92, 230);
             glVertex2f(3.41,4.25);
             glVertex2f(3.45,4.25);
             glVertex2f(3.45,4.33);
             glVertex2f(3.41,4.33);
            glEnd();

             glBegin(GL_QUADS);
              glColor3ub(0, 92, 230);
             glVertex2f(3.5,4.25);
             glVertex2f(3.54,4.25);
             glVertex2f(3.54,4.33);
             glVertex2f(3.5,4.33);
            glEnd();

             glBegin(GL_QUADS);
              glColor3ub(0, 92, 230);
             glVertex2f(3.59,4.25);
             glVertex2f(3.63,4.25);
             glVertex2f(3.63,4.33);
             glVertex2f(3.59,4.33);
            glEnd();

            glPopMatrix();



///////////////////////////////////////////////// 2nd spot light
///////////////////////////////////////////////// Md. Ibrahim

              glBegin(GL_QUADS); // 2nd spot light pillar
              glColor3ub(128, 128, 128);
              glVertex2f(3.5,0.1);
              glVertex2f(3.6,0.1);
              glVertex2f(3.6,2.6);
              glVertex2f(3.5,2.6);
              glEnd();


              glBegin(GL_TRIANGLES); // 2nd spot light_1
              glColor3ub(166, 166, 166);
              glVertex2f(3.2,2.5);
              glVertex2f(3.4,2.3);
              glVertex2f(3.5,2.6);
              glEnd();


              glBegin(GL_TRIANGLES); // 2nd spot light_2
              glColor3ub(166, 166, 166);
              glVertex2f(3.7,2.3);
              glVertex2f(3.9,2.5);
              glVertex2f(3.6,2.6);
              glEnd();


              glBegin(GL_QUADS); // 2nd spot light_Light
              glColor3ub(255, 255, 204);
              glVertex2f(3.2,2.5);
              glVertex2f(1.2,1.8);
              glVertex2f(2.6,0.4);
              glVertex2f(3.4,2.3);
              glEnd();

              glBegin(GL_QUADS); // 2nd spot light_Light_1
              glColor3ub(255, 255, 204);
              glVertex2f(3.7,2.3);
              glVertex2f(4.4,0.4);
              glVertex2f(5.5,2);
              glVertex2f(3.9,2.5);
              glEnd();







//////////////////////////////////////////////////
//////////////////////////////////////////////////








         //background  building
              glBegin(GL_QUADS);
              glColor3ub(179,204,230);
              glVertex2f(-1.4,0.1);
              glVertex2f(-0.9,0.1);
              glVertex2f(-0.9,1.9);
              glVertex2f(-1.4,1.9);
               glEnd();

              glBegin(GL_QUADS);
              glColor3ub(194,214,214);
              glVertex2f(-2.3,0.1);
              glVertex2f(-1.56,0.1);
              glVertex2f(-1.56,2.2);
              glVertex2f(-2.3,2.2);
               glEnd();
              glBegin(GL_QUADS);
              glColor3ub(194,214,214);
              glVertex2f(-2.2,2.2);
              glVertex2f(-1.66,2.2);
              glVertex2f(-1.66,2.4);
              glVertex2f(-2.2,2.4);
               glEnd();

                 glBegin(GL_QUADS);
              glColor3ub(194,214,214);
              glVertex2f(-2.1,2.4);
              glVertex2f(-1.76,2.4);
              glVertex2f(-1.76,2.55);
              glVertex2f(-2.1,2.55);
               glEnd();


                 glBegin(GL_QUADS);
              glColor3ub(194,214,214);
              glVertex2f(-3.8,0.1);
              glVertex2f(-3.5,0.1);
              glVertex2f(-3.5,1.9);
              glVertex2f(-3.8,1.9);
               glEnd();

              glBegin(GL_QUADS);
              glColor3ub(194,214,214);
              glVertex2f(-3.0,0.1);
              glVertex2f(-2.6,0.1);
              glVertex2f(-2.6,1.9);
              glVertex2f(-3.0,1.9);
               glEnd();

                glBegin(GL_QUADS);
              glColor3ub(194,214,214);
              glVertex2f(-5.0,0.1);
              glVertex2f(-4.5,0.1);
              glVertex2f(-4.5,2.9);
              glVertex2f(-5.0,2.9);
               glEnd();



              glBegin(GL_QUADS);//1st quad main building
              glColor3ub(230, 230, 230);
              glVertex2f(-0.9,0.1);
              glVertex2f(4.4,0.1);
              glVertex2f(4.4,1.6);
              glVertex2f(-0.9,1.6);
              glEnd();



              glBegin(GL_QUADS);//  window1
              //glColor3ub(0,0,179);
                glColor3ub(166,166,166);
              glVertex2f(1.2,0.1);
              glVertex2f(2.0,0.1);
              glVertex2f(2.0,1.4);
              glVertex2f(1.2,1.4);
              glEnd();



                glBegin(GL_QUADS);//  window1 quad
              //glColor3ub(0,0,179);
                glColor3ub(0,0,102);
              glVertex2f(1.23,0.1);
              glVertex2f(1.97,0.1);
              glVertex2f(1.97,1.36);
              glVertex2f(1.23,1.36);
              glEnd();

             glBegin(GL_QUADS);//  window1 quad vertical
             glColor3ub(166, 166, 166);
              glVertex2f(1.23,0.81);
              glVertex2f(1.97,0.81);
              glVertex2f(1.97,0.84);
              glVertex2f(1.23,0.84);
              glEnd();



              glBegin(GL_QUADS);//  window layer
              glColor3ub(140, 140, 140);
              glVertex2f(1.48,0.1);
              glVertex2f(1.5,0.1);
              glVertex2f(1.5,1.36);
              glVertex2f(1.48,1.36);
              glEnd();


              glBegin(GL_QUADS);// window layer2
              glColor3ub(140, 140, 140);
              glVertex2f(1.72,0.1);
              glVertex2f(1.74,0.1);
              glVertex2f(1.74,1.36);
              glVertex2f(1.72,1.36);
              glEnd();




                glBegin(GL_QUADS);//  window2 quad $

                glColor3ub(166,166,166);
              glVertex2f(2.3,0.2);
              glVertex2f(3.6,0.2);
              glVertex2f(3.6,1.4);
              glVertex2f(2.3,1.4);
              glEnd();


                glBegin(GL_QUADS);//  window2 quad
              //glColor3ub(0,0,179);
                glColor3ub(0, 0, 102);
              glVertex2f(2.32,0.24);
              glVertex2f(3.58,0.24);
              glVertex2f(3.58,1.36);
              glVertex2f(2.32,1.36);
              glEnd();

                 glBegin(GL_QUADS);// layer verti
              //glColor3ub(0,0,179);
                glColor3ub(166, 166, 166);
              glVertex2f(2.32,0.98);
              glVertex2f(3.58,0.98);
              glVertex2f(3.58,1.01);
              glVertex2f(2.32,1.01);
              glEnd();



                 glBegin(GL_QUADS);// layer verti
              glColor3ub(166, 166, 166);
              glVertex2f(2.93,0.24);
              glVertex2f(2.95,0.24);
              glVertex2f(2.95,1.36);
              glVertex2f(2.93,1.36);
              glEnd();


              glBegin(GL_QUADS);// layer horizontal
              glColor3ub(166, 166, 166);
              glVertex2f(2.62,0.24);
              glVertex2f(2.64,0.24);
              glVertex2f(2.64,1.0);
              glVertex2f(2.62,1.0);
              glEnd();

              glBegin(GL_QUADS);// layer horizontal
              glColor3ub(166, 166, 166);
              glVertex2f(3.28,0.24);
              glVertex2f(3.30,0.24);
              glVertex2f(3.30,1.0);
              glVertex2f(3.28,1.0);
              glEnd();






              glBegin(GL_QUADS);//  window3
              glColor3ub(166,166,166);
              glVertex2f(3.8,0.1);
              glVertex2f(4.35,0.1);
              glVertex2f(4.35,1.4);
              glVertex2f(3.8,1.4);
              glEnd();



              glBegin(GL_QUADS);//  window3main
              glColor3ub(0, 0, 102);
                  //glColor3ub(0, 0, 255);

              glVertex2f(3.82,0.1);
              glVertex2f(4.33,0.1);
              glVertex2f(4.33,1.36);
              glVertex2f(3.82,1.36);
              glEnd();




              glBegin(GL_QUADS);//  window3 layer
              glColor3ub(166,166,166);
              glVertex2f(4.09,0.1);
              glVertex2f(4.11,0.1);
              glVertex2f(4.11,1.4);
              glVertex2f(4.09,1.4);
              glEnd();

              glBegin(GL_QUADS);//1st quad er vitor janala
              glColor3ub(0, 0, 102);
              glVertex2f(-0.8,0.2);
              glVertex2f(1.0,0.2);
              glVertex2f(1.0,1.4);
              glVertex2f(-0.8,1.4);
              glEnd();

              glBegin(GL_QUADS);//1st quad er vitor janalar  bottom layer
              glColor3ub(140,140,140);
              glVertex2f(-0.8,0.2);
              glVertex2f(1.0,0.2);
              glVertex2f(1.0,0.25);
              glVertex2f(-0.8,0.25);
              glEnd();

              glBegin(GL_QUADS);//1st quad er vitor janalar  left  layer
              glColor3ub(140,140,140);
              glVertex2f(-0.8,0.2);
              glVertex2f(-0.77,0.2);
              glVertex2f(-0.77,1.4);
              glVertex2f(-0.8,1.4);
              glEnd();


              glBegin(GL_QUADS);//1st quad er vitor janalar  uporer  layer
              //glColor3ub(255,255,255);
                glColor3ub(140,140,140);
              glVertex2f(-0.8,1.36);
              glVertex2f(1.0,1.36);
              glVertex2f(1.0,1.4);
              glVertex2f(-0.8,1.4);
              glEnd();


             glBegin(GL_QUADS);//1st quad er vitor janala right layer

              glColor3ub(140,140,140);
              glVertex2f(0.97,0.2);
              glVertex2f(1.0,0.2);
              glVertex2f(1.0,1.4);
              glVertex2f(0.97,1.4);
              glEnd();


             glBegin(GL_QUADS);//1st quad er vitor vertical layer
              //glColor3ub(255,255,255);
               glColor3ub(140,140,140);
              glVertex2f(-0.77,0.95);
              glVertex2f(0.97,0.95);
              glVertex2f(0.97,0.99);
              glVertex2f(-0.77,0.99);
              glEnd();



                glBegin(GL_QUADS);//1st quad er vitor vertical layer2
              //glColor3ub(255,255,255);
               glColor3ub(140,140,140);
              glVertex2f(-0.77,0.55);
              glVertex2f(0.97,0.55);
              glVertex2f(0.97,0.58);
              glVertex2f(-0.77,0.58);
              glEnd();




             glBegin(GL_QUADS);//1st quad er vitor janala vitorer right layer

              glColor3ub(140,140,140);
              glVertex2f(0.71,0.22);
              glVertex2f(0.73,0.22);
              glVertex2f(0.73,1.37);
              glVertex2f(0.71,1.37);
              glEnd();


             glBegin(GL_QUADS);//1st quad er vitor janala vitorer right layer

              glColor3ub(140,140,140);
              glVertex2f(0.46,0.22);
              glVertex2f(0.48,0.22);
              glVertex2f(0.48,1.37);
              glVertex2f(0.46,1.37);
              glEnd();


             glBegin(GL_QUADS);//1st quad er vitor janala vitorer right layer

              glColor3ub(140,140,140);
              glVertex2f(0.15,0.22);
              glVertex2f(0.17,0.22);
              glVertex2f(0.17,1.37);
              glVertex2f(0.15,1.37);
              glEnd();




             glBegin(GL_QUADS);//1st quad er vitor janala vitorer right layer

              glColor3ub(140,140,140);
              glVertex2f(-0.18,0.22);
              glVertex2f(-0.16,0.22);
              glVertex2f(-0.16,1.37);
              glVertex2f(-0.18,1.37);
              glEnd();



             glBegin(GL_QUADS);//1st quad er vitor janala vitorer right layer

              glColor3ub(140,140,140);
              glVertex2f(-0.5,0.22);
              glVertex2f(-0.48,0.22);
              glVertex2f(-0.48,1.37);
              glVertex2f(-0.5,1.37);
              glEnd();







               glBegin(GL_QUADS);//1st quad er uporer layer
              glColor3ub(166, 166, 166);
              glVertex2f(-1.0,1.6);
              glVertex2f(4.45,1.6);
              glVertex2f(4.45,1.7);
              glVertex2f(-1.0,1.7);
              glEnd();

              glBegin(GL_QUADS);//2nd quad
              glColor3ub(255, 255, 255);
              glVertex2f(-0.8,1.7);
              glVertex2f(1.0,1.7);
              glVertex2f(1.0,2.3);
              glVertex2f(-0.8,2.3);
              glEnd();



               glBegin(GL_QUADS);//2nd quad er window
              glColor3ub(153, 153, 153);
              glVertex2f(-0.7,1.78);
              glVertex2f(0.9,1.78);
              glVertex2f(0.9,2.24);
              glVertex2f(-0.7,2.24);
              glEnd();


              glBegin(GL_QUADS);//2nd quad er window
              glColor3ub(0, 0, 153);
              glVertex2f(-0.68,1.82);
              glVertex2f(0.87,1.82);
              glVertex2f(0.87,2.2);
              glVertex2f(-0.68,2.2);
              glEnd();



              glBegin(GL_QUADS);//2nd quad er window layer
              glColor3ub(153, 153, 153);
              glVertex2f(-0.44,1.78);
              glVertex2f(-0.47,1.78);
              glVertex2f(-0.47,2.24);
              glVertex2f(-0.44,2.24);
              glEnd();



              glBegin(GL_QUADS);//2nd quad er window layer
              glColor3ub(153, 153, 153);
              glVertex2f(-0.21,1.78);
              glVertex2f(-0.18,1.78);
              glVertex2f(-0.18,2.24);
              glVertex2f(-0.21,2.24);
              glEnd();



              glBegin(GL_QUADS);//2nd quad er window layer
              glColor3ub(153, 153, 153);
              glVertex2f(0.03,1.78);
              glVertex2f(0.06,1.78);
              glVertex2f(0.06,2.24);
              glVertex2f(0.03,2.24);
              glEnd();


               glBegin(GL_QUADS);//2nd quad er window layer
              glColor3ub(153, 153, 153);
              glVertex2f(0.26,1.78);
              glVertex2f(0.28,1.78);
              glVertex2f(0.28,2.24);
              glVertex2f(0.26,2.24);
              glEnd();


              glBegin(GL_QUADS);//2nd quad er window layer
              glColor3ub(153, 153, 153);
              glVertex2f(0.48,1.78);
              glVertex2f(0.50,1.78);
              glVertex2f(0.50,2.24);
              glVertex2f(0.48,2.24);
              glEnd();

              glBegin(GL_QUADS);//2nd quad er window layer
              glColor3ub(153, 153, 153);
              glVertex2f(0.68,1.78);
              glVertex2f(0.70,1.78);
              glVertex2f(0.70,2.24);
              glVertex2f(0.68,2.24);
              glEnd();




              glBegin(GL_QUADS);//2nd quad er uporer layer
              glColor3ub(166, 166, 166);
              glVertex2f(-0.85,2.3);
              glVertex2f(1.05,2.3);
              glVertex2f(1.05,2.4);
              glVertex2f(-0.85,2.4);
              glEnd();





             glBegin(GL_QUADS);//3rd side quad
              glColor3ub(242, 242, 242);
              glVertex2f(1.0,1.7);
              glVertex2f(3.8,1.7);
              glVertex2f(3.8,2.1);
              glVertex2f(1.0,2.1);
               glEnd();




             glBegin(GL_QUADS);//3rd side quad vertical lines
              glColor3ub(61, 61, 41);
              glVertex2f(1.12,1.7);
              glVertex2f(1.15,1.7);
              glVertex2f(1.15,2.02);
              glVertex2f(1.12,2.02);
               glEnd();


                   glBegin(GL_QUADS);//3rd side quad vertical lines
              glColor3ub(61, 61, 41);
              glVertex2f(1.41,1.7);
              glVertex2f(1.44,1.7);
              glVertex2f(1.44,2.02);
              glVertex2f(1.41,2.02);
               glEnd();





             glBegin(GL_QUADS);//3rd side quad upper border
              glColor3ub(61, 61, 41);
              glVertex2f(1.0,1.98);
              glVertex2f(3.8,1.98);
              glVertex2f(3.8,2.02);
              glVertex2f(1.0,2.02);
               glEnd();

                    glBegin(GL_QUADS);//3rd side quad vertical lines
              glColor3ub(61, 61, 41);
              glVertex2f(1.70,1.7);
              glVertex2f(1.73,1.7);
              glVertex2f(1.73,2.02);
              glVertex2f(1.70,2.02);
               glEnd();



                    glBegin(GL_QUADS);//3rd side quad vertical lines
              glColor3ub(61, 61, 41);
              glVertex2f(1.91,1.7);
              glVertex2f(1.94,1.7);
              glVertex2f(1.94,2.02);
              glVertex2f(1.91,2.02);
               glEnd();


                    glBegin(GL_QUADS);//3rd side quad vertical lines
              glColor3ub(61, 61, 41);
              glVertex2f(2.11,1.7);
              glVertex2f(2.14,1.7);
              glVertex2f(2.14,2.02);
              glVertex2f(2.11,2.02);
               glEnd();



             glBegin(GL_QUADS);//3rd side quad vertical lines
              glColor3ub(61, 61, 41);
              glVertex2f(2.32,1.7);
              glVertex2f(2.35,1.7);
              glVertex2f(2.35,2.02);
              glVertex2f(2.32,2.02);
               glEnd();



             glBegin(GL_QUADS);//3rd side quad vertical lines
              glColor3ub(61, 61, 41);
              glVertex2f(2.53,1.7);
              glVertex2f(2.56,1.7);
              glVertex2f(2.56,2.02);
              glVertex2f(2.53,2.02);
               glEnd();


             glBegin(GL_QUADS);//3rd side quad vertical lines
              glColor3ub(61, 61, 41);
              glVertex2f(2.73,1.7);
              glVertex2f(2.76,1.7);
              glVertex2f(2.76,2.02);
              glVertex2f(2.73,2.02);
               glEnd();


                glBegin(GL_QUADS);//3rd side quad vertical lines
              glColor3ub(61, 61, 41);
              glVertex2f(2.93,1.7);
              glVertex2f(2.96,1.7);
              glVertex2f(2.96,2.02);
              glVertex2f(2.93,2.02);
               glEnd();

              glBegin(GL_QUADS);//3rd side quad vertical lines
              glColor3ub(61, 61, 41);
              glVertex2f(3.11,1.7);
              glVertex2f(3.14,1.7);
              glVertex2f(3.14,2.02);
              glVertex2f(3.11,2.02);
               glEnd();



              glBegin(GL_QUADS);//3rd side quad vertical lines
              glColor3ub(61, 61, 41);
              glVertex2f(3.31,1.7);
              glVertex2f(3.34,1.7);
              glVertex2f(3.34,2.02);
              glVertex2f(3.31,2.02);
               glEnd();


              glBegin(GL_QUADS);//3rd side quad vertical lines
              glColor3ub(61, 61, 41);
              glVertex2f(3.48,1.7);
              glVertex2f(3.52,1.7);
              glVertex2f(3.52,2.02);
              glVertex2f(3.48,2.02);
               glEnd();


              glBegin(GL_QUADS);//3rd side quad vertical lines
              glColor3ub(61, 61, 41);
              glVertex2f(3.71,1.7);
              glVertex2f(3.74,1.7);
              glVertex2f(3.74,2.02);
              glVertex2f(3.71,2.02);
               glEnd();


               glBegin(GL_QUADS);//4th quad
              glColor3ub(242, 242,242);
              glVertex2f(-0.4,2.4);
              glVertex2f(0.3,2.4);
              glVertex2f(0.3,3.2);
              glVertex2f(-0.4,3.2);
              glEnd();

              glBegin(GL_QUADS);//4th quad er layer
              glColor3ub(140, 140, 140);
              glVertex2f(-0.42,3.2);
              glVertex2f(0.32,3.2);
              glVertex2f(0.32,3.25);
              glVertex2f(-0.42,3.25);
              glEnd();

               glBegin(GL_QUADS);//5th quad
              glColor3ub(0, 0, 153);
              glVertex2f(-0.4,3.25);
              glVertex2f(0.3,3.25);
              glVertex2f(0.48,4.0);
              glVertex2f(-0.6,4.0);
              glEnd();

                glBegin(GL_QUADS);//5th quad layer
              glColor3ub(115, 115, 115);
              glVertex2f(-0.6,4.0);
              glVertex2f(0.48,4.0);
              glVertex2f(0.48,4.05);
              glVertex2f(-0.6,4.05);
              glEnd();

                glBegin(GL_QUADS);//5th quad layer
              glColor3ub(230, 230, 230);
              glVertex2f(-0.6,4.05);
              glVertex2f(-0.27,4.25);
              glVertex2f(0.17,4.25);
              glVertex2f(0.48,4.05);
              glEnd();




/////////////////////////////////////////////////////////////// 1st spot light
/////////////////////////////////////////////////////////////// Md. Ibrahim
////////// spot light of airport


              glBegin(GL_QUADS); // 1st spot light pillar
              glColor3ub(128, 128, 128);
              glVertex2f(-3.6,0.1);
              glVertex2f(-3.45,0.1);
              glVertex2f(-3.45,2.6);
              glVertex2f(-3.6,2.6);
              glEnd();


              glBegin(GL_TRIANGLES); // 1st spot light_1
              glColor3ub(166, 166, 166);
              glVertex2f(-4,2.4);
              glVertex2f(-3.7,2.2);
              glVertex2f(-3.6,2.6);
              glEnd();


              glBegin(GL_TRIANGLES); // 1st spot light_2
              glColor3ub(166, 166, 166);
              glVertex2f(-3.35,2.2);
              glVertex2f(-3.1,2.4);
              glVertex2f(-3.45,2.6);
              glEnd();


              glBegin(GL_QUADS); // 1st spot light_Light
              glColor3ub(255, 255, 204);
              glVertex2f(-5.6,1.6);
              glVertex2f(-4,0.5);
              glVertex2f(-3.7,2.2);
              glVertex2f(-4,2.4);
              glEnd();

              glBegin(GL_QUADS); // 1st spot light_Light_1
              glColor3ub(255, 255, 204);
              glVertex2f(-3.35,2.2);
              glVertex2f(-3,0.5);
              glVertex2f(-1.4,1.6);
              glVertex2f(-3.1,2.4);
              glEnd();











///////////////////////////////////////////////////////////////


	          glBegin(GL_QUADS); //gac er stick
              glColor3ub(102,51,0);
              glVertex2f(-1.4,0.1);
              glVertex2f(-1.3,0.1);
              glVertex2f(-1.3,0.95);
              glVertex2f(-1.4,0.95);
               glEnd();

    GLfloat a=-1.32f;  GLfloat b=1.1f; GLfloat radius =0.4f;//start of tree 1st
    int i;
    //int triangleAmount = 20;
   // GLfloat twicePi = 2.0f * PI;
    glColor3ub(0,102,0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();//end sun




              glBegin(GL_QUADS); //2nd tree
              glColor3ub(102,51,0);
              glVertex2f(-1.9,0.1);
              glVertex2f(-1.8,0.1);
              glVertex2f(-1.8,0.95);
              glVertex2f(-1.9,0.95);
               glEnd();

    GLfloat a6=-1.85f;  GLfloat b6=1.1f; GLfloat radius6 =0.4f;//start of tree 1st
    int i6;
    int triangleAmount6 = 20;
    GLfloat twicePi6 = 2.0f * PI;
    glColor3ub(0,204,0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(a6, b6); // center of circle
		for(i6 = 0; i6 <= triangleAmount6;i6++) {
			glVertex2f(
		            a6 + (radius6 * cos(i6 *  twicePi6 / triangleAmount6)),
			    b6 + (radius6 * sin(i6 * twicePi6 / triangleAmount6))
			);
		}
	glEnd();


             glBegin(GL_QUADS); //3rd gac er stick
              glColor3ub(102,51,0);
              glVertex2f(-2.6,0.1);
              glVertex2f(-2.5,0.1);
              glVertex2f(-2.5,0.8);
              glVertex2f(-2.6,0.8);
               glEnd();

    GLfloat a1=-2.55f;  GLfloat b1=1.1f; GLfloat radius1 =0.4f;//start of tree 2nd
    int i1;
    int triangleAmount1 = 20;
    GLfloat twicePi1 = 2.0f * PI;
    glColor3ub(0,102,0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(a1, b1); // center of circle
		for(i1 = 0; i1 <= triangleAmount1;i1++) {
			glVertex2f(
		            a1 + (radius1 * cos(i1 *  twicePi1 / triangleAmount1)),
			    b1 + (radius1 * sin(i1 * twicePi1 / triangleAmount1))
			);
		}
	glEnd();//end sun


	   glBegin(GL_QUADS); //4th gac er stick
              glColor3ub(102,51,0);
              glVertex2f(-3.3,0.1);
              glVertex2f(-3.2,0.1);
              glVertex2f(-3.2,0.95);
              glVertex2f(-3.3,0.95);
               glEnd();

    GLfloat a2=-3.3f;  GLfloat b2=1.1f; GLfloat radius2 =0.4f;//start of tree 2nd
    int i2;
    int triangleAmount2 = 20;
    GLfloat twicePi2 = 2.0f * PI;
    glColor3ub(0,204,0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(a2, b2); // center of circle
		for(i2 = 0; i2 <= triangleAmount1;i2++) {
			glVertex2f(
		            a2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    b2 + (radius2 * sin(i2 * twicePi2/ triangleAmount2))
			);
		}
	glEnd();//end 3rd tree

	  glBegin(GL_QUADS); //5th gac er stick
              glColor3ub(102,51,0);
              glVertex2f(-4.05,0.1);
              glVertex2f(-3.95,0.1);
              glVertex2f(-3.95,0.95);
              glVertex2f(-4.05,0.95);
               glEnd();

    GLfloat a3=-4.0f;  GLfloat b3=1.1f; GLfloat radius3 =0.4f;//start of tree 2nd
    int i3;
    int triangleAmount3 = 20;
    GLfloat twicePi3 = 2.0f * PI;
    glColor3ub(0,102,0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(a3, b3); // center of circle
		for(i3 = 0; i3 <= triangleAmount3;i3++) {
			glVertex2f(
		            a3 + (radius3 * cos(i3 *  twicePi3/ triangleAmount3)),
			    b3 + (radius3 * sin(i3 * twicePi3/ triangleAmount3))
			);
		}
	glEnd();//end 4th tree


	 glBegin(GL_QUADS); //6th gac er stick
              glColor3ub(102,51,0);
              glVertex2f(-4.8,0.1);
              glVertex2f(-4.7,0.1);
              glVertex2f(-4.7,0.95);
              glVertex2f(-4.8,0.95);
               glEnd();



  GLfloat a4=-4.75f;  GLfloat b4=1.1f; GLfloat radius4 =0.4f;//start of tree 2nd
    int i4;
    int triangleAmount4 = 20;
    GLfloat twicePi4 = 2.0f * PI;
    glColor3ub(0,204,0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(a4, b4); // center of circle
		for(i4 = 0; i4 <= triangleAmount4;i4++) {
			glVertex2f(
		            a4 + (radius4 * cos(i4 *  twicePi4/ triangleAmount4)),
			    b4 + (radius4 * sin(i4 * twicePi4/ triangleAmount4))
			);
		}
	glEnd();//end 4th tree*/




            glBegin(GL_LINES); //net under tree
              glColor3ub(51,26,0);
              glVertex2f(-5.0,0.2);
              glVertex2f(-0.9,0.2);
              glVertex2f(-5.0,0.25);
              glVertex2f(-0.9,0.25);
               glVertex2f(-5.0,0.3);
              glVertex2f(-0.9,0.3);
              glVertex2f(-5.0,0.35);
              glVertex2f(-0.9,0.35);
               glVertex2f(-5.0,0.4);
              glVertex2f(-0.9,0.4);
              glVertex2f(-5.0,0.45);
              glVertex2f(-0.9,0.45);
                glVertex2f(-5.0,0.5);
              glVertex2f(-0.9,0.5);
              glVertex2f(-5.0,0.55);
              glVertex2f(-0.9,0.55);
               glVertex2f(-5.0,0.6);
              glVertex2f(-0.9,0.6);
              glVertex2f(-4.9,0.2);   //here starts cross net
              glVertex2f(-4.9,0.6);
               glVertex2f(-4.85,0.2);   //here starts cross net
              glVertex2f(-4.85,0.6);
               glVertex2f(-4.8,0.2);   //here starts cross net
              glVertex2f(-4.8,0.6);
               glVertex2f(-4.75,0.2);   //here starts cross net
              glVertex2f(-4.75,0.6);
               glVertex2f(-4.7,0.2);   //here starts cross net
              glVertex2f(-4.7,0.6);
              glVertex2f(-4.65,0.2);   //here starts cross net
              glVertex2f(-4.65,0.6);
               glVertex2f(-4.6,0.2);   //here starts cross net
              glVertex2f(-4.6,0.6);
               glVertex2f(-4.55,0.2);   //here starts cross net
              glVertex2f(-4.55,0.6);
               glVertex2f(-4.5,0.2);   //here starts cross net
              glVertex2f(-4.5,0.6);
               glVertex2f(-4.45,0.2);   //here starts cross net
              glVertex2f(-4.45,0.6);
              glVertex2f(-4.4,0.2);   //here starts cross net
              glVertex2f(-4.4,0.6);
               glVertex2f(-4.35,0.2);   //here starts cross net
              glVertex2f(-4.35,0.6);
               glVertex2f(-4.3,0.2);   //here starts cross net
              glVertex2f(-4.3,0.6);
               glVertex2f(-4.25,0.2);   //here starts cross net
              glVertex2f(-4.25,0.6);
               glVertex2f(-4.2,0.2);   //here starts cross net
              glVertex2f(-4.2,0.6);
              glVertex2f(-4.15,0.2);   //here starts cross net
              glVertex2f(-4.15,0.6);
               glVertex2f(-4.1,0.2);   //here starts cross net
              glVertex2f(-4.1,0.6);
               glVertex2f(-4.05,0.2);   //here starts cross net
              glVertex2f(-4.05,0.6);
               glVertex2f(-3.95,0.2);   //here starts cross net
              glVertex2f(-3.95,0.6);
               glVertex2f(-3.9,0.2);
              glVertex2f(-3.9,0.6);
              glVertex2f(-3.85,0.2);
              glVertex2f(-3.85,0.6);
               glVertex2f(-3.8,0.2);
              glVertex2f(-3.8,0.6);
               glVertex2f(-3.75,0.2);
              glVertex2f(-3.75,0.6);

               glVertex2f(-3.7,0.2);   //here starts cross net
              glVertex2f(-3.7,0.6);
              glVertex2f(-3.65,0.2);   //here starts cross net
              glVertex2f(-3.65,0.6);
               glVertex2f(-3.6,0.2);   //here starts cross net
              glVertex2f(-3.6,0.6);
               glVertex2f(-3.55,0.2);   //here starts cross net
              glVertex2f(-3.55,0.6);
               glVertex2f(-3.5,0.2);   //here starts cross net
              glVertex2f(-3.5,0.6);
               glVertex2f(-3.45,0.2);   //here starts cross net
              glVertex2f(-3.45,0.6);
               glVertex2f(-3.4,0.2);   //here starts cross net
              glVertex2f(-3.4,0.6);
               glVertex2f(-3.35,0.2);   //here starts cross net
              glVertex2f(-3.35,0.6);
               glVertex2f(-3.3,0.2);   //here starts cross net
              glVertex2f(-3.3,0.6);
               glVertex2f(-3.25,0.2);   //here starts cross net
              glVertex2f(-3.25,0.6);
               glVertex2f(-3.2,0.2);   //here starts cross net
              glVertex2f(-3.2,0.6);
              glVertex2f(-3.15,0.2);   //here starts cross net
              glVertex2f(-3.15,0.6);
               glVertex2f(-3.1,0.2);   //here starts cross net
              glVertex2f(-3.1,0.6);
               glVertex2f(-3.05,0.2);   //here starts cross net
              glVertex2f(-3.05,0.6);

                 glVertex2f(-2.95,0.2);   //here starts cross net
              glVertex2f(-2.95,0.6);
               glVertex2f(-2.9,0.2);
              glVertex2f(-2.9,0.6);
              glVertex2f(-2.85,0.2);   //here starts cross net
              glVertex2f(-2.85,0.6);
               glVertex2f(-2.8,0.2);   //here starts cross net
              glVertex2f(-2.8,0.6);
               glVertex2f(-2.75,0.2);   //here starts cross net
              glVertex2f(-2.75,0.6);

               glVertex2f(-2.7,0.2);   //here starts cross net
              glVertex2f(-2.7,0.6);
              glVertex2f(-2.65,0.2);   //here starts cross net
              glVertex2f(-2.65,0.6);
               glVertex2f(-2.6,0.2);   //here starts cross net
              glVertex2f(-2.6,0.6);
               glVertex2f(-2.55,0.2);   //here starts cross net
              glVertex2f(-2.55,0.6);
               glVertex2f(-2.5,0.2);   //here starts cross net
              glVertex2f(-2.5,0.6);
               glVertex2f(-2.45,0.2);   //here starts cross net
              glVertex2f(-2.45,0.6);
               glVertex2f(-2.4,0.2);   //here starts cross net
              glVertex2f(-2.4,0.6);
               glVertex2f(-2.35,0.2);   //here starts cross net
              glVertex2f(-2.35,0.6);
               glVertex2f(-2.3,0.2);   //here starts cross net
              glVertex2f(-2.3,0.6);
               glVertex2f(-2.25,0.2);   //here starts cross net
              glVertex2f(-2.25,0.6);
               glVertex2f(-2.2,0.2);   //here starts cross net
              glVertex2f(-2.2,0.6);
              glVertex2f(-2.15,0.2);   //here starts cross net
              glVertex2f(-2.15,0.6);
               glVertex2f(-2.1,0.2);
              glVertex2f(-2.1,0.6);
               glVertex2f(-2.05,0.2);
              glVertex2f(-2.05,0.6);

                glVertex2f(-1.95,0.2);   //here starts cross net
              glVertex2f(-1.95,0.6);
               glVertex2f(-1.9,0.2);
              glVertex2f(-1.9,0.6);
              glVertex2f(-1.85,0.2);
              glVertex2f(-1.85,0.6);
               glVertex2f(-1.8,0.2);
              glVertex2f(-1.8,0.6);
               glVertex2f(-1.75,0.2);
              glVertex2f(-1.75,0.6);

               glVertex2f(-1.7,0.2);
              glVertex2f(-1.7,0.6);
              glVertex2f(-1.65,0.2);
              glVertex2f(-1.65,0.6);
               glVertex2f(-1.6,0.2);
              glVertex2f(-1.6,0.6);
               glVertex2f(-1.55,0.2);
              glVertex2f(-1.55,0.6);
               glVertex2f(-1.5,0.2);
              glVertex2f(-1.5,0.6);
               glVertex2f(-1.45,0.2);
              glVertex2f(-1.45,0.6);
               glVertex2f(-1.4,0.2);
              glVertex2f(-1.4,0.6);
               glVertex2f(-1.35,0.2);
              glVertex2f(-1.35,0.6);
               glVertex2f(-1.3,0.2);
              glVertex2f(-1.3,0.6);
               glVertex2f(-1.25,0.2);
              glVertex2f(-1.25,0.6);
               glVertex2f(-1.2,0.2);
              glVertex2f(-1.2,0.6);
              glVertex2f(-1.15,0.2);
              glVertex2f(-1.15,0.6);
               glVertex2f(-1.1,0.2);
              glVertex2f(-1.1,0.6);
               glVertex2f(-1.05,0.2);
              glVertex2f(-1.05,0.6);
              glVertex2f(-1.0,0.2);
              glVertex2f(-1.0,0.6);
               glVertex2f(-0.95,0.2);
              glVertex2f(-0.95,0.6);
              glVertex2f(-0.9,0.2);
              glVertex2f(-0.9,0.6);
             glEnd();   //end of cross net






	      glBegin(GL_QUADS); //right side er gac er stck
              glColor3ub(102,51,0);
              glVertex2f(4.65,0.1);
              glVertex2f(4.72,0.1);
              glVertex2f(4.72,0.95);
              glVertex2f(4.65,0.95);
               glEnd();






	         glBegin(GL_TRIANGLES); //right side er tree
                glColor3ub(52,102,0);
              glVertex2f(4.45,0.8);
              glVertex2f(4.95,0.8);
              glVertex2f(4.7,1.3);

               glEnd();


	         glBegin(GL_TRIANGLES);
              glColor3ub(52,102,0);
              glVertex2f(4.45,1.0);
              glVertex2f(4.95,1.0);
              glVertex2f(4.7,1.65);
              //glVertex2f(-1.4,0.95);
               glEnd();



               glBegin(GL_LINES);//right side net
              glColor3ub(0,0,0);
             glVertex2f(4.41,0.2);
              glVertex2f(5.0,0.2);
              glVertex2f(4.41,0.25);
              glVertex2f(5.0,0.25);
               glVertex2f(4.41,0.3);
              glVertex2f(5.0,0.3);
              glVertex2f(4.41,0.35);
              glVertex2f(5.0,0.35);
               glVertex2f(4.41,0.4);
              glVertex2f(5.0,0.4);
              glVertex2f(4.41,0.45);
              glVertex2f(5.0,0.45);
                glVertex2f(4.41,0.5);
              glVertex2f(5.0,0.5);
              glVertex2f(4.41,0.55);
              glVertex2f(5.0,0.55);
               glVertex2f(4.41,0.6);
              glVertex2f(5.0,0.6);
              glVertex2f(4.41,0.2);//crossnet
              glVertex2f(4.41,0.6);
               glVertex2f(4.45,0.2);
              glVertex2f(4.45,0.6);
               glVertex2f(4.5,0.2);
              glVertex2f(4.5,0.6);
              glVertex2f(4.55,0.2);
              glVertex2f(4.55,0.6);
               glVertex2f(4.6,0.2);
              glVertex2f(4.6,0.6);
               glVertex2f(4.65,0.2);
              glVertex2f(4.65,0.6);
               glVertex2f(4.7,0.2);
              glVertex2f(4.7,0.6);
               glVertex2f(4.75,0.2);
              glVertex2f(4.75,0.6);
                glVertex2f(4.8,0.2);
                glVertex2f(4.8,0.6);
               glVertex2f(4.85,0.2);
              glVertex2f(4.85,0.6);
               glVertex2f(4.9,0.2);
              glVertex2f(4.9,0.6);
               glVertex2f(4.95,0.2);
              glVertex2f(4.95,0.6);
               glEnd();







//Middle space
//////////////////////////////////////////////////////////
////////////////////////////////////////////////////////// Sobita


    //middle space
    glBegin(GL_QUADS);
              glColor3ub(166, 166, 166);
              glVertex2f(-5,-1.8);
              glVertex2f(5,-1.8);
              glVertex2f(5,0);
              glVertex2f(-5,0);
    glEnd();

    // Middle Space boarder
    glBegin(GL_QUADS);
              glColor3ub(77, 77, 77);
              glVertex2f(-5,0);
              glVertex2f(5,0);
              glVertex2f(5,0.1);
              glVertex2f(-5,0.1);
    glEnd();





///////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////

    //traffic cone
    glBegin(GL_TRIANGLES);
              glColor3ub(255, 163, 26);
                 glVertex2f(-4.6,-1.5);
                 glVertex2f(-4.5,-1.5);
                 glVertex2f(-4.55,-1.2);
                 glVertex2f(-4.63,-1.53);
                 glVertex2f(-4.47,-1.53);
                 glVertex2f(-4.55,-1.45);

    glEnd();



////////////////bag carry man

                                                                //head
    glPushMatrix();
   glTranslatef(positionLorry,0,0);
int q5;

	GLfloat m5=-3.29; GLfloat n5=-.81f; GLfloat radius5q =.08f;
	int triangleAmount5q = 20;


	GLfloat twicePi5q = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(255, 230, 204);
		glVertex2f(m5, n5);
		for(q5 = 0; q5 <= triangleAmount5q;q5++) {
			glVertex2f(
		            m5 + (radius5q * cos(q5 *  twicePi5q / triangleAmount5q)),
			    n5 + (radius5q * sin(q5 * twicePi5q / triangleAmount5q))
			);
		}

    glEnd();
                                                                             //hair
    int q6;

	GLfloat m6=-3.29; GLfloat n6=-.81f; GLfloat radius6q =.08f;
	int triangleAmount6q = 20;


	GLfloat twicePi6q = 1.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(0,0,0);
		glVertex2f(m6, n6);
		for(q6 = 0; q6 <= triangleAmount6q;q6++) {
			glVertex2f(
		            m6 + (radius6q * cos(q6 *  twicePi6q / triangleAmount6q)),
			    n6 + (radius6q * sin(q6 * twicePi6q / triangleAmount6q))
			);
		}

    glEnd();



                                                     //nack
      glBegin(GL_QUADS);
              glColor3ub(255, 230, 204);
              glVertex2f(-3.31,-.92);
              glVertex2f(-3.27,-.92);
              glVertex2f(-3.27,-.89);
              glVertex2f(-3.31,-.89);
    glEnd();
                                                  //body blue dress
      glBegin(GL_QUADS);
              glColor3ub(0, 102, 255);
              glVertex2f(-3.35,-1.15);
              glVertex2f(-3.2,-1.15);
              glVertex2f(-3.21,-1.01);
              glVertex2f(-3.35,-1.01);
                                                  //orange dr
    glEnd();
     glBegin(GL_QUADS);
              glColor3ub(255, 169, 77);
              glVertex2f(-3.35,-1.01);
              glVertex2f(-3.21,-1.01);
              glVertex2f(-3.21,-.92);
              glVertex2f(-3.34,-.92);
    glEnd();
                                                  //hand
     glBegin(GL_POLYGON);
              glColor3ub(255, 169, 77);
              glVertex2f(-3.32,-.92);
              glVertex2f(-3.38,-.92);
              glVertex2f(-3.39,-.94);
              glVertex2f(-3.41,-1);
              glVertex2f(-3.41,-1.07);
              glVertex2f(-3.37,-1.07);
              glVertex2f(-3.35,-.96);
                glEnd();
                                                  //hand right
     glBegin(GL_POLYGON);
              glColor3ub(255, 169, 77);
              glVertex2f(-3.23,-.92);
              glVertex2f(-3.17,-.93);
              glVertex2f(-3.15,-.97);
              glVertex2f(-3.14,-1);
              glVertex2f(-3.14,-1.07);
              glVertex2f(-3.18,-1.07);
               glVertex2f(-3.21,-.96);
              glEnd();

      glBegin(GL_QUADS);
              glColor3ub(255, 230, 204);
              glVertex2f(-3.4,-1.22);
              glVertex2f(-3.38,-1.22);
              glVertex2f(-3.37,-1.07);
              glVertex2f(-3.41,-1.07);
    glEnd();
    glBegin(GL_QUADS);
              glColor3ub(255, 230, 204);
              glVertex2f(-3.16,-1.22);
              glVertex2f(-3.14,-1.22);
              glVertex2f(-3.14,-1.07);
              glVertex2f(-3.17,-1.07);
    glEnd();



                                                      //blue dr
         glBegin(GL_QUADS);
              glColor3ub(0, 102, 255);
              glVertex2f(-3.33,-1.01);
              glVertex2f(-3.31,-1.01);
              glVertex2f(-3.31,-.92);
              glVertex2f(-3.33,-.92);
    glEnd();
     glBegin(GL_QUADS);
              glColor3ub(0, 102, 255);
              glVertex2f(-3.26,-1.01);
              glVertex2f(-3.24,-1.01);
              glVertex2f(-3.24,-.92);
              glVertex2f(-3.26,-.92);
    glEnd();

                                                  //leg1
      glBegin(GL_QUADS);
              glColor3ub(0, 102, 255);
              glVertex2f(-3.32,-1.45);
              glVertex2f(-3.28,-1.45);
              glVertex2f(-3.28,-1.15);
              glVertex2f(-3.35,-1.15);
    glEnd();
                                                  //leg2
      glBegin(GL_QUADS);
              glColor3ub(0, 102, 255);
              glVertex2f(-3.24,-1.45);
              glVertex2f(-3.2,-1.45);
              glVertex2f(-3.2,-1.15);
              glVertex2f(-3.28,-1.15);
    glEnd();
                                                  //shoe1
      glBegin(GL_QUADS);
              glColor3ub(0, 0, 0);
              glVertex2f(-3.38,-1.48);
              glVertex2f(-3.28,-1.48);
              glVertex2f(-3.28,-1.45);
              glVertex2f(-3.32,-1.45);
    glEnd();
                                                  //shoe2
      glBegin(GL_QUADS);
             glColor3ub(0, 0, 0);
              glVertex2f(-3.24,-1.48);
              glVertex2f(-3.15,-1.48);
              glVertex2f(-3.2,-1.45);
              glVertex2f(-3.24,-1.45);
    glEnd();
                                                   //lorry 1st
    glBegin(GL_QUADS);
              glColor3ub(0, 0, 255);

              glVertex2f(-3.14,-1.22);
              glVertex2f(-3.07,-1.22);
              glVertex2f(-3.06,-1.2);
              glVertex2f(-3.14,-1.2);

    glEnd();
    glBegin(GL_QUADS);
              glColor3ub(194, 214, 214);

              glVertex2f(-3.07,-1.22);
              glVertex2f(-3.07,-1.45);
              glVertex2f(-3.05,-1.45);
              glVertex2f(-3.05,-1.2);
              glEnd();
 glBegin(GL_QUADS);
              glColor3ub(194, 214, 214);

              glVertex2f(-3.08,-1.45);
              glVertex2f(-3.08,-1.5);
              glVertex2f(-2.52,-1.5);
              glVertex2f(-2.52,-1.45);
    glEnd();
                                                     //bag
               glBegin(GL_QUADS);
              glColor3ub(179, 89, 0);

              glVertex2f(-3.03,-1.45);
              glVertex2f(-2.75,-1.45);
              glVertex2f(-2.75,-1.25);
              glVertex2f(-3.03,-1.25);
          glColor3ub(0, 89, 179);
              glVertex2f(-3.04,-1.45);
              glVertex2f(-2.86,-1.45);
              glVertex2f(-2.87,-1.32);
              glVertex2f(-3.04,-1.32);
          glColor3ub(102, 153, 153);
              glVertex2f(-2.7,-1.45);
              glVertex2f(-2.55,-1.45);
              glVertex2f(-2.55,-1.2);
              glVertex2f(-2.7,-1.2);

    glEnd();
    glBegin(GL_LINES);
              glColor3ub(0 , 0, 0);
              glVertex2f(-2.97,-1.25);
              glVertex2f(-2.93,-1.2);
              glVertex2f(-2.93,-1.2);
              glVertex2f(-2.86,-1.2);
              glVertex2f(-2.86,-1.2);
              glVertex2f(-2.82,-1.25);
              glVertex2f(-2.99,-1.32);
              glVertex2f(-2.99,-1.29);
              glVertex2f(-2.99,-1.29);
              glVertex2f(-2.92,-1.29);
              glVertex2f(-2.92,-1.29);
              glVertex2f(-2.92,-1.32);
              //glVertex2f();
              glEnd();
              int q11;

	GLfloat m11=-2.99; GLfloat n11=-1.53f; GLfloat radius11q =.03f;
	int triangleAmount11q = 20;


	GLfloat twicePi11q = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(0,0,0);
		glVertex2f(m11, n11);
		for(q11 = 0; q11 <= triangleAmount11q;q11++) {
			glVertex2f(
		            m11 + (radius11q * cos(q11 *  twicePi11q / triangleAmount11q)),
			    n11 + (radius11q * sin(q11 * twicePi11q / triangleAmount11q))
			);
		}

    glEnd();

   int q12;

	GLfloat m12=-2.62; GLfloat n12=-1.53f; GLfloat radius12q =.03f;
	int triangleAmount12q = 20;


	GLfloat twicePi12q = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(0,0,0);
		glVertex2f(m12, n12);
		for(q12 = 0; q12 <= triangleAmount12q;q12++) {
			glVertex2f(
		            m12 + (radius12q * cos(q12 *  twicePi12q / triangleAmount12q)),
			    n12 + (radius12q * sin(q12 * twicePi12q / triangleAmount12q))
			);
		}

    glEnd();


glPopMatrix();
///////////////////////////////////////////////////







/////////////////////////////////////////////////////// Md. Ibrahim

    //Lorry_1
///////////////////////////////////////////////////
    glPushMatrix();
    glTranslatef(position_9,0,0);
    glBegin(GL_POLYGON);
              glColor3ub(255, 121, 77);
              glVertex2f(4.38,-0.44);
              glVertex2f(4.32,-0.6);
              glVertex2f(4.29,-0.6);
              glVertex2f(4.29,-0.68);
              glVertex2f(4.34,-0.68);
              glVertex2f(4.36,-0.75);
              glVertex2f(4.49,-0.75);
              glVertex2f(4.51,-0.7);
              glVertex2f(4.54,-0.7);
              glVertex2f(4.56,-0.75);
              glVertex2f(4.58,-0.75);
              glVertex2f(4.58,-0.65);
              glVertex2f(4.54,-0.44);

    glEnd();

    //Lorry Door
    glBegin(GL_QUADS);
              glColor3ub(191, 191, 191);
              glVertex2f(4.4,-0.68);
              glVertex2f(4.47,-0.68);
              glVertex2f(4.47,-0.5);
              glVertex2f(4.4,-0.5);
    glEnd();

    //Lorry Handle_1
    glBegin(GL_QUADS);
              glColor3ub(51, 51, 51);
              glVertex2f(4.27,-0.72);
              glVertex2f(4.29,-0.72);
              glVertex2f(4.29,-0.28);
              glVertex2f(4.27,-0.28);
    glEnd();

    //Lorry Handle_2
    glBegin(GL_QUADS);
              glColor3ub(51, 51, 51);
              glVertex2f(4.06,-0.72);
              glVertex2f(4.27,-0.72);
              glVertex2f(4.27,-0.7);
              glVertex2f(4.06,-0.7);
    glEnd();


    //Lorry box_1
    glBegin(GL_QUADS);
              glColor3ub(255, 179, 102);
              glVertex2f(4.1,-0.7);
              glVertex2f(4.25,-0.7);
              glVertex2f(4.25,-0.55);
              glVertex2f(4.1,-0.55);
    glEnd();

    //Lorry box_2
    glBegin(GL_QUADS);
              glColor3ub(255, 217, 179);
              glVertex2f(4.09,-0.55);
              glVertex2f(4.24,-0.55);
              glVertex2f(4.24,-0.38);
              glVertex2f(4.09,-0.38);
    glEnd();

    //lorry wheel_1
    GLfloat x9=4.32f; GLfloat y9=-0.72f; GLfloat radius_9 =0.04f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(26, 26, 26);
		glVertex2f(x9, y9);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x9 + (radius_9 * cos(i *  twicePi / triangleAmount)),
			    y9 + (radius_9 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


    //lorry wheel_2
    GLfloat x10=4.53f; GLfloat y10=-0.72f; GLfloat radius_10 =0.04f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(26, 26, 26);
		glVertex2f(x10, y10);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x10 + (radius_10 * cos(i *  twicePi / triangleAmount)),
			    y10 + (radius_10 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glPopMatrix();




///////////////////////////////////////////////////////////


//Lorry with man
////////////////////////////////////////////////////////////////

    //base
    glPushMatrix();
    glTranslatef(position_8,0,0);
    glBegin(GL_QUADS);
              glColor3ub(51, 51, 51);
              glVertex2f(3.32,-1.49);
              glVertex2f(3.75,-1.49);
              glVertex2f(3.75,-1.45);
              glVertex2f(3.32,-1.45);
    glEnd();

    //Bag back
    glBegin(GL_QUADS);
              glColor3ub(134, 45, 45);
              glVertex2f(3.34,-1.45);
              glVertex2f(3.34,-1.29);
              glVertex2f(3.62,-1.29);
              glVertex2f(3.62,-1.45);
    glEnd();

    //Bag front
    glBegin(GL_QUADS);
              glColor3ub(255, 140, 26);
              glVertex2f(3.4,-1.45);
              glVertex2f(3.68,-1.45);
              glVertex2f(3.68,-1.33);
              glVertex2f(3.4,-1.33);
    glEnd();


    //Lorry handle_1
    glBegin(GL_QUADS);
              glColor3ub(64, 64, 64);
              glVertex2f(3.7,-1.45);
              glVertex2f(3.74,-1.45);
              glVertex2f(3.74,-1.42);
              glVertex2f(3.7,-1.42);
    glEnd();

    //Lorry handle_2
    glBegin(GL_QUADS);
              glColor3ub(89, 89, 89);
              glVertex2f(3.7,-1.42);
              glVertex2f(3.73,-1.42);
              glVertex2f(3.73,-1.2);
              glVertex2f(3.7,-1.2);
    glEnd();

    //Lorry handle_3
    glBegin(GL_POLYGON);
              glColor3ub(89, 89, 89);
              glVertex2f(3.7,-1.2);
              glVertex2f(3.8,-1.2);
              glVertex2f(3.8,-1.17);
              glVertex2f(3.72,-1.17);
              glVertex2f(3.71,-1.17);
              glVertex2f(3.71,-1.18);
              glVertex2f(3.71,-1.19);
    glEnd();

    //lorry wheel_1
    GLfloat x7=3.37f; GLfloat y7=-1.51f; GLfloat radius_7 =0.035f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(26, 26, 26);
		glVertex2f(x7, y7);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x7 + (radius_7 * cos(i *  twicePi / triangleAmount)),
			    y7 + (radius_7 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//lorry wheel_2
    GLfloat x8=3.71f; GLfloat y8=-1.51f; GLfloat radius_8 =0.035f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(26, 26, 26);
		glVertex2f(x8, y8);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x8 + (radius_8 * cos(i *  twicePi / triangleAmount)),
			    y8 + (radius_8 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


    //Man
    //left hand
    glBegin(GL_QUADS);
              glColor3ub(255, 140, 26);
              glVertex2f(3.8,-1.2);
              glVertex2f(3.86,-1.12);
              glVertex2f(3.86,-1.07);
              glVertex2f(3.8,-1.17);
    glEnd();

    //Body
    glBegin(GL_POLYGON);
              glColor3ub(0, 128, 255);
              glVertex2f(3.86,-1.27);
              glVertex2f(4,-1.27);
              glVertex2f(4,-1.12);
              glVertex2f(4.01,-1.07);
              glVertex2f(3.86,-1.07);
              glVertex2f(3.86,-1.12);
    glEnd();

    //right hand
    glBegin(GL_QUADS);
              glColor3ub(255, 140, 26);
              glVertex2f(4,-1.12);
              glVertex2f(4.05,-1.2);
              glVertex2f(4.07,-1.2);
              glVertex2f(4.01,-1.07);
    glEnd();


    //right hand_1
    glBegin(GL_POLYGON);
              glColor3ub(255, 191, 0);
              glVertex2f(4.05,-1.2);
              glVertex2f(4.04,-1.23);
              glVertex2f(4.06,-1.24);
              glVertex2f(4.08,-1.24);
              glVertex2f(4.09,-1.23);
              glVertex2f(4.07,-1.2);
    glEnd();

    //legs
    glBegin(GL_POLYGON);
              glColor3ub(0, 64, 128);
              glVertex2f(3.86,-1.27);
              glVertex2f(3.85,-1.47);
              glVertex2f(3.88,-1.48);
              glVertex2f(3.94,-1.3);
              glVertex2f(3.97,-1.48);
              glVertex2f(4,-1.49);
              glVertex2f(4,-1.27);
    glEnd();

    //foot_1
    glBegin(GL_QUADS);
              glColor3ub(13, 13, 13);
              glVertex2f(3.85,-1.47);
              glVertex2f(3.83,-1.51);
              glVertex2f(3.85,-1.52);
              glVertex2f(3.88,-1.48);
    glEnd();

    //foot_2
    glBegin(GL_QUADS);
              glColor3ub(13, 13, 13);
              glVertex2f(3.97,-1.47);
              glVertex2f(3.95,-1.51);
              glVertex2f(3.97,-1.52);
              glVertex2f(4,-1.49);
    glEnd();


    //Head
    glBegin(GL_POLYGON);
              glColor3ub(255, 179, 102);
              glVertex2f(3.94,-1.09);
              glVertex2f(3.99,-1.05);
              glVertex2f(3.99,-1.0);
              glVertex2f(3.94,-0.98);
              glVertex2f(3.89,-1.0);
              glVertex2f(3.88,-1.05);
    glEnd();

    //hair
    glBegin(GL_POLYGON);
              glColor3ub(13, 13, 13);
              glVertex2f(3.89,-1.02);
              glVertex2f(3.9,-1.01);
              glVertex2f(3.91,-1.0);
              glVertex2f(3.93,-1.0);
              glVertex2f(3.95,-1.0);
              glVertex2f(3.97,-1.0);
              glVertex2f(3.98,-1.01);
              glVertex2f(3.99,-1.01);
              glVertex2f(3.99,-1.0);
              glVertex2f(3.94,-0.98);
              glVertex2f(3.89,-1);
    glEnd();

    //Eye_1
    glBegin(GL_QUADS);
              glColor3ub(13, 13, 13);
              glVertex2f(3.9,-1.05);
              glVertex2f(3.92,-1.05);
              glVertex2f(3.92,-1.03);
              glVertex2f(3.9,-1.03);
    glEnd();

    //Eye_2
    glBegin(GL_QUADS);
              glColor3ub(13, 13, 13);
              glVertex2f(3.96,-1.05);
              glVertex2f(3.97,-1.05);
              glVertex2f(3.97,-1.03);
              glVertex2f(3.96,-1.03);
    glEnd();

    //mouth
    glBegin(GL_TRIANGLES);
              glColor3ub(13, 13, 13);
              glVertex2f(3.92,-1.06);
              glVertex2f(3.94,-1.08);
              glVertex2f(3.96,-1.06);
    glEnd();

    glPopMatrix();




    //Passenger
//////////////////////////////////////////////

    //left leg
    glPushMatrix();
    glTranslatef(0,position_5,0);
    glBegin(GL_QUADS);
              glColor3ub(153, 102, 51);
              glVertex2f(1.76,-1.22);
              glVertex2f(1.76,-1.58);
              glVertex2f(1.8,-1.58);
              glVertex2f(1.87,-1.22);
    glEnd();
    //right leg
    glBegin(GL_QUADS);
              glColor3ub(153, 102, 51);
              glVertex2f(1.91,-1.22);
              glVertex2f(1.96,-1.58);
              glVertex2f(2,-1.58);
              glVertex2f(2.01,-1.22);
    glEnd();

    //Body
    glBegin(GL_QUADS);
              glColor3ub(102, 163, 255);
              glVertex2f(1.76,-1.22);
              glVertex2f(2.01,-1.22);
              glVertex2f(2.01,-0.77);
              glVertex2f(1.77,-0.78);
    glEnd();

    //head
    glBegin(GL_POLYGON);
              glColor3ub(38, 38, 38);
              glVertex2f(1.86,-0.78);
              glVertex2f(1.94,-0.77);
              glVertex2f(1.96,-0.73);
              glVertex2f(1.97,-0.67);
              glVertex2f(1.96,-0.62);
              glVertex2f(1.93,-0.59);
              glVertex2f(1.87,-0.59);
              glVertex2f(1.83,-0.62);
              glVertex2f(1.82,-0.67);
              glVertex2f(1.83,-0.72);
    glEnd();

    //Bag
    glBegin(GL_QUADS);
              glColor3ub(198, 83, 83);
              glVertex2f(1.8,-0.78);
              glVertex2f(1.8,-1.05);
              glVertex2f(1.98,-1.05);
              glVertex2f(1.98,-0.77);
    glEnd();

    //left hand
    glBegin(GL_QUADS);
              glColor3ub(255, 153, 102);
              glVertex2f(1.77,-0.78);
              glVertex2f(1.61,-1.07);
              glVertex2f(1.63,-1.09);
              glVertex2f(1.77,-0.9);
    glEnd();

    //right hand
    glBegin(GL_QUADS);
              glColor3ub(255, 153, 102);
              glVertex2f(2.01,-0.9);
              glVertex2f(2.11,-1.09);
              glVertex2f(2.14,-1.07);
              glVertex2f(2.01,-0.77);
    glEnd();

    //left foot
    glBegin(GL_QUADS);
              glColor3ub(51, 51, 51);
              glVertex2f(1.76,-1.58);
              glVertex2f(1.73,-1.61);
              glVertex2f(1.82,-1.61);
              glVertex2f(1.8,-1.58);
    glEnd();

    //right foot
    glBegin(GL_QUADS);
              glColor3ub(51, 51, 51);
              glVertex2f(1.96,-1.58);
              glVertex2f(1.93,-1.61);
              glVertex2f(2.02,-1.61);
              glVertex2f(2,-1.58);
    glEnd();


    //left hand circle
    GLfloat x24=1.6f; GLfloat y24=-1.1f; GLfloat radius_24 =0.035f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(255, 204, 179);
		glVertex2f(x24, y24);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x24 + (radius_24 * cos(i *  twicePi / triangleAmount)),
			    y24 + (radius_24 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	//right hand circle
    GLfloat x25=2.14f; GLfloat y25=-1.09f; GLfloat radius_25 =0.035f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(255, 204, 179);
		glVertex2f(x25, y25);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x25 + (radius_25 * cos(i *  twicePi / triangleAmount)),
			    y25 + (radius_25 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glPopMatrix();




////////////////////////////////////////////////////////////////





////////////////////////////////////////////////////////
////////////////////////////////////////////////////////


    // Main runway
    glBegin(GL_QUADS);
              glColor3ub(89,89,89);
              glVertex2f(-5,-3.53);
              glVertex2f(5,-3.53);
              glVertex2f(5,-2);
              glVertex2f(-5,-2);
    glEnd();



    // Runway up line/////////// Md. Ibrahim
    /////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////
    glBegin(GL_QUADS);
              glColor3ub(204, 204, 204);
              glVertex2f(-5,-2);
              glVertex2f(5,-2);
              glVertex2f(5,-1.8);
              glVertex2f(-5,-1.8);
    glEnd();

    //Runway light_1
    glBegin(GL_POLYGON);
              glColor3ub(204, 0, 0);
              glVertex2f(-4.7,-1.95);
              glVertex2f(-4.6,-1.95);
              glVertex2f(-4.6,-1.85);
              glVertex2f(-4.62,-1.82);
              glVertex2f(-4.68,-1.82);
              glVertex2f(-4.7,-1.85);

    glEnd();

    //Runway light_2
    glBegin(GL_POLYGON);
              glColor3ub(204, 0, 0);
              glVertex2f(-4,-1.95);
              glVertex2f(-3.9,-1.95);
              glVertex2f(-3.9,-1.85);
              glVertex2f(-3.92,-1.82);
              glVertex2f(-3.98,-1.82);
              glVertex2f(-4,-1.85);

    glEnd();

    //Runway light_3
    glBegin(GL_POLYGON);
              glColor3ub(204, 0, 0);
              glVertex2f(-3.3,-1.95);
              glVertex2f(-3.2,-1.95);
              glVertex2f(-3.2,-1.85);
              glVertex2f(-3.22,-1.82);
              glVertex2f(-3.28,-1.82);
              glVertex2f(-3.3,-1.85);

    glEnd();

    //Runway light_4
    glBegin(GL_POLYGON);
              glColor3ub(204, 0, 0);
              glVertex2f(-2.6,-1.95);
              glVertex2f(-2.5,-1.95);
              glVertex2f(-2.5,-1.85);
              glVertex2f(-2.52,-1.82);
              glVertex2f(-2.58,-1.82);
              glVertex2f(-2.6,-1.85);

    glEnd();

    //Runway light_5
    glBegin(GL_POLYGON);
              glColor3ub(204, 0, 0);
              glVertex2f(-1.9,-1.95);
              glVertex2f(-1.8,-1.95);
              glVertex2f(-1.8,-1.85);
              glVertex2f(-1.82,-1.82);
              glVertex2f(-1.88,-1.82);
              glVertex2f(-1.9,-1.85);

    glEnd();

    //Runway light_6
    glBegin(GL_POLYGON);
              glColor3ub(204, 0, 0);
              glVertex2f(-1.2,-1.95);
              glVertex2f(-1.1,-1.95);
              glVertex2f(-1.1,-1.85);
              glVertex2f(-1.12,-1.82);
              glVertex2f(-1.18,-1.82);
              glVertex2f(-1.2,-1.85);

    glEnd();

    //Runway light_7
    glBegin(GL_POLYGON);
              glColor3ub(204, 0, 0);
              glVertex2f(-0.5,-1.95);
              glVertex2f(-0.4,-1.95);
              glVertex2f(-0.4,-1.85);
              glVertex2f(-0.42,-1.82);
              glVertex2f(-0.48,-1.82);
              glVertex2f(-0.5,-1.85);

    glEnd();

    //Runway light_8
    glBegin(GL_POLYGON);
              glColor3ub(204, 0, 0);
              glVertex2f(0.2,-1.95);
              glVertex2f(0.3,-1.95);
              glVertex2f(0.3,-1.85);
              glVertex2f(0.28,-1.82);
              glVertex2f(0.22,-1.82);
              glVertex2f(0.2,-1.85);

    glEnd();


    //Runway light_9
    glBegin(GL_POLYGON);
              glColor3ub(204, 0, 0);
              glVertex2f(0.9,-1.95);
              glVertex2f(1,-1.95);
              glVertex2f(1,-1.85);
              glVertex2f(0.98,-1.82);
              glVertex2f(0.92,-1.82);
              glVertex2f(0.9,-1.85);

    glEnd();


    //Runway light_10
    glBegin(GL_POLYGON);
              glColor3ub(204, 0, 0);
              glVertex2f(1.6,-1.95);
              glVertex2f(1.7,-1.95);
              glVertex2f(1.7,-1.85);
              glVertex2f(1.68,-1.82);
              glVertex2f(1.62,-1.82);
              glVertex2f(1.6,-1.85);

    glEnd();


    //Runway light_11
    glBegin(GL_POLYGON);
              glColor3ub(204, 0, 0);
              glVertex2f(2.3,-1.95);
              glVertex2f(2.4,-1.95);
              glVertex2f(2.4,-1.85);
              glVertex2f(2.38,-1.82);
              glVertex2f(2.32,-1.82);
              glVertex2f(2.3,-1.85);

    glEnd();


    //Runway light_12
    glBegin(GL_POLYGON);
              glColor3ub(204, 0, 0);
              glVertex2f(3,-1.95);
              glVertex2f(3.1,-1.95);
              glVertex2f(3.1,-1.85);
              glVertex2f(3.08,-1.82);
              glVertex2f(3.02,-1.82);
              glVertex2f(3,-1.85);

    glEnd();


    //Runway light_13
    glBegin(GL_POLYGON);
              glColor3ub(204, 0, 0);
              glVertex2f(3.7,-1.95);
              glVertex2f(3.8,-1.95);
              glVertex2f(3.8,-1.85);
              glVertex2f(3.78,-1.82);
              glVertex2f(3.72,-1.82);
              glVertex2f(3.7,-1.85);

    glEnd();


    //Runway light_14
    glBegin(GL_POLYGON);
              glColor3ub(204, 0, 0);
              glVertex2f(4.4,-1.95);
              glVertex2f(4.5,-1.95);
              glVertex2f(4.5,-1.85);
              glVertex2f(4.48,-1.82);
              glVertex2f(4.42,-1.82);
              glVertex2f(4.4,-1.85);

    glEnd();







////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
    //Md. Ibrahim
    // Runway line
    glBegin(GL_QUADS);
              glColor3ub(255, 187, 51);
              glVertex2f(-5,-2.3);
              glVertex2f(-2.8,-2.3);
              glVertex2f(-2.8,-2.1);
              glVertex2f(-5,-2.1);
    glEnd();
      // Runway line2
    glBegin(GL_QUADS);
              glColor3ub(255, 187, 51);
              glVertex2f(-5,-2.7);
              glVertex2f(-2.8,-2.7);
              glVertex2f(-2.8,-2.5);
              glVertex2f(-5,-2.5);
    glEnd();
      // Runway line3
    glBegin(GL_QUADS);
              glColor3ub(255, 187, 51);
              glVertex2f(-5,-3.1);
              glVertex2f(-2.8,-3.1);
              glVertex2f(-2.8,-2.9);
              glVertex2f(-5,-2.9);
    glEnd();
    // Runway line3
    glBegin(GL_QUADS);
              glColor3ub(255, 187, 51);
              glVertex2f(-5,-3.5);
              glVertex2f(-2.8,-3.5);
              glVertex2f(-2.8,-3.3);
              glVertex2f(-5,-3.3);
    glEnd();
       // Runway line3
    glBegin(GL_QUADS);
              glColor3ub(255, 187, 51);
              glVertex2f(-1,-2.9);
              glVertex2f(1.01,-2.9);
              glVertex2f(1.01,-2.7);
              glVertex2f(-1,-2.7);
    glEnd();
     // Runway line3
    glBegin(GL_QUADS);
              glColor3ub(255, 187, 51);
              glVertex2f(2.49,-2.9);
              glVertex2f(4.5,-2.9);
              glVertex2f(4.5,-2.7);
              glVertex2f(2.49,-2.7);
    glEnd();

////////////////////////////////////////////////////
////////////////////////////////////////////////////

    // Runway down Line
    glBegin(GL_QUADS);
              glColor3ub(204, 204, 204);
              glVertex2f(-5,-3.78);
              glVertex2f(5,-3.78);
              glVertex2f(5,-3.53);
              glVertex2f(-5,-3.53);
    glEnd();


    //Runway light_1
    glBegin(GL_POLYGON);
              glColor3ub(204, 0, 0);
              glVertex2f(-4.7,-3.7);
              glVertex2f(-4.6,-3.7);
              glVertex2f(-4.6,-3.6);
              glVertex2f(-4.62,-3.57);
              glVertex2f(-4.68,-3.57);
              glVertex2f(-4.7,-3.6);

    glEnd();

    //Runway light_2
    glBegin(GL_POLYGON);
              glColor3ub(204, 0, 0);
              glVertex2f(-4,-3.7);
              glVertex2f(-3.9,-3.7);
              glVertex2f(-3.9,-3.6);
              glVertex2f(-3.92,-3.57);
              glVertex2f(-3.98,-3.57);
              glVertex2f(-4,-3.6);

    glEnd();

    //Runway light_3
    glBegin(GL_POLYGON);
              glColor3ub(204, 0, 0);
              glVertex2f(-3.3,-3.7);
              glVertex2f(-3.2,-3.7);
              glVertex2f(-3.2,-3.6);
              glVertex2f(-3.22,-3.57);
              glVertex2f(-3.28,-3.57);
              glVertex2f(-3.3,-3.6);

    glEnd();

    //Runway light_4
    glBegin(GL_POLYGON);
              glColor3ub(204, 0, 0);
              glVertex2f(-2.6,-3.7);
              glVertex2f(-2.5,-3.7);
              glVertex2f(-2.5,-3.6);
              glVertex2f(-2.52,-3.57);
              glVertex2f(-2.58,-3.57);
              glVertex2f(-2.6,-3.6);

    glEnd();

    //Runway light_5
    glBegin(GL_POLYGON);
              glColor3ub(204, 0, 0);
              glVertex2f(-1.9,-3.7);
              glVertex2f(-1.8,-3.7);
              glVertex2f(-1.8,-3.6);
              glVertex2f(-1.82,-3.57);
              glVertex2f(-1.88,-3.57);
              glVertex2f(-1.9,-3.6);

    glEnd();

    //Runway light_6
    glBegin(GL_POLYGON);
              glColor3ub(204, 0, 0);
              glVertex2f(-1.2,-3.7);
              glVertex2f(-1.1,-3.7);
              glVertex2f(-1.1,-3.6);
              glVertex2f(-1.12,-3.57);
              glVertex2f(-1.18,-3.57);
              glVertex2f(-1.2,-3.6);

    glEnd();

    //Runway light_7
    glBegin(GL_POLYGON);
              glColor3ub(204, 0, 0);
              glVertex2f(-0.5,-3.7);
              glVertex2f(-0.4,-3.7);
              glVertex2f(-0.4,-3.6);
              glVertex2f(-0.42,-3.57);
              glVertex2f(-0.48,-3.57);
              glVertex2f(-0.5,-3.6);

    glEnd();

    //Runway light_8
    glBegin(GL_POLYGON);
              glColor3ub(204, 0, 0);
              glVertex2f(0.2,-3.7);
              glVertex2f(0.3,-3.7);
              glVertex2f(0.3,-3.6);
              glVertex2f(0.28,-3.57);
              glVertex2f(0.22,-3.57);
              glVertex2f(0.2,-3.6);

    glEnd();


    //Runway light_9
    glBegin(GL_POLYGON);
              glColor3ub(204, 0, 0);
              glVertex2f(0.9,-3.7);
              glVertex2f(1,-3.7);
              glVertex2f(1,-3.6);
              glVertex2f(0.98,-3.57);
              glVertex2f(0.92,-3.57);
              glVertex2f(0.9,-3.6);

    glEnd();


    //Runway light_10
    glBegin(GL_POLYGON);
              glColor3ub(204, 0, 0);
              glVertex2f(1.6,-3.7);
              glVertex2f(1.7,-3.7);
              glVertex2f(1.7,-3.6);
              glVertex2f(1.68,-3.57);
              glVertex2f(1.62,-3.57);
              glVertex2f(1.6,-3.6);

    glEnd();


    //Runway light_11
    glBegin(GL_POLYGON);
              glColor3ub(204, 0, 0);
              glVertex2f(2.3,-3.7);
              glVertex2f(2.4,-3.7);
              glVertex2f(2.4,-3.6);
              glVertex2f(2.38,-3.57);
              glVertex2f(2.32,-3.57);
              glVertex2f(2.3,-3.6);

    glEnd();


    //Runway light_12
    glBegin(GL_POLYGON);
              glColor3ub(204, 0, 0);
              glVertex2f(3,-3.7);
              glVertex2f(3.1,-3.7);
              glVertex2f(3.1,-3.6);
              glVertex2f(3.08,-3.57);
              glVertex2f(3.02,-3.57);
              glVertex2f(3,-3.6);

    glEnd();


    //Runway light_13
    glBegin(GL_POLYGON);
              glColor3ub(204, 0, 0);
              glVertex2f(3.7,-3.7);
              glVertex2f(3.8,-3.7);
              glVertex2f(3.8,-3.6);
              glVertex2f(3.78,-3.57);
              glVertex2f(3.72,-3.57);
              glVertex2f(3.7,-3.6);

    glEnd();


    //Runway light_14
    glBegin(GL_POLYGON);
              glColor3ub(204, 0, 0);
              glVertex2f(4.4,-3.7);
              glVertex2f(4.5,-3.7);
              glVertex2f(4.5,-3.6);
              glVertex2f(4.48,-3.57);
              glVertex2f(4.42,-3.57);
              glVertex2f(4.4,-3.6);

    glEnd();








// Runway Plane landing/////////// Md. Ibrahim
////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

//Plane body
    glPushMatrix();
    glTranslatef(position_3,position_4,0);
    glBegin(GL_POLYGON);
              glColor3ub(128, 179, 255);
              glVertex2f(-8.63,-1.11);
              glVertex2f(-8.3,-1.24);
              glVertex2f(-7.05,-1.24);
              glVertex2f(-6.97,-1.23);
              glVertex2f(-6.9,-1.21);
              glVertex2f(-6.84,-1.2);
              glVertex2f(-6.76,-1.17);
              glVertex2f(-6.69,-1.15);
              glVertex2f(-6.65,-1.11);
              glVertex2f(-6.68,-1.07);
              glVertex2f(-6.72,-1.04);
              glVertex2f(-6.79,-1.01);
              glVertex2f(-6.85,-0.98);
              glVertex2f(-6.91,-0.94);
              glVertex2f(-6.95,-0.9);
              glVertex2f(-7,-0.86);
              glVertex2f(-7.1,-0.84);
              glVertex2f(-7.2,-0.84);
              glVertex2f(-8.15,-0.84);
              glVertex2f(-8.62,-1.02);
              glVertex2f(-8.64,-1.04);
              glVertex2f(-8.65,-1.06);
              glVertex2f(-8.65,-1.08);

    glEnd();

    //pilot window
    glBegin(GL_POLYGON);
              glColor3ub(51, 51, 51);
              glVertex2f(-7.14,-0.93);
              glVertex2f(-6.92,-0.93);
              glVertex2f(-6.95,-0.9);
              glVertex2f(-7,-0.86);
              glVertex2f(-7.01,-0.86);
              glVertex2f(-7.18,-0.86);
    glEnd();

    //plane tail
    glBegin(GL_POLYGON);
              glColor3ub(102, 102, 102);
              glVertex2f(-8.43,-0.95);
              glVertex2f(-8.15,-0.84);
              glVertex2f(-7.92,-0.84);
              glVertex2f(-8.09,-0.79);
              glVertex2f(-8.2,-0.75);
              glVertex2f(-8.28,-0.69);
              glVertex2f(-8.32,-0.65);
              glVertex2f(-8.34,-0.63);
              glVertex2f(-8.38,-0.6);
              glVertex2f(-8.42,-0.58);
              glVertex2f(-8.47,-0.57);
              glVertex2f(-8.7,-0.57);
    glEnd();

    //plane headlight
    glBegin(GL_QUADS);
              glColor3ub(255, 255, 255);
              glVertex2f(-6.69,-1.15);
              glVertex2f(-5.84,-1.32);
              glVertex2f(-5.84,-1);
              glVertex2f(-6.65,-1.11);

    glEnd();


    //plane engine
    glBegin(GL_POLYGON);
              glColor3ub(230, 230, 230);
              glVertex2f(-8.58,-0.96);
              glVertex2f(-8.28,-1.0);
              glVertex2f(-8.06,-0.98);
              glVertex2f(-8.06,-0.82);
              glVertex2f(-8.28,-0.8);
              glVertex2f(-8.58,-0.84);
    glEnd();

    //plane engine_1
    glBegin(GL_QUADS);
              glColor3ub(255, 128, 128);
              glVertex2f(-8.08,-0.98);
              glVertex2f(-8.06,-0.98);
              glVertex2f(-8.06,-0.82);
              glVertex2f(-8.08,-0.82);
    glEnd();

    //plane engine_2
    glBegin(GL_QUADS);
              glColor3ub(255, 128, 128);
              glVertex2f(-8.58,-0.96);
              glVertex2f(-8.56,-0.96);
              glVertex2f(-8.56,-0.84);
              glVertex2f(-8.58,-0.84);
    glEnd();

    //plane wing_1
    glBegin(GL_QUADS);
              glColor3ub(255, 102, 102);
              glVertex2f(-8.86,-1.32);
              glVertex2f(-8.66,-1.32);
              glVertex2f(-7.52,-1.13);
              glVertex2f(-8.1,-1.13);
    glEnd();


    //plane door
    glBegin(GL_POLYGON);
              glColor3ub(242, 242, 242);
              glVertex2f(-7.3,-1.14);
              glVertex2f(-7.28,-1.16);
              glVertex2f(-7.22,-1.16);
              glVertex2f(-7.2,-1.14);
              glVertex2f(-7.2,-1.0);
              glVertex2f(-7.22,-0.98);
              glVertex2f(-7.28,-0.98);
              glVertex2f(-7.3,-1.0);
    glEnd();





    //window_1
    GLfloat x11=-7.44f; GLfloat y11=-1.0f; GLfloat radius_11 =0.04f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(102, 102, 102);
		glVertex2f(x11, y11);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x11 + (radius_11 * cos(i *  twicePi / triangleAmount)),
			    y11 + (radius_11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


    //window_2
    GLfloat x12=-7.54f; GLfloat y12=-1.0f; GLfloat radius_12 =0.04f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(102, 102, 102);
		glVertex2f(x12, y12);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x12 + (radius_12 * cos(i *  twicePi / triangleAmount)),
			    y12 + (radius_12 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


    //window_3
    GLfloat x13=-7.44f; GLfloat y13=-1.0f; GLfloat radius_13 =0.04f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(102, 102, 102);
		glVertex2f(x13, y13);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x13 + (radius_13 * cos(i *  twicePi / triangleAmount)),
			    y13 + (radius_13 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


    //window_4
    GLfloat x14=-7.64f; GLfloat y14=-1.0f; GLfloat radius_14 =0.04f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(102, 102, 102);
		glVertex2f(x14, y14);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x14 + (radius_14 * cos(i *  twicePi / triangleAmount)),
			    y14 + (radius_14 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


    //window_5
    GLfloat x15=-7.74f; GLfloat y15=-1.0f; GLfloat radius_15 =0.04f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(102, 102, 102);
		glVertex2f(x15, y15);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x15 + (radius_15 * cos(i *  twicePi / triangleAmount)),
			    y15 + (radius_15 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


    //window_6
    GLfloat x16=-7.84f; GLfloat y16=-1.0f; GLfloat radius_16 =0.04f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(102, 102, 102);
		glVertex2f(x16, y16);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x16 + (radius_16 * cos(i *  twicePi / triangleAmount)),
			    y16 + (radius_16 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//window_7
    GLfloat x17=-7.94f; GLfloat y17=-1.0f; GLfloat radius_17 =0.04f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(102, 102, 102);
		glVertex2f(x17, y17);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x17 + (radius_17 * cos(i *  twicePi / triangleAmount)),
			    y17 + (radius_17 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();




    //front wheel stand
    glBegin(GL_QUADS);
              glColor3ub(153, 153, 153);
              glVertex2f(-7.13,-1.31);
              glVertex2f(-7.1,-1.31);
              glVertex2f(-7.1,-1.24);
              glVertex2f(-7.13,-1.24);
    glEnd();

    //front wheel
    GLfloat x18=-7.11f; GLfloat y18=-1.33f; GLfloat radius_18 =0.04f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(64, 64, 64);
		glVertex2f(x18, y18);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x18 + (radius_18 * cos(i *  twicePi / triangleAmount)),
			    y18 + (radius_18 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//front wheel_1
    GLfloat x19=-7.11f; GLfloat y19=-1.33f; GLfloat radius_19 =0.025f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(128, 128, 128);
		glVertex2f(x19, y19);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x19 + (radius_19 * cos(i *  twicePi / triangleAmount)),
			    y19 + (radius_19 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();




    //back wheel stand
    glBegin(GL_QUADS);
              glColor3ub(153, 153, 153);
              glVertex2f(-8.15,-1.31);
              glVertex2f(-8,-1.31);
              glVertex2f(-8.05,-1.24);
              glVertex2f(-8.1,-1.24);
    glEnd();


    //back wheel_1
    GLfloat x20=-8.12f; GLfloat y20=-1.33f; GLfloat radius_20 =0.04f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(64, 64, 64);
		glVertex2f(x20, y20);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x20 + (radius_20 * cos(i *  twicePi / triangleAmount)),
			    y20 + (radius_20 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//front wheel_1.1
    GLfloat x21=-8.12f; GLfloat y21=-1.33f; GLfloat radius_21 =0.025f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(128, 128, 128);
		glVertex2f(x21, y21);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x21 + (radius_21 * cos(i *  twicePi / triangleAmount)),
			    y21 + (radius_21 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();






	//back wheel_2
    GLfloat x22=-8.04f; GLfloat y22=-1.33f; GLfloat radius_22 =0.04f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(64, 64, 64);
		glVertex2f(x22, y22);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x22 + (radius_22 * cos(i *  twicePi / triangleAmount)),
			    y22 + (radius_22 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//front wheel_2.1
    GLfloat x23=-8.04f; GLfloat y23=-1.33f; GLfloat radius_23 =0.025f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(128, 128, 128);
		glVertex2f(x23, y23);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x23 + (radius_23 * cos(i *  twicePi / triangleAmount)),
			    y23 + (radius_23 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glPopMatrix();




/////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////






// Middle Space
////////////////////////////////////////////////////


///////////////////////////////////////////////////



	glFlush();  // Render now
}

void night_demo(int val)
{
    glutDisplayFunc(night);
}




void evening()
{
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;


	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	//gluOrtho2D(-5,5,-4,4); //(L,R,B,T)

    // Full BG
    glBegin(GL_QUADS);
              glColor3ub(77, 195, 255);
              glVertex2f(-9,-4);
              glVertex2f(5,-4);
              glVertex2f(5,4);
              glVertex2f(-9,4);
    glEnd();


/////////////////////////////////////////////////////////// Sobita



      // Sky
      glBegin(GL_QUADS);
      glColor3ub(255, 204, 153);
      glVertex2f(-5,5);
      glVertex2f(5,5);
      glVertex2f(5,.1);
      glVertex2f(-5,.1);
      glEnd();

      // low line
    glBegin(GL_QUADS);
              glColor3ub(46, 184, 46);
              glVertex2f(-5,-4);
              glVertex2f(5,-4);
              glVertex2f(5,-3.78);
              glVertex2f(-5,-3.78);
    glEnd();

      glBegin(GL_QUADS);
      glColor3ub(255, 179, 102);
      glVertex2f(5,.1);
      glVertex2f(-5,.1);
      glVertex2f(-5,2);
      glVertex2f(5,2);
      glEnd();

glPushMatrix();
   glTranslatef(0,positionSun,0);
    int q15;                                                            //sun

	GLfloat m15=1.79f; GLfloat n15=4.26f; GLfloat radius15q =.25;
	int triangleAmount15q = 50; //# of triangles used to draw circle


	GLfloat twicePi15q = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(230, 172, 0);
		glVertex2f(m15, n15); // center of circle
		for(q15 = 0; q15 <= triangleAmount15q;q15++) {
			glVertex2f(
		            m15 + (radius15q * cos(q15 *  twicePi15q / triangleAmount15q)),
			    n15 + (radius15q * sin(q15 * twicePi15q / triangleAmount15q))
			);
		}
	glEnd();
	glPopMatrix();



///////////////////////////////////////////////////////////




//Rozina apu
//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////


    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
    GLfloat a7=-4.45f;  GLfloat b7=3.9f; GLfloat radius7 =0.22f;//cloud 1
    int i7;
    int triangleAmount7 = 20;
    GLfloat twicePi7 = 2.0f * PI;
    glColor3ub(242,242,242);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(a7, b7); // center of circle
		for(i7 = 0; i7 <= triangleAmount7;i7++) {
			glVertex2f(
		            a7 + (radius7 * cos(i7*  twicePi7/ triangleAmount7)),
			    b7 + (radius7* sin(i7 * twicePi7/ triangleAmount7))
			);
		}
	glEnd();

      GLfloat a8=-4.1f;  GLfloat b8=3.9f; GLfloat radius8 =0.22f;//sky 1st er 2nd gol
    int i8;
    int triangleAmount8 = 20;
    GLfloat twicePi8 = 2.0f * PI;
    glColor3ub(242,242,242);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(a8, b8); // center of circle
		for(i8 = 0; i8 <= triangleAmount8;i8++) {
			glVertex2f(
		            a8 + (radius8 * cos(i8*  twicePi8/ triangleAmount8)),
			    b8 + (radius8* sin(i8 * twicePi8/ triangleAmount8))
			);
		}
	glEnd();

   GLfloat a9=-4.25f;  GLfloat b9=4.15f; GLfloat radius9 =0.23f;
    int i9;
    int triangleAmount9 = 20;
    GLfloat twicePi9 = 2.0f * PI;
    glColor3ub(242,242,242);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(a9, b9); // center of circle
		for(i9 = 0; i9 <= triangleAmount9;i9++) {
			glVertex2f(
		            a9 + (radius9 * cos(i9*  twicePi9/ triangleAmount9)),
			    b9 + (radius9* sin(i9 * twicePi9/ triangleAmount9))
			);
		}
	glEnd();  //end of cloud 1




    GLfloat a10=-2.8f;  GLfloat b10=4.2f; GLfloat radius10 =0.21f;//cloud2
    int i10;
    int triangleAmount10= 20;
    GLfloat twicePi10 = 2.0f * PI;
    glColor3ub(242,242,242);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(a10, b10); // center of circle
		for(i10 = 0; i10 <= triangleAmount10;i10++) {
			glVertex2f(
		            a10 + (radius10 * cos(i10*  twicePi10/ triangleAmount10)),
			    b10 + (radius10* sin(i10 * twicePi10/ triangleAmount10))
			);
		}
	glEnd();


	 GLfloat a11=-2.2f;  GLfloat b11=4.2f; GLfloat radius11 =0.21f;//cloud2
    int i11;
    int triangleAmount11= 20;
    GLfloat twicePi11 = 2.0f * PI;
    glColor3ub(242,242,242);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(a11, b11); // center of circle
		for(i11 = 0; i11 <= triangleAmount11;i11++) {
			glVertex2f(
		            a11 + (radius11 * cos(i11*  twicePi11/ triangleAmount11)),
			    b11 + (radius11* sin(i11 * twicePi11/ triangleAmount11))
			);
		}
	glEnd();


	 GLfloat a12=-2.6f;  GLfloat b12=4.4f; GLfloat radius12 =0.21f;//cloud2
    int i12;
    int triangleAmount12= 20;
    GLfloat twicePi12 = 2.0f * PI;
    glColor3ub(242,242,242);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(a12, b12); // center of circle
		for(i12 = 0; i12 <= triangleAmount12;i12++) {
			glVertex2f(
		            a12 + (radius12 * cos(i12*  twicePi12/ triangleAmount12)),
			    b12 + (radius12* sin(i12 * twicePi12/ triangleAmount12))
			);
		}
	glEnd();


	 GLfloat a13=-2.4f;  GLfloat b13=4.5f; GLfloat radius13 =0.21f;//cloud2
    int i13;
    int triangleAmount13= 20;
    GLfloat twicePi13 = 2.0f * PI;
    glColor3ub(242,242,242);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(a13, b13); // center of circle
		for(i13= 0; i13 <= triangleAmount13;i13++) {
			glVertex2f(
		            a13+ (radius13 * cos(i13*  twicePi13/ triangleAmount13)),
			    b13 + (radius13* sin(i13 * twicePi13/ triangleAmount13))
			);
		}
	glEnd();



	 glBegin(GL_TRIANGLES); //CLOUD 2 ER TRAINGLE
              glColor3ub(242,242,242);
              glVertex2f(-2.8,4.0);
              glVertex2f(-2.29,4.0);
              glVertex2f(-2.45,4.5);

               glEnd();//end of cloud 2
                glPopMatrix();




////////////////////////////////////////////////// Roza plane
                                                //up plane 1st
     glPushMatrix();
   glTranslatef(positionr,0,0);
    glBegin(GL_POLYGON);
              glColor3ub(204, 255, 255);

               glVertex2f(2.66,4.32);
              glVertex2f(2.73,4.19);
              glVertex2f(2.85,4.1);
              glVertex2f(2.97,4.07);
              glVertex2f(3.27,4.04);
              glVertex2f(3.71,4.06);

              glVertex2f(4.04,4.15);
              glVertex2f(4.09,4.19);
             glVertex2f(4.09,4.24);
             glVertex2f(4.08,4.28);
             glVertex2f(3.37,4.45);
             glVertex2f(3.15,4.49);
             glVertex2f(3.02,4.51);
             glVertex2f(2.87,4.51);
             glVertex2f(2.74,4.46);
             glVertex2f(2.67,4.37);

    glEnd();

                                             //up plane wing
      glBegin(GL_QUADS);
              glColor3ub(255, 71, 26);
              glVertex2f(3.8,4.34);
             glVertex2f(3.97,4.3);
             glVertex2f(3.97,4.59);
             glVertex2f(3.88,4.57);

            glEnd();
                                            //up plane wing side
       glBegin(GL_POLYGON);
              glColor3ub(255, 71, 26);
              glVertex2f(3.76,3.99);
               glVertex2f(3.42,4.19);
               glVertex2f(3.39,4.21);
               glVertex2f(3.36,4.22);
               glVertex2f(3.3,4.22);
               glVertex2f(3.21,4.22);
               glVertex2f(3.17,4.21);
               glVertex2f(3.15,4.2);
               glVertex2f(3.15,4.18);
               glVertex2f(3.18,4.16);
               glVertex2f(3.21,4.15);
            glEnd();

                                            //side wing up plane
            glBegin(GL_POLYGON);
              glColor3ub(255, 71, 26);
             glVertex2f(3.88,4.17);
             glVertex2f(3.92,4.13);
             glVertex2f(3.99,4.12);
             glVertex2f(4.05,4.12);
             glVertex2f(4.1,4.13);
             glVertex2f(4.14,4.14);
             glVertex2f(4.16,4.16);
             glVertex2f(4.13,4.18);
             glVertex2f(4.09,4.19);
             glVertex2f(4.04,4.2);
             glVertex2f(3.98,4.2);
             glVertex2f(3.92,4.19);


    glEnd();

                                          //up plane wheel
            glBegin(GL_POLYGON);
              glColor3ub(204, 255, 255);
             glVertex2f(3.45,4.05);
             glVertex2f(3.38,4.03);
             glVertex2f(3.37,3.98);
              glVertex2f(3.38,3.93);
             glVertex2f(3.43,3.9);
              glVertex2f(3.5,3.9);
             glVertex2f(3.55,3.93);
             glVertex2f(3.57,3.97);
             glVertex2f(3.54,4.02);
             glVertex2f(3.55,4.01);
             glEnd();
              glBegin(GL_POLYGON);
              glColor3ub(51, 10, 0);
             glVertex2f(3.42,3.93);
             glVertex2f(3.44,3.95);
             glVertex2f(3.44,3.99);
             glVertex2f(3.41,4.02);
             glVertex2f(3.39,3.99);
             glVertex2f(3.39,3.95);
             glEnd();


                                                 //up plane 2nd wheel
            glBegin(GL_POLYGON);
              glColor3ub(204, 255, 255);
             glVertex2f(3.2,4.05);
              glVertex2f(3.16,4.05);
             glVertex2f(3.14,4.02);
             glVertex2f(3.12,3.99);
             glVertex2f(3.14,3.94);
             glVertex2f(3.2,3.9);
             glVertex2f(3.26,3.91);
             glVertex2f(3.3,3.94);
             glVertex2f(3.32,3.98);
             glVertex2f(3.27,4.04);
              glEnd();

            glBegin(GL_POLYGON);
              glColor3ub(51, 10, 0);

             glVertex2f(3.18,3.93);
             glVertex2f(3.21,3.96);
             glVertex2f(3.21,3.99);
             glVertex2f(3.18,4.02);
             glVertex2f(3.15,3.99);
             glVertex2f(3.15,3.96);


    glEnd();

                                               //window up plane
     glBegin(GL_QUADS);
              glColor3ub(0, 92, 230);
             glVertex2f(2.67,4.37);
             glVertex2f(2.75,4.36);
             glVertex2f(2.8,4.42);
             glVertex2f(2.74,4.46);

            glEnd();

            glBegin(GL_QUADS);
              glColor3ub(0, 92, 230);

             glVertex2f(2.76,4.35);
             glVertex2f(2.84,4.33);
             glVertex2f(2.87,4.38);
             glVertex2f(2.81,4.41);

            glEnd();

            glBegin(GL_QUADS);
              glColor3ub(0, 92, 230);
             glVertex2f(3.05,4.25);
             glVertex2f(3.09,4.25);
             glVertex2f(3.09,4.33);
             glVertex2f(3.05,4.33);
            glEnd();

            glBegin(GL_QUADS);
              glColor3ub(0, 92, 230);
             glVertex2f(3.14,4.25);
             glVertex2f(3.18,4.25);
             glVertex2f(3.18,4.33);
             glVertex2f(3.14,4.33);
            glEnd();

             glBegin(GL_QUADS);
              glColor3ub(0, 92, 230);
             glVertex2f(3.23,4.25);
             glVertex2f(3.27,4.25);
             glVertex2f(3.27,4.33);
             glVertex2f(3.23,4.33);
            glEnd();

            glBegin(GL_QUADS);
              glColor3ub(0, 92, 230);
             glVertex2f(3.32,4.25);
             glVertex2f(3.36,4.25);
             glVertex2f(3.36,4.33);
             glVertex2f(3.32,4.33);
            glEnd();

             glBegin(GL_QUADS);
              glColor3ub(0, 92, 230);
             glVertex2f(3.41,4.25);
             glVertex2f(3.45,4.25);
             glVertex2f(3.45,4.33);
             glVertex2f(3.41,4.33);
            glEnd();

             glBegin(GL_QUADS);
              glColor3ub(0, 92, 230);
             glVertex2f(3.5,4.25);
             glVertex2f(3.54,4.25);
             glVertex2f(3.54,4.33);
             glVertex2f(3.5,4.33);
            glEnd();

             glBegin(GL_QUADS);
              glColor3ub(0, 92, 230);
             glVertex2f(3.59,4.25);
             glVertex2f(3.63,4.25);
             glVertex2f(3.63,4.33);
             glVertex2f(3.59,4.33);
            glEnd();

            glPopMatrix();



///////////////////////////////////////////////// 2nd spot light
///////////////////////////////////////////////// Md. Ibrahim

              glBegin(GL_QUADS); // 2nd spot light pillar
              glColor3ub(128, 128, 128);
              glVertex2f(3.5,0.1);
              glVertex2f(3.6,0.1);
              glVertex2f(3.6,2.6);
              glVertex2f(3.5,2.6);
              glEnd();


              glBegin(GL_TRIANGLES); // 2nd spot light_1
              glColor3ub(166, 166, 166);
              glVertex2f(3.2,2.5);
              glVertex2f(3.4,2.3);
              glVertex2f(3.5,2.6);
              glEnd();


              glBegin(GL_TRIANGLES); // 2nd spot light_2
              glColor3ub(166, 166, 166);
              glVertex2f(3.7,2.3);
              glVertex2f(3.9,2.5);
              glVertex2f(3.6,2.6);
              glEnd();


              /*glBegin(GL_QUADS); // 2nd spot light_Light
              glColor3ub(255, 255, 204);
              glVertex2f(3.2,2.5);
              glVertex2f(1.2,1.8);
              glVertex2f(2.6,0.4);
              glVertex2f(3.4,2.3);
              glEnd();

              glBegin(GL_QUADS); // 2nd spot light_Light_1
              glColor3ub(255, 255, 204);
              glVertex2f(3.7,2.3);
              glVertex2f(4.4,0.4);
              glVertex2f(5.5,2);
              glVertex2f(3.9,2.5);
              glEnd();*/




//////////////////////////////////////////////////
//////////////////////////////////////////////////








         //background  building
              glBegin(GL_QUADS);
              glColor3ub(179,204,230);
              glVertex2f(-1.4,0.1);
              glVertex2f(-0.9,0.1);
              glVertex2f(-0.9,1.9);
              glVertex2f(-1.4,1.9);
               glEnd();

              glBegin(GL_QUADS);
              glColor3ub(194,214,214);
              glVertex2f(-2.3,0.1);
              glVertex2f(-1.56,0.1);
              glVertex2f(-1.56,2.2);
              glVertex2f(-2.3,2.2);
               glEnd();
              glBegin(GL_QUADS);
              glColor3ub(194,214,214);
              glVertex2f(-2.2,2.2);
              glVertex2f(-1.66,2.2);
              glVertex2f(-1.66,2.4);
              glVertex2f(-2.2,2.4);
               glEnd();

                 glBegin(GL_QUADS);
              glColor3ub(194,214,214);
              glVertex2f(-2.1,2.4);
              glVertex2f(-1.76,2.4);
              glVertex2f(-1.76,2.55);
              glVertex2f(-2.1,2.55);
               glEnd();


                 glBegin(GL_QUADS);
              glColor3ub(194,214,214);
              glVertex2f(-3.8,0.1);
              glVertex2f(-3.5,0.1);
              glVertex2f(-3.5,1.9);
              glVertex2f(-3.8,1.9);
               glEnd();

              glBegin(GL_QUADS);
              glColor3ub(194,214,214);
              glVertex2f(-3.0,0.1);
              glVertex2f(-2.6,0.1);
              glVertex2f(-2.6,1.9);
              glVertex2f(-3.0,1.9);
               glEnd();

                glBegin(GL_QUADS);
              glColor3ub(194,214,214);
              glVertex2f(-5.0,0.1);
              glVertex2f(-4.5,0.1);
              glVertex2f(-4.5,2.9);
              glVertex2f(-5.0,2.9);
               glEnd();

                /*glBegin(GL_QUADS); //right side er background building
              glColor3ub(194,214,214);
              glVertex2f(4.6,0.1);
              glVertex2f(5.0,0.1);
              glVertex2f(5.0,2.9);
              glVertex2f(4.6,2.6);
               glEnd();*/







              glBegin(GL_QUADS);//1st quad main building
              glColor3ub(230, 230, 230);
              glVertex2f(-0.9,0.1);
              glVertex2f(4.4,0.1);
              glVertex2f(4.4,1.6);
              glVertex2f(-0.9,1.6);
              glEnd();



              glBegin(GL_QUADS);//  window1
              //glColor3ub(0,0,179);
                glColor3ub(166,166,166);
              glVertex2f(1.2,0.1);
              glVertex2f(2.0,0.1);
              glVertex2f(2.0,1.4);
              glVertex2f(1.2,1.4);
              glEnd();



                glBegin(GL_QUADS);//  window1 quad
              //glColor3ub(0,0,179);
                glColor3ub(0,0,102);
              glVertex2f(1.23,0.1);
              glVertex2f(1.97,0.1);
              glVertex2f(1.97,1.36);
              glVertex2f(1.23,1.36);
              glEnd();

             glBegin(GL_QUADS);//  window1 quad vertical
             glColor3ub(166, 166, 166);
              glVertex2f(1.23,0.81);
              glVertex2f(1.97,0.81);
              glVertex2f(1.97,0.84);
              glVertex2f(1.23,0.84);
              glEnd();



              glBegin(GL_QUADS);//  window layer
              glColor3ub(140, 140, 140);
              glVertex2f(1.48,0.1);
              glVertex2f(1.5,0.1);
              glVertex2f(1.5,1.36);
              glVertex2f(1.48,1.36);
              glEnd();


              glBegin(GL_QUADS);// window layer2
              glColor3ub(140, 140, 140);
              glVertex2f(1.72,0.1);
              glVertex2f(1.74,0.1);
              glVertex2f(1.74,1.36);
              glVertex2f(1.72,1.36);
              glEnd();




                glBegin(GL_QUADS);//  window2 quad $

                glColor3ub(166,166,166);
              glVertex2f(2.3,0.2);
              glVertex2f(3.6,0.2);
              glVertex2f(3.6,1.4);
              glVertex2f(2.3,1.4);
              glEnd();


                glBegin(GL_QUADS);//  window2 quad
              //glColor3ub(0,0,179);
                glColor3ub(0, 0, 102);
              glVertex2f(2.32,0.24);
              glVertex2f(3.58,0.24);
              glVertex2f(3.58,1.36);
              glVertex2f(2.32,1.36);
              glEnd();

                 glBegin(GL_QUADS);// layer verti
              //glColor3ub(0,0,179);
                glColor3ub(166, 166, 166);
              glVertex2f(2.32,0.98);
              glVertex2f(3.58,0.98);
              glVertex2f(3.58,1.01);
              glVertex2f(2.32,1.01);
              glEnd();



                 glBegin(GL_QUADS);// layer verti
              glColor3ub(166, 166, 166);
              glVertex2f(2.93,0.24);
              glVertex2f(2.95,0.24);
              glVertex2f(2.95,1.36);
              glVertex2f(2.93,1.36);
              glEnd();


              glBegin(GL_QUADS);// layer horizontal
              glColor3ub(166, 166, 166);
              glVertex2f(2.62,0.24);
              glVertex2f(2.64,0.24);
              glVertex2f(2.64,1.0);
              glVertex2f(2.62,1.0);
              glEnd();

              glBegin(GL_QUADS);// layer horizontal
              glColor3ub(166, 166, 166);
              glVertex2f(3.28,0.24);
              glVertex2f(3.30,0.24);
              glVertex2f(3.30,1.0);
              glVertex2f(3.28,1.0);
              glEnd();






              glBegin(GL_QUADS);//  window3
              glColor3ub(166,166,166);
              glVertex2f(3.8,0.1);
              glVertex2f(4.35,0.1);
              glVertex2f(4.35,1.4);
              glVertex2f(3.8,1.4);
              glEnd();



              glBegin(GL_QUADS);//  window3main
              glColor3ub(0, 0, 102);
                  //glColor3ub(0, 0, 255);

              glVertex2f(3.82,0.1);
              glVertex2f(4.33,0.1);
              glVertex2f(4.33,1.36);
              glVertex2f(3.82,1.36);
              glEnd();




              glBegin(GL_QUADS);//  window3 layer
              glColor3ub(166,166,166);
              glVertex2f(4.09,0.1);
              glVertex2f(4.11,0.1);
              glVertex2f(4.11,1.4);
              glVertex2f(4.09,1.4);
              glEnd();

              glBegin(GL_QUADS);//1st quad er vitor janala
              glColor3ub(0, 0, 102);
              glVertex2f(-0.8,0.2);
              glVertex2f(1.0,0.2);
              glVertex2f(1.0,1.4);
              glVertex2f(-0.8,1.4);
              glEnd();

              glBegin(GL_QUADS);//1st quad er vitor janalar  bottom layer
              glColor3ub(140,140,140);
              glVertex2f(-0.8,0.2);
              glVertex2f(1.0,0.2);
              glVertex2f(1.0,0.25);
              glVertex2f(-0.8,0.25);
              glEnd();

              glBegin(GL_QUADS);//1st quad er vitor janalar  left  layer
              glColor3ub(140,140,140);
              glVertex2f(-0.8,0.2);
              glVertex2f(-0.77,0.2);
              glVertex2f(-0.77,1.4);
              glVertex2f(-0.8,1.4);
              glEnd();


              glBegin(GL_QUADS);//1st quad er vitor janalar  uporer  layer
              //glColor3ub(255,255,255);
                glColor3ub(140,140,140);
              glVertex2f(-0.8,1.36);
              glVertex2f(1.0,1.36);
              glVertex2f(1.0,1.4);
              glVertex2f(-0.8,1.4);
              glEnd();


             glBegin(GL_QUADS);//1st quad er vitor janala right layer

              glColor3ub(140,140,140);
              glVertex2f(0.97,0.2);
              glVertex2f(1.0,0.2);
              glVertex2f(1.0,1.4);
              glVertex2f(0.97,1.4);
              glEnd();


             glBegin(GL_QUADS);//1st quad er vitor vertical layer
              //glColor3ub(255,255,255);
               glColor3ub(140,140,140);
              glVertex2f(-0.77,0.95);
              glVertex2f(0.97,0.95);
              glVertex2f(0.97,0.99);
              glVertex2f(-0.77,0.99);
              glEnd();



                glBegin(GL_QUADS);//1st quad er vitor vertical layer2
              //glColor3ub(255,255,255);
               glColor3ub(140,140,140);
              glVertex2f(-0.77,0.55);
              glVertex2f(0.97,0.55);
              glVertex2f(0.97,0.58);
              glVertex2f(-0.77,0.58);
              glEnd();




             glBegin(GL_QUADS);//1st quad er vitor janala vitorer right layer

              glColor3ub(140,140,140);
              glVertex2f(0.71,0.22);
              glVertex2f(0.73,0.22);
              glVertex2f(0.73,1.37);
              glVertex2f(0.71,1.37);
              glEnd();


             glBegin(GL_QUADS);//1st quad er vitor janala vitorer right layer

              glColor3ub(140,140,140);
              glVertex2f(0.46,0.22);
              glVertex2f(0.48,0.22);
              glVertex2f(0.48,1.37);
              glVertex2f(0.46,1.37);
              glEnd();


             glBegin(GL_QUADS);//1st quad er vitor janala vitorer right layer

              glColor3ub(140,140,140);
              glVertex2f(0.15,0.22);
              glVertex2f(0.17,0.22);
              glVertex2f(0.17,1.37);
              glVertex2f(0.15,1.37);
              glEnd();




             glBegin(GL_QUADS);//1st quad er vitor janala vitorer right layer

              glColor3ub(140,140,140);
              glVertex2f(-0.18,0.22);
              glVertex2f(-0.16,0.22);
              glVertex2f(-0.16,1.37);
              glVertex2f(-0.18,1.37);
              glEnd();



             glBegin(GL_QUADS);//1st quad er vitor janala vitorer right layer

              glColor3ub(140,140,140);
              glVertex2f(-0.5,0.22);
              glVertex2f(-0.48,0.22);
              glVertex2f(-0.48,1.37);
              glVertex2f(-0.5,1.37);
              glEnd();







               glBegin(GL_QUADS);//1st quad er uporer layer
              glColor3ub(166, 166, 166);
              glVertex2f(-1.0,1.6);
              glVertex2f(4.45,1.6);
              glVertex2f(4.45,1.7);
              glVertex2f(-1.0,1.7);
              glEnd();

              glBegin(GL_QUADS);//2nd quad
              glColor3ub(255, 255, 255);
              glVertex2f(-0.8,1.7);
              glVertex2f(1.0,1.7);
              glVertex2f(1.0,2.3);
              glVertex2f(-0.8,2.3);
              glEnd();



               glBegin(GL_QUADS);//2nd quad er window
              glColor3ub(153, 153, 153);
              glVertex2f(-0.7,1.78);
              glVertex2f(0.9,1.78);
              glVertex2f(0.9,2.24);
              glVertex2f(-0.7,2.24);
              glEnd();


              glBegin(GL_QUADS);//2nd quad er window
              glColor3ub(0, 0, 153);
              glVertex2f(-0.68,1.82);
              glVertex2f(0.87,1.82);
              glVertex2f(0.87,2.2);
              glVertex2f(-0.68,2.2);
              glEnd();



              glBegin(GL_QUADS);//2nd quad er window layer
              glColor3ub(153, 153, 153);
              glVertex2f(-0.44,1.78);
              glVertex2f(-0.47,1.78);
              glVertex2f(-0.47,2.24);
              glVertex2f(-0.44,2.24);
              glEnd();



              glBegin(GL_QUADS);//2nd quad er window layer
              glColor3ub(153, 153, 153);
              glVertex2f(-0.21,1.78);
              glVertex2f(-0.18,1.78);
              glVertex2f(-0.18,2.24);
              glVertex2f(-0.21,2.24);
              glEnd();



              glBegin(GL_QUADS);//2nd quad er window layer
              glColor3ub(153, 153, 153);
              glVertex2f(0.03,1.78);
              glVertex2f(0.06,1.78);
              glVertex2f(0.06,2.24);
              glVertex2f(0.03,2.24);
              glEnd();


               glBegin(GL_QUADS);//2nd quad er window layer
              glColor3ub(153, 153, 153);
              glVertex2f(0.26,1.78);
              glVertex2f(0.28,1.78);
              glVertex2f(0.28,2.24);
              glVertex2f(0.26,2.24);
              glEnd();


              glBegin(GL_QUADS);//2nd quad er window layer
              glColor3ub(153, 153, 153);
              glVertex2f(0.48,1.78);
              glVertex2f(0.50,1.78);
              glVertex2f(0.50,2.24);
              glVertex2f(0.48,2.24);
              glEnd();

              glBegin(GL_QUADS);//2nd quad er window layer
              glColor3ub(153, 153, 153);
              glVertex2f(0.68,1.78);
              glVertex2f(0.70,1.78);
              glVertex2f(0.70,2.24);
              glVertex2f(0.68,2.24);
              glEnd();




              glBegin(GL_QUADS);//2nd quad er uporer layer
              glColor3ub(166, 166, 166);
              glVertex2f(-0.85,2.3);
              glVertex2f(1.05,2.3);
              glVertex2f(1.05,2.4);
              glVertex2f(-0.85,2.4);
              glEnd();





             glBegin(GL_QUADS);//3rd side quad
              glColor3ub(242, 242, 242);
              glVertex2f(1.0,1.7);
              glVertex2f(3.8,1.7);
              glVertex2f(3.8,2.1);
              glVertex2f(1.0,2.1);
               glEnd();




             glBegin(GL_QUADS);//3rd side quad vertical lines
              glColor3ub(61, 61, 41);
              glVertex2f(1.12,1.7);
              glVertex2f(1.15,1.7);
              glVertex2f(1.15,2.02);
              glVertex2f(1.12,2.02);
               glEnd();


                   glBegin(GL_QUADS);//3rd side quad vertical lines
              glColor3ub(61, 61, 41);
              glVertex2f(1.41,1.7);
              glVertex2f(1.44,1.7);
              glVertex2f(1.44,2.02);
              glVertex2f(1.41,2.02);
               glEnd();





             glBegin(GL_QUADS);//3rd side quad upper border
              glColor3ub(61, 61, 41);
              glVertex2f(1.0,1.98);
              glVertex2f(3.8,1.98);
              glVertex2f(3.8,2.02);
              glVertex2f(1.0,2.02);
               glEnd();

                    glBegin(GL_QUADS);//3rd side quad vertical lines
              glColor3ub(61, 61, 41);
              glVertex2f(1.70,1.7);
              glVertex2f(1.73,1.7);
              glVertex2f(1.73,2.02);
              glVertex2f(1.70,2.02);
               glEnd();



                    glBegin(GL_QUADS);//3rd side quad vertical lines
              glColor3ub(61, 61, 41);
              glVertex2f(1.91,1.7);
              glVertex2f(1.94,1.7);
              glVertex2f(1.94,2.02);
              glVertex2f(1.91,2.02);
               glEnd();


                    glBegin(GL_QUADS);//3rd side quad vertical lines
              glColor3ub(61, 61, 41);
              glVertex2f(2.11,1.7);
              glVertex2f(2.14,1.7);
              glVertex2f(2.14,2.02);
              glVertex2f(2.11,2.02);
               glEnd();



             glBegin(GL_QUADS);//3rd side quad vertical lines
              glColor3ub(61, 61, 41);
              glVertex2f(2.32,1.7);
              glVertex2f(2.35,1.7);
              glVertex2f(2.35,2.02);
              glVertex2f(2.32,2.02);
               glEnd();



             glBegin(GL_QUADS);//3rd side quad vertical lines
              glColor3ub(61, 61, 41);
              glVertex2f(2.53,1.7);
              glVertex2f(2.56,1.7);
              glVertex2f(2.56,2.02);
              glVertex2f(2.53,2.02);
               glEnd();


             glBegin(GL_QUADS);//3rd side quad vertical lines
              glColor3ub(61, 61, 41);
              glVertex2f(2.73,1.7);
              glVertex2f(2.76,1.7);
              glVertex2f(2.76,2.02);
              glVertex2f(2.73,2.02);
               glEnd();


                glBegin(GL_QUADS);//3rd side quad vertical lines
              glColor3ub(61, 61, 41);
              glVertex2f(2.93,1.7);
              glVertex2f(2.96,1.7);
              glVertex2f(2.96,2.02);
              glVertex2f(2.93,2.02);
               glEnd();

              glBegin(GL_QUADS);//3rd side quad vertical lines
              glColor3ub(61, 61, 41);
              glVertex2f(3.11,1.7);
              glVertex2f(3.14,1.7);
              glVertex2f(3.14,2.02);
              glVertex2f(3.11,2.02);
               glEnd();



              glBegin(GL_QUADS);//3rd side quad vertical lines
              glColor3ub(61, 61, 41);
              glVertex2f(3.31,1.7);
              glVertex2f(3.34,1.7);
              glVertex2f(3.34,2.02);
              glVertex2f(3.31,2.02);
               glEnd();


              glBegin(GL_QUADS);//3rd side quad vertical lines
              glColor3ub(61, 61, 41);
              glVertex2f(3.48,1.7);
              glVertex2f(3.52,1.7);
              glVertex2f(3.52,2.02);
              glVertex2f(3.48,2.02);
               glEnd();


              glBegin(GL_QUADS);//3rd side quad vertical lines
              glColor3ub(61, 61, 41);
              glVertex2f(3.71,1.7);
              glVertex2f(3.74,1.7);
              glVertex2f(3.74,2.02);
              glVertex2f(3.71,2.02);
               glEnd();


               glBegin(GL_QUADS);//4th quad
              glColor3ub(242, 242,242);
              glVertex2f(-0.4,2.4);
              glVertex2f(0.3,2.4);
              glVertex2f(0.3,3.2);
              glVertex2f(-0.4,3.2);
              glEnd();

              glBegin(GL_QUADS);//4th quad er layer
              glColor3ub(140, 140, 140);
              glVertex2f(-0.42,3.2);
              glVertex2f(0.32,3.2);
              glVertex2f(0.32,3.25);
              glVertex2f(-0.42,3.25);
              glEnd();

               glBegin(GL_QUADS);//5th quad
              glColor3ub(0, 0, 153);
              glVertex2f(-0.4,3.25);
              glVertex2f(0.3,3.25);
              glVertex2f(0.48,4.0);
              glVertex2f(-0.6,4.0);
              glEnd();

                glBegin(GL_QUADS);//5th quad layer
              glColor3ub(115, 115, 115);
              glVertex2f(-0.6,4.0);
              glVertex2f(0.48,4.0);
              glVertex2f(0.48,4.05);
              glVertex2f(-0.6,4.05);
              glEnd();

                glBegin(GL_QUADS);//5th quad layer
              glColor3ub(230, 230, 230);
              glVertex2f(-0.6,4.05);
              glVertex2f(-0.27,4.25);
              glVertex2f(0.17,4.25);
              glVertex2f(0.48,4.05);
              glEnd();


/////////////////////////////////////////////////////////////// 1st spot light
/////////////////////////////////////////////////////////////// Md. Ibrahim
////////// spot light of airport


              glBegin(GL_QUADS); // 1st spot light pillar
              glColor3ub(128, 128, 128);
              glVertex2f(-3.6,0.1);
              glVertex2f(-3.45,0.1);
              glVertex2f(-3.45,2.6);
              glVertex2f(-3.6,2.6);
              glEnd();


              glBegin(GL_TRIANGLES); // 1st spot light_1
              glColor3ub(166, 166, 166);
              glVertex2f(-4,2.4);
              glVertex2f(-3.7,2.2);
              glVertex2f(-3.6,2.6);
              glEnd();


              glBegin(GL_TRIANGLES); // 1st spot light_2
              glColor3ub(166, 166, 166);
              glVertex2f(-3.35,2.2);
              glVertex2f(-3.1,2.4);
              glVertex2f(-3.45,2.6);
              glEnd();


              /*glBegin(GL_QUADS); // 1st spot light_Light
              glColor3ub(255, 255, 204);
              glVertex2f(-5.6,1.6);
              glVertex2f(-4,0.5);
              glVertex2f(-3.7,2.2);
              glVertex2f(-4,2.4);
              glEnd();

              glBegin(GL_QUADS); // 1st spot light_Light_1
              glColor3ub(255, 255, 204);
              glVertex2f(-3.35,2.2);
              glVertex2f(-3,0.5);
              glVertex2f(-1.4,1.6);
              glVertex2f(-3.1,2.4);
              glEnd();*/











///////////////////////////////////////////////////////////////


	          glBegin(GL_QUADS); //gac er stick
              glColor3ub(102,51,0);
              glVertex2f(-1.4,0.1);
              glVertex2f(-1.3,0.1);
              glVertex2f(-1.3,0.95);
              glVertex2f(-1.4,0.95);
               glEnd();

    GLfloat a=-1.32f;  GLfloat b=1.1f; GLfloat radius =0.4f;//start of tree 1st
    int i;
    //int triangleAmount = 20;
   // GLfloat twicePi = 2.0f * PI;
    glColor3ub(0,102,0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();//end sun




              glBegin(GL_QUADS); //2nd tree
              glColor3ub(102,51,0);
              glVertex2f(-1.9,0.1);
              glVertex2f(-1.8,0.1);
              glVertex2f(-1.8,0.95);
              glVertex2f(-1.9,0.95);
               glEnd();

    GLfloat a6=-1.85f;  GLfloat b6=1.1f; GLfloat radius6 =0.4f;//start of tree 1st
    int i6;
    int triangleAmount6 = 20;
    GLfloat twicePi6 = 2.0f * PI;
    glColor3ub(0,204,0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(a6, b6); // center of circle
		for(i6 = 0; i6 <= triangleAmount6;i6++) {
			glVertex2f(
		            a6 + (radius6 * cos(i6 *  twicePi6 / triangleAmount6)),
			    b6 + (radius6 * sin(i6 * twicePi6 / triangleAmount6))
			);
		}
	glEnd();


             glBegin(GL_QUADS); //3rd gac er stick
              glColor3ub(102,51,0);
              glVertex2f(-2.6,0.1);
              glVertex2f(-2.5,0.1);
              glVertex2f(-2.5,0.8);
              glVertex2f(-2.6,0.8);
               glEnd();

    GLfloat a1=-2.55f;  GLfloat b1=1.1f; GLfloat radius1 =0.4f;//start of tree 2nd
    int i1;
    int triangleAmount1 = 20;
    GLfloat twicePi1 = 2.0f * PI;
    glColor3ub(0,102,0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(a1, b1); // center of circle
		for(i1 = 0; i1 <= triangleAmount1;i1++) {
			glVertex2f(
		            a1 + (radius1 * cos(i1 *  twicePi1 / triangleAmount1)),
			    b1 + (radius1 * sin(i1 * twicePi1 / triangleAmount1))
			);
		}
	glEnd();//end sun


	   glBegin(GL_QUADS); //4th gac er stick
              glColor3ub(102,51,0);
              glVertex2f(-3.3,0.1);
              glVertex2f(-3.2,0.1);
              glVertex2f(-3.2,0.95);
              glVertex2f(-3.3,0.95);
               glEnd();

    GLfloat a2=-3.3f;  GLfloat b2=1.1f; GLfloat radius2 =0.4f;//start of tree 2nd
    int i2;
    int triangleAmount2 = 20;
    GLfloat twicePi2 = 2.0f * PI;
    glColor3ub(0,204,0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(a2, b2); // center of circle
		for(i2 = 0; i2 <= triangleAmount1;i2++) {
			glVertex2f(
		            a2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    b2 + (radius2 * sin(i2 * twicePi2/ triangleAmount2))
			);
		}
	glEnd();//end 3rd tree

	  glBegin(GL_QUADS); //5th gac er stick
              glColor3ub(102,51,0);
              glVertex2f(-4.05,0.1);
              glVertex2f(-3.95,0.1);
              glVertex2f(-3.95,0.95);
              glVertex2f(-4.05,0.95);
               glEnd();

    GLfloat a3=-4.0f;  GLfloat b3=1.1f; GLfloat radius3 =0.4f;//start of tree 2nd
    int i3;
    int triangleAmount3 = 20;
    GLfloat twicePi3 = 2.0f * PI;
    glColor3ub(0,102,0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(a3, b3); // center of circle
		for(i3 = 0; i3 <= triangleAmount3;i3++) {
			glVertex2f(
		            a3 + (radius3 * cos(i3 *  twicePi3/ triangleAmount3)),
			    b3 + (radius3 * sin(i3 * twicePi3/ triangleAmount3))
			);
		}
	glEnd();//end 4th tree


	 glBegin(GL_QUADS); //6th gac er stick
              glColor3ub(102,51,0);
              glVertex2f(-4.8,0.1);
              glVertex2f(-4.7,0.1);
              glVertex2f(-4.7,0.95);
              glVertex2f(-4.8,0.95);
               glEnd();



  GLfloat a4=-4.75f;  GLfloat b4=1.1f; GLfloat radius4 =0.4f;//start of tree 2nd
    int i4;
    int triangleAmount4 = 20;
    GLfloat twicePi4 = 2.0f * PI;
    glColor3ub(0,204,0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(a4, b4); // center of circle
		for(i4 = 0; i4 <= triangleAmount4;i4++) {
			glVertex2f(
		            a4 + (radius4 * cos(i4 *  twicePi4/ triangleAmount4)),
			    b4 + (radius4 * sin(i4 * twicePi4/ triangleAmount4))
			);
		}
	glEnd();//end 4th tree*/




            glBegin(GL_LINES); //net under tree
              glColor3ub(51,26,0);
              glVertex2f(-5.0,0.2);
              glVertex2f(-0.9,0.2);
              glVertex2f(-5.0,0.25);
              glVertex2f(-0.9,0.25);
               glVertex2f(-5.0,0.3);
              glVertex2f(-0.9,0.3);
              glVertex2f(-5.0,0.35);
              glVertex2f(-0.9,0.35);
               glVertex2f(-5.0,0.4);
              glVertex2f(-0.9,0.4);
              glVertex2f(-5.0,0.45);
              glVertex2f(-0.9,0.45);
                glVertex2f(-5.0,0.5);
              glVertex2f(-0.9,0.5);
              glVertex2f(-5.0,0.55);
              glVertex2f(-0.9,0.55);
               glVertex2f(-5.0,0.6);
              glVertex2f(-0.9,0.6);
              glVertex2f(-4.9,0.2);   //here starts cross net
              glVertex2f(-4.9,0.6);
               glVertex2f(-4.85,0.2);   //here starts cross net
              glVertex2f(-4.85,0.6);
               glVertex2f(-4.8,0.2);   //here starts cross net
              glVertex2f(-4.8,0.6);
               glVertex2f(-4.75,0.2);   //here starts cross net
              glVertex2f(-4.75,0.6);
               glVertex2f(-4.7,0.2);   //here starts cross net
              glVertex2f(-4.7,0.6);
              glVertex2f(-4.65,0.2);   //here starts cross net
              glVertex2f(-4.65,0.6);
               glVertex2f(-4.6,0.2);   //here starts cross net
              glVertex2f(-4.6,0.6);
               glVertex2f(-4.55,0.2);   //here starts cross net
              glVertex2f(-4.55,0.6);
               glVertex2f(-4.5,0.2);   //here starts cross net
              glVertex2f(-4.5,0.6);
               glVertex2f(-4.45,0.2);   //here starts cross net
              glVertex2f(-4.45,0.6);
              glVertex2f(-4.4,0.2);   //here starts cross net
              glVertex2f(-4.4,0.6);
               glVertex2f(-4.35,0.2);   //here starts cross net
              glVertex2f(-4.35,0.6);
               glVertex2f(-4.3,0.2);   //here starts cross net
              glVertex2f(-4.3,0.6);
               glVertex2f(-4.25,0.2);   //here starts cross net
              glVertex2f(-4.25,0.6);
               glVertex2f(-4.2,0.2);   //here starts cross net
              glVertex2f(-4.2,0.6);
              glVertex2f(-4.15,0.2);   //here starts cross net
              glVertex2f(-4.15,0.6);
               glVertex2f(-4.1,0.2);   //here starts cross net
              glVertex2f(-4.1,0.6);
               glVertex2f(-4.05,0.2);   //here starts cross net
              glVertex2f(-4.05,0.6);
               glVertex2f(-3.95,0.2);   //here starts cross net
              glVertex2f(-3.95,0.6);
               glVertex2f(-3.9,0.2);
              glVertex2f(-3.9,0.6);
              glVertex2f(-3.85,0.2);
              glVertex2f(-3.85,0.6);
               glVertex2f(-3.8,0.2);
              glVertex2f(-3.8,0.6);
               glVertex2f(-3.75,0.2);
              glVertex2f(-3.75,0.6);

               glVertex2f(-3.7,0.2);   //here starts cross net
              glVertex2f(-3.7,0.6);
              glVertex2f(-3.65,0.2);   //here starts cross net
              glVertex2f(-3.65,0.6);
               glVertex2f(-3.6,0.2);   //here starts cross net
              glVertex2f(-3.6,0.6);
               glVertex2f(-3.55,0.2);   //here starts cross net
              glVertex2f(-3.55,0.6);
               glVertex2f(-3.5,0.2);   //here starts cross net
              glVertex2f(-3.5,0.6);
               glVertex2f(-3.45,0.2);   //here starts cross net
              glVertex2f(-3.45,0.6);
               glVertex2f(-3.4,0.2);   //here starts cross net
              glVertex2f(-3.4,0.6);
               glVertex2f(-3.35,0.2);   //here starts cross net
              glVertex2f(-3.35,0.6);
               glVertex2f(-3.3,0.2);   //here starts cross net
              glVertex2f(-3.3,0.6);
               glVertex2f(-3.25,0.2);   //here starts cross net
              glVertex2f(-3.25,0.6);
               glVertex2f(-3.2,0.2);   //here starts cross net
              glVertex2f(-3.2,0.6);
              glVertex2f(-3.15,0.2);   //here starts cross net
              glVertex2f(-3.15,0.6);
               glVertex2f(-3.1,0.2);   //here starts cross net
              glVertex2f(-3.1,0.6);
               glVertex2f(-3.05,0.2);   //here starts cross net
              glVertex2f(-3.05,0.6);

                 glVertex2f(-2.95,0.2);   //here starts cross net
              glVertex2f(-2.95,0.6);
               glVertex2f(-2.9,0.2);
              glVertex2f(-2.9,0.6);
              glVertex2f(-2.85,0.2);   //here starts cross net
              glVertex2f(-2.85,0.6);
               glVertex2f(-2.8,0.2);   //here starts cross net
              glVertex2f(-2.8,0.6);
               glVertex2f(-2.75,0.2);   //here starts cross net
              glVertex2f(-2.75,0.6);

               glVertex2f(-2.7,0.2);   //here starts cross net
              glVertex2f(-2.7,0.6);
              glVertex2f(-2.65,0.2);   //here starts cross net
              glVertex2f(-2.65,0.6);
               glVertex2f(-2.6,0.2);   //here starts cross net
              glVertex2f(-2.6,0.6);
               glVertex2f(-2.55,0.2);   //here starts cross net
              glVertex2f(-2.55,0.6);
               glVertex2f(-2.5,0.2);   //here starts cross net
              glVertex2f(-2.5,0.6);
               glVertex2f(-2.45,0.2);   //here starts cross net
              glVertex2f(-2.45,0.6);
               glVertex2f(-2.4,0.2);   //here starts cross net
              glVertex2f(-2.4,0.6);
               glVertex2f(-2.35,0.2);   //here starts cross net
              glVertex2f(-2.35,0.6);
               glVertex2f(-2.3,0.2);   //here starts cross net
              glVertex2f(-2.3,0.6);
               glVertex2f(-2.25,0.2);   //here starts cross net
              glVertex2f(-2.25,0.6);
               glVertex2f(-2.2,0.2);   //here starts cross net
              glVertex2f(-2.2,0.6);
              glVertex2f(-2.15,0.2);   //here starts cross net
              glVertex2f(-2.15,0.6);
               glVertex2f(-2.1,0.2);
              glVertex2f(-2.1,0.6);
               glVertex2f(-2.05,0.2);
              glVertex2f(-2.05,0.6);

                glVertex2f(-1.95,0.2);   //here starts cross net
              glVertex2f(-1.95,0.6);
               glVertex2f(-1.9,0.2);
              glVertex2f(-1.9,0.6);
              glVertex2f(-1.85,0.2);
              glVertex2f(-1.85,0.6);
               glVertex2f(-1.8,0.2);
              glVertex2f(-1.8,0.6);
               glVertex2f(-1.75,0.2);
              glVertex2f(-1.75,0.6);

               glVertex2f(-1.7,0.2);
              glVertex2f(-1.7,0.6);
              glVertex2f(-1.65,0.2);
              glVertex2f(-1.65,0.6);
               glVertex2f(-1.6,0.2);
              glVertex2f(-1.6,0.6);
               glVertex2f(-1.55,0.2);
              glVertex2f(-1.55,0.6);
               glVertex2f(-1.5,0.2);
              glVertex2f(-1.5,0.6);
               glVertex2f(-1.45,0.2);
              glVertex2f(-1.45,0.6);
               glVertex2f(-1.4,0.2);
              glVertex2f(-1.4,0.6);
               glVertex2f(-1.35,0.2);
              glVertex2f(-1.35,0.6);
               glVertex2f(-1.3,0.2);
              glVertex2f(-1.3,0.6);
               glVertex2f(-1.25,0.2);
              glVertex2f(-1.25,0.6);
               glVertex2f(-1.2,0.2);
              glVertex2f(-1.2,0.6);
              glVertex2f(-1.15,0.2);
              glVertex2f(-1.15,0.6);
               glVertex2f(-1.1,0.2);
              glVertex2f(-1.1,0.6);
               glVertex2f(-1.05,0.2);
              glVertex2f(-1.05,0.6);
              glVertex2f(-1.0,0.2);
              glVertex2f(-1.0,0.6);
               glVertex2f(-0.95,0.2);
              glVertex2f(-0.95,0.6);
              glVertex2f(-0.9,0.2);
              glVertex2f(-0.9,0.6);
             glEnd();   //end of cross net






	      glBegin(GL_QUADS); //right side er gac er stck
              glColor3ub(102,51,0);
              glVertex2f(4.65,0.1);
              glVertex2f(4.72,0.1);
              glVertex2f(4.72,0.95);
              glVertex2f(4.65,0.95);
               glEnd();






	         glBegin(GL_TRIANGLES); //right side er tree
                glColor3ub(52,102,0);
              glVertex2f(4.45,0.8);
              glVertex2f(4.95,0.8);
              glVertex2f(4.7,1.3);

               glEnd();


	         glBegin(GL_TRIANGLES);
              glColor3ub(52,102,0);
              glVertex2f(4.45,1.0);
              glVertex2f(4.95,1.0);
              glVertex2f(4.7,1.65);
              //glVertex2f(-1.4,0.95);
               glEnd();



               glBegin(GL_LINES);//right side net
              glColor3ub(0,0,0);
             glVertex2f(4.41,0.2);
              glVertex2f(5.0,0.2);
              glVertex2f(4.41,0.25);
              glVertex2f(5.0,0.25);
               glVertex2f(4.41,0.3);
              glVertex2f(5.0,0.3);
              glVertex2f(4.41,0.35);
              glVertex2f(5.0,0.35);
               glVertex2f(4.41,0.4);
              glVertex2f(5.0,0.4);
              glVertex2f(4.41,0.45);
              glVertex2f(5.0,0.45);
                glVertex2f(4.41,0.5);
              glVertex2f(5.0,0.5);
              glVertex2f(4.41,0.55);
              glVertex2f(5.0,0.55);
               glVertex2f(4.41,0.6);
              glVertex2f(5.0,0.6);
              glVertex2f(4.41,0.2);//crossnet
              glVertex2f(4.41,0.6);
               glVertex2f(4.45,0.2);
              glVertex2f(4.45,0.6);
               glVertex2f(4.5,0.2);
              glVertex2f(4.5,0.6);
              glVertex2f(4.55,0.2);
              glVertex2f(4.55,0.6);
               glVertex2f(4.6,0.2);
              glVertex2f(4.6,0.6);
               glVertex2f(4.65,0.2);
              glVertex2f(4.65,0.6);
               glVertex2f(4.7,0.2);
              glVertex2f(4.7,0.6);
               glVertex2f(4.75,0.2);
              glVertex2f(4.75,0.6);
                glVertex2f(4.8,0.2);
                glVertex2f(4.8,0.6);
               glVertex2f(4.85,0.2);
              glVertex2f(4.85,0.6);
               glVertex2f(4.9,0.2);
              glVertex2f(4.9,0.6);
               glVertex2f(4.95,0.2);
              glVertex2f(4.95,0.6);
               glEnd();







//Middle space
//////////////////////////////////////////////////////////
////////////////////////////////////////////////////////// sobita


    //middle space
    glBegin(GL_QUADS);
              glColor3ub(166, 166, 166);
              glVertex2f(-5,-1.8);
              glVertex2f(5,-1.8);
              glVertex2f(5,0);
              glVertex2f(-5,0);
    glEnd();

    // Middle Space boarder
    glBegin(GL_QUADS);
              glColor3ub(77, 77, 77);
              glVertex2f(-5,0);
              glVertex2f(5,0);
              glVertex2f(5,0.1);
              glVertex2f(-5,0.1);
    glEnd();

/////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////

                                          //working car lorry
          glPushMatrix();
   glTranslatef(positionLorry,0,0);
               glBegin(GL_POLYGON);
    glColor3ub(230, 184, 0);
    glVertex2f(.25,-.3);
    glVertex2f(.62,-.3);
    glVertex2f(.69,-.19);
    glVertex2f(.83,-.2);
    glVertex2f(.81,-.01);
    glVertex2f(.71,-.01);
    glVertex2f(.65,.2);
    glVertex2f(.42,.2);
    glVertex2f(.24,0);
    glEnd();
      int q13;

	GLfloat m13=.36; GLfloat n13=-.3f; GLfloat radius13q =.05f;
	int triangleAmount13q = 20;


	GLfloat twicePi13q = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(0, 0, 0);
		glVertex2f(m13, n13);
		for(q13 = 0; q13 <= triangleAmount13q;q13++) {
			glVertex2f(
		            m13 + (radius13q * cos(q13 *  twicePi13q / triangleAmount13q)),
			    n13+ (radius13q * sin(q13 * twicePi13q / triangleAmount13q))
			);
		}

    glEnd();
int q14;

	GLfloat m14=.73; GLfloat n14=-.27f; GLfloat radius14q =.07f;
	int triangleAmount14q = 20;


	GLfloat twicePi14q = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(0, 0, 0);
		glVertex2f(m14, n14);
		for(q14 = 0; q14 <= triangleAmount14q;q14++) {
			glVertex2f(
		            m14 + (radius14q * cos(q14 *  twicePi14q / triangleAmount14q)),
			    n14+ (radius14q * sin(q14 * twicePi14q / triangleAmount14q))
			);
		}

    glEnd();
    glBegin(GL_QUADS);
              glColor3ub(0,0,0);
                 glVertex2f(.84,-.2);
                 glVertex2f(.87,-.2);
                 glVertex2f(.87,.3);
                 glVertex2f(.84,.3);


    glEnd();
     glBegin(GL_QUADS);
              glColor3ub(0,0,0);

                 glVertex2f(.83,-.2);
                 glVertex2f(1.29,-.2);
                 glVertex2f(1.29,-.18);
                 glVertex2f(.83,-.18);


    glEnd();
                                  ///////window
       glBegin(GL_QUADS);
              glColor3ub(0, 57, 230);

                 glVertex2f(.46,.01);
                 glVertex2f(.6,-.01);
                 glVertex2f(.6,.16);
                 glVertex2f(.46,.16);


    glEnd();
    glBegin(GL_QUADS);
              glColor3ub(0, 57, 230);

                 glVertex2f(.46,-.11);
                 glVertex2f(.6,-.13);
                 glVertex2f(.6,-.04);
                 glVertex2f(.46,-.01);


    glEnd();
                                                // worker car back light


       glBegin(GL_QUADS);
              glColor3ub(255, 204, 204);

                 glVertex2f(.25,-.25);
                 glVertex2f(.31,-.25);
                 glVertex2f(.31,-.2);
                 glVertex2f(.25,-.2);


    glEnd();
     glBegin(GL_QUADS);
              glColor3ub(255, 230, 230);

                 glVertex2f(.12,-.29);
                 glVertex2f(.25,-.25);
                 glVertex2f(.25,-.2);
                 glVertex2f(.11,-.2);



    glEnd();

glPopMatrix();



////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////// Md. Ibrahim

    //Lorry_1
///////////////////////////////////////////////////
    glPushMatrix();
    glTranslatef(position_9,0,0);
    glBegin(GL_POLYGON);
              glColor3ub(255, 121, 77);
              glVertex2f(4.38,-0.44);
              glVertex2f(4.32,-0.6);
              glVertex2f(4.29,-0.6);
              glVertex2f(4.29,-0.68);
              glVertex2f(4.34,-0.68);
              glVertex2f(4.36,-0.75);
              glVertex2f(4.49,-0.75);
              glVertex2f(4.51,-0.7);
              glVertex2f(4.54,-0.7);
              glVertex2f(4.56,-0.75);
              glVertex2f(4.58,-0.75);
              glVertex2f(4.58,-0.65);
              glVertex2f(4.54,-0.44);

    glEnd();

    //Lorry Door
    glBegin(GL_QUADS);
              glColor3ub(191, 191, 191);
              glVertex2f(4.4,-0.68);
              glVertex2f(4.47,-0.68);
              glVertex2f(4.47,-0.5);
              glVertex2f(4.4,-0.5);
    glEnd();

    //Lorry Handle_1
    glBegin(GL_QUADS);
              glColor3ub(51, 51, 51);
              glVertex2f(4.27,-0.72);
              glVertex2f(4.29,-0.72);
              glVertex2f(4.29,-0.28);
              glVertex2f(4.27,-0.28);
    glEnd();

    //Lorry Handle_2
    glBegin(GL_QUADS);
              glColor3ub(51, 51, 51);
              glVertex2f(4.06,-0.72);
              glVertex2f(4.27,-0.72);
              glVertex2f(4.27,-0.7);
              glVertex2f(4.06,-0.7);
    glEnd();


    //Lorry box_1
    glBegin(GL_QUADS);
              glColor3ub(255, 179, 102);
              glVertex2f(4.1,-0.7);
              glVertex2f(4.25,-0.7);
              glVertex2f(4.25,-0.55);
              glVertex2f(4.1,-0.55);
    glEnd();

    //Lorry box_2
    glBegin(GL_QUADS);
              glColor3ub(255, 217, 179);
              glVertex2f(4.09,-0.55);
              glVertex2f(4.24,-0.55);
              glVertex2f(4.24,-0.38);
              glVertex2f(4.09,-0.38);
    glEnd();

    //lorry wheel_1
    GLfloat x9=4.32f; GLfloat y9=-0.72f; GLfloat radius_9 =0.04f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(26, 26, 26);
		glVertex2f(x9, y9);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x9 + (radius_9 * cos(i *  twicePi / triangleAmount)),
			    y9 + (radius_9 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


    //lorry wheel_2
    GLfloat x10=4.53f; GLfloat y10=-0.72f; GLfloat radius_10 =0.04f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(26, 26, 26);
		glVertex2f(x10, y10);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x10 + (radius_10 * cos(i *  twicePi / triangleAmount)),
			    y10 + (radius_10 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	glPopMatrix();






/////////////////////////////////////////////////////////////////////




                                                //**** for Big plane ******
     glBegin(GL_POLYGON);
              glColor3ub(204, 235, 255);
              glVertex2f(-3.8,-.78);
              glVertex2f(-1.52,-.78);
              glVertex2f(-1.48,-.77);
              glVertex2f(-1.43,-.75);
              glVertex2f(-1.38,-.73);
               glVertex2f(-1.34,-.7);

              glVertex2f(-1.16,-.59);

              glVertex2f(-.33,-.17);
               glVertex2f(-.27,-.13);
              glVertex2f(-.23,-.08);
              glVertex2f(-.23,-.08);
              glVertex2f(-.26,0);
              glVertex2f(-.3,.05);
              glVertex2f(-3.79,.06);
              glVertex2f(-3.84,.06);
              glVertex2f(-3.88,.05);
               glVertex2f(-3.92,.03);

              glVertex2f(-4.17,-.11);
              glVertex2f(-4.22,-.13);
              glVertex2f(-4.27,-.15);
              glVertex2f(-4.32,-.18);
              glVertex2f(-4.36,-.22);
              glVertex2f(-4.4,-.25);
              glVertex2f(-4.42,-.29);
              glVertex2f(-4.42,-.35);
              glVertex2f(-4.4,-.38);
              glVertex2f(-4.35,-.44);
              glVertex2f(-4.3,-.5);
              glVertex2f(-4.24,-.54);
              glVertex2f(-4.2,-.58);
              glVertex2f(-4.14,-.63);
               glVertex2f(-4.09,-.66);
              glVertex2f(-4.02,-.7);
              glVertex2f(-3.96,-.74);
              glVertex2f(-3.9,-.77);
              glVertex2f(-3.84,-.78);
              glEnd();

                                                       //Up Wing
              glBegin(GL_POLYGON);
              glColor3ub(255, 153, 0);
              glVertex2f(-.55,.05);
              glVertex2f(-.52,.71);
              glVertex2f(-.66,.65);
               glVertex2f(-.9,.16);
              glVertex2f(-.98,.12);
              glVertex2f(-1.04,.08);
              glVertex2f(-1.1,.06);

              glEnd();
                                                    //uo 2nd wing
               glBegin(GL_POLYGON);
              glColor3ub(0, 0, 153);
             glVertex2f(-1.47,0);
              glVertex2f(-1.11,.6);
              glVertex2f(-1.23,.57);
               glVertex2f(-1.65,.1);
              glVertex2f(-1.72,.08);
              glVertex2f(-1.78,.05);
              glVertex2f(-1.82,.03);
              glVertex2f(-1.88,0);
              glEnd();

                                           //////window for overload
              glBegin(GL_QUADS);
              glColor3ub(102, 179, 255);
              glVertex2f(-2.25,-.23);
              glVertex2f(-2.15,-.23);
              glVertex2f(-2.15,-.06);
              glVertex2f(-2.25,-.06);
              glEnd();
                                           //up 2nd wing with extra wing

               glBegin(GL_POLYGON);
              glColor3ub(255, 153, 0);
             glVertex2f(-1.82,.03);
              glVertex2f(-2.56,-.47);
              glVertex2f(-2.55,-.5);
               glVertex2f(-2.52,-.51);
              glVertex2f(-2.48,-.52);
              glVertex2f(-2.46,-.5);
              glVertex2f(-1.82,-.01);

              glEnd();
                                               //1
               glBegin(GL_QUADS);
              glColor3ub(102, 179, 255);
              glVertex2f(-2.46,-.5);
              glVertex2f(-1.8,-.5);
              glVertex2f(-1.47,0.01);
              glVertex2f(-1.82,0);
              glEnd();

                                                     //side wing
               glBegin(GL_POLYGON);
              glColor3ub(0, 0, 153);
              glVertex2f(-.31,-.13);
              glVertex2f(-.13,.21);
               glVertex2f(-.2,.2);
              glVertex2f(-.27,.17);
               glVertex2f(-.34,.13);
              glVertex2f(-.42,.07);
              glVertex2f(-.49,.02);
               glVertex2f(-.54,-.03);
              glVertex2f(-.58,-.08);
              glVertex2f(-.64,-.14);
               glEnd();

              //Front Mouth
               glBegin(GL_POLYGON);
                glColor3ub(255, 153, 0);
              glVertex2f(-4.27,-.15);
              glVertex2f(-4.32,-.18);
              glVertex2f(-4.36,-.22);
              glVertex2f(-4.4,-.25);
              glVertex2f(-4.42,-.29);
              glVertex2f(-4.42,-.35);
              glVertex2f(-4.4,-.38);
              glVertex2f(-4.35,-.44);
              glVertex2f(-4.3,-.5);

              glVertex2f(-4.28,-.45);
              glVertex2f(-4.26,-.4);
              glVertex2f(-4.25,-.33);
              glVertex2f(-4.25,-.26);
              glVertex2f(-4.27,-.19);
              glEnd();

                                                    //Front window
              glBegin(GL_QUADS);
              glColor3ub(102, 179, 255);
              glVertex2f(-3.45,-.27);
              glVertex2f(-3.35,-.27);
              glVertex2f(-3.35,-.03);
              glVertex2f(-3.45,-.03);
              glEnd();



              glBegin(GL_QUADS);
              glColor3ub(0, 0, 153);
              glVertex2f(-4.17,-.11);
              glVertex2f(-4.09,-.16);
              glVertex2f(-3.9,-.01);
              glVertex2f(-3.92,.03);
              glEnd();
               glBegin(GL_QUADS);
              glColor3ub(0, 0, 153);
              glVertex2f(-4.06,-.18);
              glVertex2f(-3.9,-.2);
              glVertex2f(-3.82,-.04);
              glVertex2f(-3.88,-.02);
              glEnd();
               glBegin(GL_QUADS);
              glColor3ub(0, 0, 153);
              glVertex2f(-3.87,-.2);
              glVertex2f(-3.76,-.18);
              glVertex2f(-3.76,-.05);
              glVertex2f(-3.8,-.05);
              glEnd();

               glBegin(GL_QUADS);
              glColor3ub(102, 179, 255);
              glVertex2f(-3.45,-.23);
              glVertex2f(-3.35,-.23);
              glVertex2f(-3.35,-.06);
              glVertex2f(-3.45,-.06);
              glEnd();

               glBegin(GL_QUADS);
              glColor3ub(102, 179, 255);
              glVertex2f(-3.25,-.23);
              glVertex2f(-3.15,-.23);
              glVertex2f(-3.15,-.06);
              glVertex2f(-3.25,-.06);
              glEnd();
              glBegin(GL_QUADS);
              glColor3ub(102, 179, 255);
              glVertex2f(-3.05,-.23);
              glVertex2f(-2.95,-.23);
              glVertex2f(-2.95,-.06);
              glVertex2f(-3.05,-.06);
             glEnd();
              glBegin(GL_QUADS);
              glColor3ub(102, 179, 255);
              glVertex2f(-2.85,-.23);
              glVertex2f(-2.75,-.23);
              glVertex2f(-2.75,-.06);
              glVertex2f(-2.85,-.06);
             glEnd();
              glBegin(GL_QUADS);
              glColor3ub(102, 179, 255);
              glVertex2f(-2.65,-.23);
              glVertex2f(-2.55,-.23);
              glVertex2f(-2.55,-.06);
              glVertex2f(-2.65,-.06);
              glEnd();
              glBegin(GL_QUADS);
              glColor3ub(102, 179, 255);
              glVertex2f(-2.45,-.23);
              glVertex2f(-2.35,-.23);
              glVertex2f(-2.35,-.06);
              glVertex2f(-2.45,-.06);
              glEnd();
               glBegin(GL_QUADS);
              glColor3ub(102, 179, 255);
              glVertex2f(-1.5,-.23);
              glVertex2f(-1.4,-.23);
              glVertex2f(-1.4,-.06);
              glVertex2f(-1.5,-.06);
            glEnd();

             glBegin(GL_QUADS);
              glColor3ub(102, 179, 255);
              glVertex2f(-1.3,-.23);
              glVertex2f(-1.2,-.23);
              glVertex2f(-1.2,-.06);
              glVertex2f(-1.3,-.06);
            glEnd();
             glBegin(GL_QUADS);
              glColor3ub(102, 179, 255);
              glVertex2f(-1.1,-.23);
              glVertex2f(-1,-.23);
              glVertex2f(-1,-.06);
              glVertex2f(-1.1,-.06);
              glEnd();

                                                     //wheel
              glBegin(GL_QUADS);
              glColor3ub(255, 153, 0);
              glVertex2f(-2.79,-.93);
              glVertex2f(-2.77,-.93);
              glVertex2f(-2.77,-.64);
              glVertex2f(-2.79,-.64);
               glEnd();



            glBegin(GL_POLYGON);
                glColor3ub(179, 224, 255);
                 glVertex2f(-2.77,-.93);
                 glVertex2f(-2.74,-.94);
              glVertex2f(-2.71,-.95);
              glVertex2f(-2.68,-.97);
              glVertex2f(-2.64,-.97);
              glVertex2f(-2.61,-.98);
              glVertex2f(-2.58,-.98);
              glVertex2f(-2.55,-.97);
               glVertex2f(-2.52,-.96);
              glVertex2f(-2.49,-.94);
              glVertex2f(-2.47,-.92);
              glVertex2f(-2.46,-.9);
              glVertex2f(-2.43,-.87);
              glVertex2f(-2.42,-.85);
              glVertex2f(-2.41,-.82);
               glVertex2f(-2.41,-.8);
              glVertex2f(-2.41,-.78);
              glVertex2f(-2.41,-.75);
              glVertex2f(-2.41,-.73);
              glVertex2f(-2.41,-.7);
              glVertex2f(-2.42,-.69);
              glVertex2f(-2.44,-.66);
               glVertex2f(-2.47,-.64);
              glVertex2f(-2.5,-.62);
              glVertex2f(-2.53,-.6);
              glVertex2f(-2.57,-.58);
              glVertex2f(-2.61,-.58);
              glVertex2f(-2.65,-.58);
              glVertex2f(-2.67,-.59);
               glVertex2f(-2.7,-.6);
              glVertex2f(-2.72,-.61);
              glVertex2f(-2.75,-.62);
              glVertex2f(-2.77,-.64);
              glEnd();
               glBegin(GL_POLYGON);
                glColor3ub(102, 179, 255);
              glVertex2f(-2.42,-.87);
              glVertex2f(-2.4,-.85);
              glVertex2f(-2.37,-.83);
              glVertex2f(-2.35,-.81);
              glVertex2f(-2.35,-.79);
              glVertex2f(-2.34,-.77);
              glVertex2f(-2.35,-.74);
              glVertex2f(-2.35,-.73);
              glVertex2f(-2.37,-.71);
              glVertex2f(-2.4,-.69);
              glVertex2f(-2.42,-.67);
              glVertex2f(-2.44,-.67);
              glVertex2f(-2.44,-.87);
              glEnd();
                                                //2nd wheel
               glBegin(GL_QUADS);
                glColor3ub(102, 179, 255);

              glVertex2f(-2.26,-.86);
              glVertex2f(-2.14,-.86);
              glVertex2f(-2.14,-.78);
              glVertex2f(-2.26,-.78);
              glEnd();
              glBegin(GL_LINES);
                glColor3ub(0, 0, 153);

              glVertex2f(-2.22,-.91);
              glVertex2f(-2.22,-.86);
              glVertex2f(-2.19,-.91);
              glVertex2f(-2.19,-.86);
              glEnd();
                                               //3rd wheel
              glBegin(GL_QUADS);
                glColor3ub(102, 179, 255);

              glVertex2f(-3.6,-.86);
              glVertex2f(-3.48,-.86);
              glVertex2f(-3.48,-.78);
              glVertex2f(-3.6,-.78);
              glEnd();
              glBegin(GL_LINES);
                glColor3ub(0, 0, 153);

              glVertex2f(-3.55,-.91);
              glVertex2f(-3.55,-.86);
              glVertex2f(-3.53,-.91);
              glVertex2f(-3.53,-.86);
              glEnd();
        int q1;

	GLfloat m1=-2.21; GLfloat n1=-.96f; GLfloat radius1q =.05f;
	int triangleAmount1q = 20; //# of triangles used to draw circle


	GLfloat twicePi1q = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(0, 0, 153);
		glVertex2f(m1, n1); // center of circle
		for(q1 = 0; q1 <= triangleAmount1q;q1++) {
			glVertex2f(
		            m1 + (radius1q * cos(q1 *  twicePi1q / triangleAmount1q)),
			    n1 + (radius1q * sin(q1 * twicePi1q / triangleAmount1q))
			);
		}

	 glEnd();
	    int q2;

	GLfloat m2=-2.21; GLfloat n2=-.96f; GLfloat radius2q =.04f;
	int triangleAmount2q = 20; //# of triangles used to draw circle


	GLfloat twicePi2q = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(204, 235, 255);
		glVertex2f(m2, n2); // center of circle
		for(q2 = 0; q2 <= triangleAmount2q;q2++) {
			glVertex2f(
		            m2 + (radius2q * cos(q2 *  twicePi2q / triangleAmount2q)),
			    n2 + (radius2q * sin(q2 * twicePi2q / triangleAmount2q))
			);
		}
		glEnd();
		 int q3;

	GLfloat m3=-3.54; GLfloat n3=-.96f; GLfloat radius3q =.05f;
	int triangleAmount3q = 20; //# of triangles used to draw circle


	GLfloat twicePi3q = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(0, 0, 153);
		glVertex2f(m3, n3); // center of circle
		for(q3 = 0; q3 <= triangleAmount3q;q3++) {
			glVertex2f(
		            m3 + (radius3q * cos(q3 *  twicePi3q / triangleAmount3q)),
			    n3 + (radius3q * sin(q3 * twicePi3q / triangleAmount3q))
			);
		}
		glEnd();
		int q4;

	GLfloat m4=-3.54; GLfloat n4=-.96f; GLfloat radius4q =.04f;
	int triangleAmount4q = 20; //# of triangles used to draw circle


	GLfloat twicePi4q = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(204, 235, 255);
		glVertex2f(m4, n4); // center of circle
		for(q4 = 0; q4 <= triangleAmount4q;q4++) {
			glVertex2f(
		            m4 + (radius4q * cos(q4 *  twicePi4q / triangleAmount4q)),
			    n4 + (radius4q * sin(q4 * twicePi4q / triangleAmount4q))
			);
		}

    glEnd();

                                                //working man  stand

                                                 //head
             glPushMatrix();
   glTranslatef(positionr,0,0);
             glBegin(GL_POLYGON);
              glColor3ub(255, 230, 204);
               glVertex2f(-.49,-.64);
                glVertex2f(-.43,-.62);
                 glVertex2f(-.45,-.57);
                  glVertex2f(-.47,-.55);
                   glVertex2f(-.5,-.57);
                    glVertex2f(-.51,-.61);

    glEnd();                                //hair
    glBegin(GL_POLYGON);
              glColor3ub(0,0,0);
              glVertex2f(-.44,-.64);
              glVertex2f(-.42,-.59);
              glVertex2f(-.45,-.55);
              glVertex2f(-.47,-.55);
              glEnd();
                                                 //right hand
                glBegin(GL_QUADS);
              glColor3ub(255, 230, 204);
               glVertex2f(-.44,-.7);
               glVertex2f(-.45,-.66);
               glVertex2f(-.6,-.64);
               glVertex2f(-.6,-.66);
    glEnd();
                                                  //body
             glBegin(GL_QUADS);
              glColor3ub(255, 169, 77);
               glVertex2f(-.54,-.84);
               glVertex2f(-.42,-.84);
               glVertex2f(-.45,-.64);
               glVertex2f(-.5,-.64);
    glEnd();

                                                    //hand
                 glBegin(GL_QUADS);
              glColor3ub(0, 51, 102);
               glVertex2f(-.56,-.77);
               glVertex2f(-.48,-.69);
               glVertex2f(-.5,-.64);
               glVertex2f(-.56,-.72);
    glEnd();
    glBegin(GL_QUADS);
              glColor3ub(255, 230, 204);
               glVertex2f(-.56,-.77);
               glVertex2f(-.56,-.72);
               glVertex2f(-.6,-.69);
               glVertex2f(-.6,-.73);
    glEnd();
                                                 //leg
    glBegin(GL_QUADS);
              glColor3ub(0, 102, 255);
               glVertex2f(-.54,-1.04);
               glVertex2f(-.5,-1.04);
               glVertex2f(-.48,-.84);
               glVertex2f(-.54,-.84);
    glEnd();
     glBegin(GL_QUADS);
              glColor3ub(0, 102, 255);
               glVertex2f(-.44,-1.04);
               glVertex2f(-.41,-1.03);
               glVertex2f(-.42,-.84);
               glVertex2f(-.48,-.84);
    glEnd();
                                                 //shoe
       glBegin(GL_QUADS);
              glColor3ub(0,0,0);
               glVertex2f(-.57,-1.07);
               glVertex2f(-.5,-1.07);
               glVertex2f(-.51,-1.04);
               glVertex2f(-.54,-1.04);
    glEnd();
      glBegin(GL_QUADS);
              glColor3ub(0,0,0);
               glVertex2f(-.46,-1.07);
               glVertex2f(-.39,-1.06);
               glVertex2f(-.41,-1.03);
               glVertex2f(-.44,-1.04);
    glEnd();

                                                 //working stand

glBegin(GL_QUADS);
              glColor3ub(0, 51, 102);
               glVertex2f(-.91,-.62);
               glVertex2f(-.6,-.62);
               glVertex2f(-.6,-.6);
               glVertex2f(-.91,-.6);
    glEnd();
    glBegin(GL_LINES);
              glColor3ub(0, 51, 102);
               glVertex2f(-.91,-.62);
               glVertex2f(-.6,-.71);
               glVertex2f(-.6,-.71);
               glVertex2f(-.91,-.83);
               glVertex2f(-.91,-.83);
               glVertex2f(-.6,-.95);
               glVertex2f(-.6,-.62);
               glVertex2f(-.91,-.71);
               glVertex2f(-.91,-.71);
               glVertex2f(-.6,-.83);
                glVertex2f(-.6,-.83);
                 glVertex2f(-.91,-.95);
    glEnd();
    glBegin(GL_QUADS);
              glColor3ub(0, 51, 102);
               glVertex2f(-.91,-1);
               glVertex2f(-.6,-1);
               glVertex2f(-.6,-.95);
               glVertex2f(-.91,-.95);
    glEnd();
    int q9;

	GLfloat m9=-.83; GLfloat n9=-1.02f; GLfloat radius9q =.02f;
	int triangleAmount9q = 20;


	GLfloat twicePi9q = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(0, 0, 0);
		glVertex2f(m9, n9);
		for(q9 = 0; q9 <= triangleAmount9q;q9++) {
			glVertex2f(
		            m9 + (radius9q * cos(q9 *  twicePi9q / triangleAmount9q)),
			    n9+ (radius9q * sin(q9 * twicePi9q / triangleAmount9q))
			);
		}

    glEnd();
        int q10;

	GLfloat m10=-.7; GLfloat n10=-1.02f; GLfloat radius10q =.02f;
	int triangleAmount10q = 20;


	GLfloat twicePi10q = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(0, 0, 0);
		glVertex2f(m10, n10);
		for(q10 = 0; q10 <= triangleAmount10q;q10++) {
			glVertex2f(
		            m10 + (radius10q * cos(q10 *  twicePi10q / triangleAmount10q)),
			    n10+ (radius10q * sin(q10 * twicePi10q / triangleAmount10q))
			);
		}

    glEnd();

    glPopMatrix();
//////////////////////////////////////////////////////////////////////////////////////////





                                                                                      //traffic cone
    glBegin(GL_TRIANGLES);
              glColor3ub(255, 163, 26);
                 glVertex2f(-4.6,-1.5);
                 glVertex2f(-4.5,-1.5);
                 glVertex2f(-4.55,-1.2);
                 glVertex2f(-4.63,-1.53);
                 glVertex2f(-4.47,-1.53);
                 glVertex2f(-4.55,-1.45);

    glEnd();

                                                                             //********    bag carry man


                                                                //head
      glPushMatrix();
   glTranslatef(positionLorry,0,0);
int q5;

	GLfloat m5=-3.29; GLfloat n5=-.81f; GLfloat radius5q =.08f;
	int triangleAmount5q = 20;


	GLfloat twicePi5q = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(255, 230, 204);
		glVertex2f(m5, n5);
		for(q5 = 0; q5 <= triangleAmount5q;q5++) {
			glVertex2f(
		            m5 + (radius5q * cos(q5 *  twicePi5q / triangleAmount5q)),
			    n5 + (radius5q * sin(q5 * twicePi5q / triangleAmount5q))
			);
		}

    glEnd();
                                                                             //hair
    int q6;

	GLfloat m6=-3.29; GLfloat n6=-.81f; GLfloat radius6q =.08f;
	int triangleAmount6q = 20;


	GLfloat twicePi6q = 1.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(0,0,0);
		glVertex2f(m6, n6);
		for(q6 = 0; q6 <= triangleAmount6q;q6++) {
			glVertex2f(
		            m6 + (radius6q * cos(q6 *  twicePi6q / triangleAmount6q)),
			    n6 + (radius6q * sin(q6 * twicePi6q / triangleAmount6q))
			);
		}

    glEnd();



                                                     //nack
      glBegin(GL_QUADS);
              glColor3ub(255, 230, 204);
              glVertex2f(-3.31,-.92);
              glVertex2f(-3.27,-.92);
              glVertex2f(-3.27,-.89);
              glVertex2f(-3.31,-.89);
    glEnd();
                                                  //body blue dress
      glBegin(GL_QUADS);
              glColor3ub(0, 102, 255);
              glVertex2f(-3.35,-1.15);
              glVertex2f(-3.2,-1.15);
              glVertex2f(-3.21,-1.01);
              glVertex2f(-3.35,-1.01);
                                                  //orange dr
    glEnd();
     glBegin(GL_QUADS);
              glColor3ub(255, 169, 77);
              glVertex2f(-3.35,-1.01);
              glVertex2f(-3.21,-1.01);
              glVertex2f(-3.21,-.92);
              glVertex2f(-3.34,-.92);
    glEnd();
                                                  //hand
     glBegin(GL_POLYGON);
              glColor3ub(255, 169, 77);
              glVertex2f(-3.32,-.92);
              glVertex2f(-3.38,-.92);
              glVertex2f(-3.39,-.94);
              glVertex2f(-3.41,-1);
              glVertex2f(-3.41,-1.07);
              glVertex2f(-3.37,-1.07);
              glVertex2f(-3.35,-.96);
                glEnd();
                                                  //hand right
     glBegin(GL_POLYGON);
              glColor3ub(255, 169, 77);
              glVertex2f(-3.23,-.92);
              glVertex2f(-3.17,-.93);
              glVertex2f(-3.15,-.97);
              glVertex2f(-3.14,-1);
              glVertex2f(-3.14,-1.07);
              glVertex2f(-3.18,-1.07);
               glVertex2f(-3.21,-.96);
              glEnd();

      glBegin(GL_QUADS);
              glColor3ub(255, 230, 204);
              glVertex2f(-3.4,-1.22);
              glVertex2f(-3.38,-1.22);
              glVertex2f(-3.37,-1.07);
              glVertex2f(-3.41,-1.07);
    glEnd();
    glBegin(GL_QUADS);
              glColor3ub(255, 230, 204);
              glVertex2f(-3.16,-1.22);
              glVertex2f(-3.14,-1.22);
              glVertex2f(-3.14,-1.07);
              glVertex2f(-3.17,-1.07);
    glEnd();



                                                      //blue dr
         glBegin(GL_QUADS);
              glColor3ub(0, 102, 255);
              glVertex2f(-3.33,-1.01);
              glVertex2f(-3.31,-1.01);
              glVertex2f(-3.31,-.92);
              glVertex2f(-3.33,-.92);
    glEnd();
     glBegin(GL_QUADS);
              glColor3ub(0, 102, 255);
              glVertex2f(-3.26,-1.01);
              glVertex2f(-3.24,-1.01);
              glVertex2f(-3.24,-.92);
              glVertex2f(-3.26,-.92);
    glEnd();

                                                  //leg1
      glBegin(GL_QUADS);
              glColor3ub(0, 102, 255);
              glVertex2f(-3.32,-1.45);
              glVertex2f(-3.28,-1.45);
              glVertex2f(-3.28,-1.15);
              glVertex2f(-3.35,-1.15);
    glEnd();
                                                  //leg2
      glBegin(GL_QUADS);
              glColor3ub(0, 102, 255);
              glVertex2f(-3.24,-1.45);
              glVertex2f(-3.2,-1.45);
              glVertex2f(-3.2,-1.15);
              glVertex2f(-3.28,-1.15);
    glEnd();
                                                  //shoe1
      glBegin(GL_QUADS);
              glColor3ub(0, 0, 0);
              glVertex2f(-3.38,-1.48);
              glVertex2f(-3.28,-1.48);
              glVertex2f(-3.28,-1.45);
              glVertex2f(-3.32,-1.45);
    glEnd();
                                                  //shoe2
      glBegin(GL_QUADS);
             glColor3ub(0, 0, 0);
              glVertex2f(-3.24,-1.48);
              glVertex2f(-3.15,-1.48);
              glVertex2f(-3.2,-1.45);
              glVertex2f(-3.24,-1.45);
    glEnd();
                                                   //lorry 1st
    glBegin(GL_QUADS);
              glColor3ub(0, 0, 255);

              glVertex2f(-3.14,-1.22);
              glVertex2f(-3.07,-1.22);
              glVertex2f(-3.06,-1.2);
              glVertex2f(-3.14,-1.2);

    glEnd();
    glBegin(GL_QUADS);
              glColor3ub(194, 214, 214);

              glVertex2f(-3.07,-1.22);
              glVertex2f(-3.07,-1.45);
              glVertex2f(-3.05,-1.45);
              glVertex2f(-3.05,-1.2);
              glEnd();
 glBegin(GL_QUADS);
              glColor3ub(194, 214, 214);

              glVertex2f(-3.08,-1.45);
              glVertex2f(-3.08,-1.5);
              glVertex2f(-2.52,-1.5);
              glVertex2f(-2.52,-1.45);
    glEnd();

              int q11;

	GLfloat m11=-2.99; GLfloat n11=-1.53f; GLfloat radius11q =.03f;
	int triangleAmount11q = 20;


	GLfloat twicePi11q = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(0,0,0);
		glVertex2f(m11, n11);
		for(q11 = 0; q11 <= triangleAmount11q;q11++) {
			glVertex2f(
		            m11 + (radius11q * cos(q11 *  twicePi11q / triangleAmount11q)),
			    n11 + (radius11q * sin(q11 * twicePi11q / triangleAmount11q))
			);
		}

    glEnd();

   int q12;

	GLfloat m12=-2.62; GLfloat n12=-1.53f; GLfloat radius12q =.03f;
	int triangleAmount12q = 20;


	GLfloat twicePi12q = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(0,0,0);
		glVertex2f(m12, n12);
		for(q12 = 0; q12 <= triangleAmount12q;q12++) {
			glVertex2f(
		            m12 + (radius12q * cos(q12 *  twicePi12q / triangleAmount12q)),
			    n12 + (radius12q * sin(q12 * twicePi12q / triangleAmount12q))
			);
		}

    glEnd();


glPopMatrix();



/////////////////////////////////////////////////////////////////////////////////
                                             // *********** engi Man
                                                //HEAD
               glPushMatrix();
   glTranslatef(positionEngineer,0,0);
    glBegin(GL_POLYGON);
                glBegin(GL_POLYGON);
              glColor3ub(0,0,0);
              glVertex2f(-4.84,-.89);
              glVertex2f(-4.79,-.89);
              glVertex2f(-4.82,-.84);
              glVertex2f(-4.86,-.86);

    glEnd();
                                                //HAT
    glBegin(GL_POLYGON);
              glColor3ub(255, 169, 77);
              glVertex2f(-4.87,-.86);
              glVertex2f(-4.77,-.8);
              glVertex2f(-4.71,-.76);
              glVertex2f(-4.76,-.73);
              glVertex2f(-4.82,-.74);
              glVertex2f(-4.86,-.8);

    glEnd();
                                                 //FACE
    glBegin(GL_POLYGON);
              glColor3ub(255, 230, 204);
              glVertex2f(-4.82,-.84);
              glVertex2f(-4.77,-.8);
              glVertex2f(-4.74,-.78);
              glVertex2f(-4.72,-.8);
              glVertex2f(-4.71,-.86);
              glVertex2f(-4.72,-.88);
              glVertex2f(-4.79,-.89);
    glEnd();

                                                 //BODY
     glBegin(GL_QUADS);
    glColor3ub(255, 169, 77);
    glVertex2f(-4.83,-1.22);
    glVertex2f(-4.69,-1.22);
    glVertex2f(-4.69,-.98);
    glVertex2f(-4.83,-.98);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(255, 169, 77);
    glVertex2f(-4.78,-.93);
    glVertex2f(-4.82,-.94);
    glVertex2f(-4.86,-.95);
    glVertex2f(-4.88,-.97);
    glVertex2f(-4.89,-1.12);
    glVertex2f(-4.8,-1.14);
    glVertex2f(-4.79,-1.12);
    glVertex2f(-4.84,-1.09);
    glVertex2f(-4.83,-.99);
    glVertex2f(-4.71,-.99);
    glVertex2f(-4.68,-1.1);
    glVertex2f(-4.64,-1.1);
    glVertex2f(-4.65,-.98);
    glVertex2f(-4.67,-.96);
    glVertex2f(-4.71,-.94);
    glEnd();

                                                      //HAND
    glBegin(GL_QUADS);
    glColor3ub(255, 230, 204);
    glVertex2f(-4.89,-1.12);
    glVertex2f(-4.75,-1.17);
    glVertex2f(-4.74,-1.14);
    glVertex2f(-4.84,-1.09);
    glVertex2f(-4.68,-1.1);
    glVertex2f(-4.69,-1.14);
    glVertex2f(-4.69,-1.19);
    glVertex2f(-4.64,-1.1);
    glVertex2f(-4.8,-.93);                            //NECK
    glVertex2f(-4.75,-.93);
    glVertex2f(-4.75,-.88);
    glVertex2f(-4.79,-.89);

    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 102, 255);
    glVertex2f(-4.79,-1.65);
    glVertex2f(-4.73,-1.65);
    glVertex2f(-4.76,-1.22);
    glVertex2f(-4.83,-1.22);
    glVertex2f(-4.69,-1.64);
    glVertex2f(-4.64,-1.63);
    glVertex2f(-4.69,-1.22);
    glVertex2f(-4.76,-1.22);
        glColor3ub(0, 0,0);                        //SHOE
    glVertex2f(-4.8,-1.68);
    glVertex2f(-4.7,-1.68);
    glVertex2f(-4.73,-1.65);
    glVertex2f(-4.79,-1.65);
    glVertex2f(-4.69,-1.68);
    glVertex2f(-4.59,-1.67);
    glVertex2f(-4.64,-1.63);
    glVertex2f(-4.69,-1.64);

    glEnd();
    glBegin(GL_QUADS);                     //umbrella

              glColor3ub(242, 242, 242);
           glVertex2f(-4.74,-1.16);
           glVertex2f(-4.72,-1.16);
           glVertex2f(-4.72,-.68);
           glVertex2f(-4.74,-.68);

                 glEnd();

 glBegin(GL_POLYGON);

              glColor3ub(0, 0, 102);
           glVertex2f(-4.98,-.68);
           glVertex2f(-4.52,-.68);
           glVertex2f(-4.65,-.49);
           glVertex2f(-4.77,-.45);
           glVertex2f(-4.89,-.49);


                 glEnd();

     glPopMatrix();

     //////////////////////////////////////////////////////////////////////////////////////
                                                //rain
        glPushMatrix();
   glTranslatef(positionRain,positionRain,0);

         glBegin(GL_LINES);
              glColor3ub(242, 242, 242);

                 glVertex2f(1.2,1.8);
                 glVertex2f(1.4,2);
                 glVertex2f(1.6,1.4);
                 glVertex2f(1.8,1.6);
                 glVertex2f(2,1);
                 glVertex2f(2.2,1.2);
                 glVertex2f(.6,2.4);
                 glVertex2f(.8,2.6);
                 glVertex2f(.2,2.8);
                 glVertex2f(.4,3);
                glVertex2f(-.6,3.6);
                 glVertex2f(-.4,3.8);
                 glVertex2f(-1,4);
                 glVertex2f(-.8,4.2);
                 glVertex2f(-1.4,4.4);
                 glVertex2f(-1.2,4.6);
                 glVertex2f(-1.8,4.8);
                 glVertex2f(-1.6,5);
                 glVertex2f(-2.2,5.2);
                 glVertex2f(-2,5.4);
                 glVertex2f(-2.6,5.6);
                 glVertex2f(-2.4,5.8);
                 glVertex2f(-3,6);
                 glVertex2f(-2.8,6.2);
                 glVertex2f(2.4,.6);
                 glVertex2f(2.6,.8);
                 glVertex2f(2.8,.2);
                 glVertex2f(3,.4);
                 glVertex2f(1.4,3.6);
                 glVertex2f(1.2,3.4);


                glVertex2f(6.2,.2);
                 glVertex2f(6,0);
                 glVertex2f(5.6,.4);
                 glVertex2f(5.4,.2);
                 glVertex2f(5.2,.8);
                 glVertex2f(5,.6);
                 glVertex2f(4.8,1.2);
                 glVertex2f(4.6,1);
                 glVertex2f(4.2,1.4);
                 glVertex2f(4.4,1.6);
                 glVertex2f(3.8,1.8);
                 glVertex2f(4,2);
                 glVertex2f(3.4,2.2);
                 glVertex2f(3.6,2.4);
                 glVertex2f(3,2.6);
                 glVertex2f(3.2,2.8);
                 glVertex2f(2.6,3);
                 glVertex2f(2.8,3.2);
                 glVertex2f(2.2,3.4);
                 glVertex2f(2.4,3.6);
                 glVertex2f(1.8,3.8);
                 glVertex2f(2,4);
                 glVertex2f(1.4,4.2);
                 glVertex2f(1.6,4.4);
                 glVertex2f(1,4.6);
                 glVertex2f(1.2,4.8);
                 glVertex2f(.6,5);
                 glVertex2f(.8,5.2);
                 glVertex2f(.2,5.4);
                 glVertex2f(.4,5.6);
                 glVertex2f(0,5.8);
                 glVertex2f(.2,6);
                 glVertex2f(-.4,6.2);
                 glVertex2f(-.2,6.4);
                 glVertex2f(-.8,6.6);
                 glVertex2f(-.6,6.8);
                 glVertex2f(-1.2,7);
                 glVertex2f(-1,7.2);
                 glVertex2f(-1.6,7.4);
                 glVertex2f(-1.4,7.6);
                 glVertex2f(-2,7.8);
                 glVertex2f(-1.8,8);

                 glVertex2f(8,-.6);
                 glVertex2f(8.2,-.4);
                 glVertex2f(7.6,-.2);
                 glVertex2f(7.8,0);
                 glVertex2f(7.2,.2);
                 glVertex2f(7.4,.4);
                 glVertex2f(6.8,.6);
                 glVertex2f(7,.8);
                 glVertex2f(6.4,1);
                 glVertex2f(6.6,1.2);
                 glVertex2f(6,1.4);
                 glVertex2f(6.2,1.6);
                 glVertex2f(5.8,1.8);
                 glVertex2f(6,2);
                 glVertex2f(5.4,2.2);
                 glVertex2f(5.6,2.4);
                 glVertex2f(5.2,2.6);
                 glVertex2f(5.4,2.8);
                 glVertex2f(4.8,3);
                 glVertex2f(5,3.2);
                 glVertex2f(4.4,3.4);
                 glVertex2f(4.6,3.6);
                 glVertex2f(4.2,3.8);
                 glVertex2f(4.4,4);
                 glVertex2f(3.8,4.2);
                 glVertex2f(4,4.4);
                 glVertex2f(3.4,4.6);
                 glVertex2f(3.6,4.8);
                 glVertex2f(3,5);
                 glVertex2f(3.2,5.2);
                 glVertex2f(2.8,5.4);
                 glVertex2f(3,5.6);
                 glVertex2f(2.4,5.8);
                 glVertex2f(2.6,6);
                 glVertex2f(2,6.2);
                 glVertex2f(2.2,6.4);
                 glVertex2f(1.6,6.6);
                 glVertex2f(1.8,6.8);
                 glVertex2f(1.2,7);
                 glVertex2f(1.4,7.2);
                 glVertex2f(.8,7.4);
                 glVertex2f(1,7.6);
                 glVertex2f(.4,7.8);
                 glVertex2f(.6,8);
                 glVertex2f(0,8.2);
                 glVertex2f(.2,8.4);
                 glVertex2f(-.4,8.6);
                 glVertex2f(-.2,8.8);
                 glVertex2f(-1,9);
                 glVertex2f(-.8,9.2);
                 glVertex2f(-1.4,9.4);
                 glVertex2f(-1.2,9.6);

                 glVertex2f(2.4,-2);
                 glVertex2f(2.6,-1.8);
                 glVertex2f(2,-1.6);
                 glVertex2f(2.2,-1.4);
                 glVertex2f(1.6,-1.2);
                 glVertex2f(1.8,-1);
                 glVertex2f(2.8,-2.4);
                 glVertex2f(3,-2.2);
                 glVertex2f(3.2,-2.8);
                 glVertex2f(3.4,-2.6);

                 glVertex2f(1.2,-1.2);
                 glVertex2f(1.4,-1);
                 glVertex2f(.8,-.8);
                 glVertex2f(1,-.6);
                 glVertex2f(.4,-.4);
                 glVertex2f(.6,-.2);
                 glVertex2f(0,0);
                 glVertex2f(.2,.2);
                 glVertex2f(-.4,.4);
                 glVertex2f(-.2,.6);
                 glVertex2f(-.8,.8);
                 glVertex2f(-.6,1);
                 glVertex2f(-1.2,1.2);
                 glVertex2f(-1,1.4);
                 glVertex2f(-1.6,1.6);
                 glVertex2f(-1.4,1.8);
                 glVertex2f(-2,2);
                 glVertex2f(-1.8,2.2);
                 glVertex2f(-2.2,2.4);
                 glVertex2f(-2,2.6);
                 glVertex2f(-2.6,2.8);
                 glVertex2f(-2.4,3);

                 glVertex2f(5.4,3.6);
                 glVertex2f(5.6,3.8);
                 glVertex2f(5.6,4.4);
                 glVertex2f(5.8,4.6);
                 glVertex2f(5.6,5);
                 glVertex2f(5.8,5.2);
                 glVertex2f(5.8,6);
                 glVertex2f(6,6.2);
                 glVertex2f(6.2,7);
                 glVertex2f(6.4,7.2);

                 glEnd();


                 glPopMatrix();
















////////////////////////////////////////////////////////
////////////////////////////////////////////////////////


    // Main runway
    glBegin(GL_QUADS);
              glColor3ub(89,89,89);
              glVertex2f(-5,-3.53);
              glVertex2f(5,-3.53);
              glVertex2f(5,-2);
              glVertex2f(-5,-2);
    glEnd();



    // Runway up line/////////// Md. Ibrahim
    /////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////
    glBegin(GL_QUADS);
              glColor3ub(204, 204, 204);
              glVertex2f(-5,-2);
              glVertex2f(5,-2);
              glVertex2f(5,-1.8);
              glVertex2f(-5,-1.8);
    glEnd();

    //Runway light_1
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(-4.7,-1.95);
              glVertex2f(-4.6,-1.95);
              glVertex2f(-4.6,-1.85);
              glVertex2f(-4.62,-1.82);
              glVertex2f(-4.68,-1.82);
              glVertex2f(-4.7,-1.85);

    glEnd();

    //Runway light_2
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(-4,-1.95);
              glVertex2f(-3.9,-1.95);
              glVertex2f(-3.9,-1.85);
              glVertex2f(-3.92,-1.82);
              glVertex2f(-3.98,-1.82);
              glVertex2f(-4,-1.85);

    glEnd();

    //Runway light_3
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(-3.3,-1.95);
              glVertex2f(-3.2,-1.95);
              glVertex2f(-3.2,-1.85);
              glVertex2f(-3.22,-1.82);
              glVertex2f(-3.28,-1.82);
              glVertex2f(-3.3,-1.85);

    glEnd();

    //Runway light_4
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(-2.6,-1.95);
              glVertex2f(-2.5,-1.95);
              glVertex2f(-2.5,-1.85);
              glVertex2f(-2.52,-1.82);
              glVertex2f(-2.58,-1.82);
              glVertex2f(-2.6,-1.85);

    glEnd();

    //Runway light_5
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(-1.9,-1.95);
              glVertex2f(-1.8,-1.95);
              glVertex2f(-1.8,-1.85);
              glVertex2f(-1.82,-1.82);
              glVertex2f(-1.88,-1.82);
              glVertex2f(-1.9,-1.85);

    glEnd();

    //Runway light_6
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(-1.2,-1.95);
              glVertex2f(-1.1,-1.95);
              glVertex2f(-1.1,-1.85);
              glVertex2f(-1.12,-1.82);
              glVertex2f(-1.18,-1.82);
              glVertex2f(-1.2,-1.85);

    glEnd();

    //Runway light_7
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(-0.5,-1.95);
              glVertex2f(-0.4,-1.95);
              glVertex2f(-0.4,-1.85);
              glVertex2f(-0.42,-1.82);
              glVertex2f(-0.48,-1.82);
              glVertex2f(-0.5,-1.85);

    glEnd();

    //Runway light_8
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(0.2,-1.95);
              glVertex2f(0.3,-1.95);
              glVertex2f(0.3,-1.85);
              glVertex2f(0.28,-1.82);
              glVertex2f(0.22,-1.82);
              glVertex2f(0.2,-1.85);

    glEnd();


    //Runway light_9
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(0.9,-1.95);
              glVertex2f(1,-1.95);
              glVertex2f(1,-1.85);
              glVertex2f(0.98,-1.82);
              glVertex2f(0.92,-1.82);
              glVertex2f(0.9,-1.85);

    glEnd();


    //Runway light_10
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(1.6,-1.95);
              glVertex2f(1.7,-1.95);
              glVertex2f(1.7,-1.85);
              glVertex2f(1.68,-1.82);
              glVertex2f(1.62,-1.82);
              glVertex2f(1.6,-1.85);

    glEnd();


    //Runway light_11
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(2.3,-1.95);
              glVertex2f(2.4,-1.95);
              glVertex2f(2.4,-1.85);
              glVertex2f(2.38,-1.82);
              glVertex2f(2.32,-1.82);
              glVertex2f(2.3,-1.85);

    glEnd();


    //Runway light_12
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(3,-1.95);
              glVertex2f(3.1,-1.95);
              glVertex2f(3.1,-1.85);
              glVertex2f(3.08,-1.82);
              glVertex2f(3.02,-1.82);
              glVertex2f(3,-1.85);

    glEnd();


    //Runway light_13
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(3.7,-1.95);
              glVertex2f(3.8,-1.95);
              glVertex2f(3.8,-1.85);
              glVertex2f(3.78,-1.82);
              glVertex2f(3.72,-1.82);
              glVertex2f(3.7,-1.85);

    glEnd();


    //Runway light_14
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(4.4,-1.95);
              glVertex2f(4.5,-1.95);
              glVertex2f(4.5,-1.85);
              glVertex2f(4.48,-1.82);
              glVertex2f(4.42,-1.82);
              glVertex2f(4.4,-1.85);

    glEnd();







////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
    //Md. Ibrahim
    // Runway line
    glBegin(GL_QUADS);
              glColor3ub(255, 187, 51);
              glVertex2f(-5,-2.3);
              glVertex2f(-2.8,-2.3);
              glVertex2f(-2.8,-2.1);
              glVertex2f(-5,-2.1);
    glEnd();
      // Runway line2
    glBegin(GL_QUADS);
              glColor3ub(255, 187, 51);
              glVertex2f(-5,-2.7);
              glVertex2f(-2.8,-2.7);
              glVertex2f(-2.8,-2.5);
              glVertex2f(-5,-2.5);
    glEnd();
      // Runway line3
    glBegin(GL_QUADS);
              glColor3ub(255, 187, 51);
              glVertex2f(-5,-3.1);
              glVertex2f(-2.8,-3.1);
              glVertex2f(-2.8,-2.9);
              glVertex2f(-5,-2.9);
    glEnd();
    // Runway line3
    glBegin(GL_QUADS);
              glColor3ub(255, 187, 51);
              glVertex2f(-5,-3.5);
              glVertex2f(-2.8,-3.5);
              glVertex2f(-2.8,-3.3);
              glVertex2f(-5,-3.3);
    glEnd();
       // Runway line3
    glBegin(GL_QUADS);
              glColor3ub(255, 187, 51);
              glVertex2f(-1,-2.9);
              glVertex2f(1.01,-2.9);
              glVertex2f(1.01,-2.7);
              glVertex2f(-1,-2.7);
    glEnd();
     // Runway line3
    glBegin(GL_QUADS);
              glColor3ub(255, 187, 51);
              glVertex2f(2.49,-2.9);
              glVertex2f(4.5,-2.9);
              glVertex2f(4.5,-2.7);
              glVertex2f(2.49,-2.7);
    glEnd();

////////////////////////////////////////////////////
////////////////////////////////////////////////////

    // Runway down Line
    glBegin(GL_QUADS);
              glColor3ub(204, 204, 204);
              glVertex2f(-5,-3.78);
              glVertex2f(5,-3.78);
              glVertex2f(5,-3.53);
              glVertex2f(-5,-3.53);
    glEnd();


    //Runway light_1
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(-4.7,-3.7);
              glVertex2f(-4.6,-3.7);
              glVertex2f(-4.6,-3.6);
              glVertex2f(-4.62,-3.57);
              glVertex2f(-4.68,-3.57);
              glVertex2f(-4.7,-3.6);

    glEnd();

    //Runway light_2
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(-4,-3.7);
              glVertex2f(-3.9,-3.7);
              glVertex2f(-3.9,-3.6);
              glVertex2f(-3.92,-3.57);
              glVertex2f(-3.98,-3.57);
              glVertex2f(-4,-3.6);

    glEnd();

    //Runway light_3
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(-3.3,-3.7);
              glVertex2f(-3.2,-3.7);
              glVertex2f(-3.2,-3.6);
              glVertex2f(-3.22,-3.57);
              glVertex2f(-3.28,-3.57);
              glVertex2f(-3.3,-3.6);

    glEnd();

    //Runway light_4
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(-2.6,-3.7);
              glVertex2f(-2.5,-3.7);
              glVertex2f(-2.5,-3.6);
              glVertex2f(-2.52,-3.57);
              glVertex2f(-2.58,-3.57);
              glVertex2f(-2.6,-3.6);

    glEnd();

    //Runway light_5
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(-1.9,-3.7);
              glVertex2f(-1.8,-3.7);
              glVertex2f(-1.8,-3.6);
              glVertex2f(-1.82,-3.57);
              glVertex2f(-1.88,-3.57);
              glVertex2f(-1.9,-3.6);

    glEnd();

    //Runway light_6
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(-1.2,-3.7);
              glVertex2f(-1.1,-3.7);
              glVertex2f(-1.1,-3.6);
              glVertex2f(-1.12,-3.57);
              glVertex2f(-1.18,-3.57);
              glVertex2f(-1.2,-3.6);

    glEnd();

    //Runway light_7
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(-0.5,-3.7);
              glVertex2f(-0.4,-3.7);
              glVertex2f(-0.4,-3.6);
              glVertex2f(-0.42,-3.57);
              glVertex2f(-0.48,-3.57);
              glVertex2f(-0.5,-3.6);

    glEnd();

    //Runway light_8
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(0.2,-3.7);
              glVertex2f(0.3,-3.7);
              glVertex2f(0.3,-3.6);
              glVertex2f(0.28,-3.57);
              glVertex2f(0.22,-3.57);
              glVertex2f(0.2,-3.6);

    glEnd();


    //Runway light_9
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(0.9,-3.7);
              glVertex2f(1,-3.7);
              glVertex2f(1,-3.6);
              glVertex2f(0.98,-3.57);
              glVertex2f(0.92,-3.57);
              glVertex2f(0.9,-3.6);

    glEnd();


    //Runway light_10
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(1.6,-3.7);
              glVertex2f(1.7,-3.7);
              glVertex2f(1.7,-3.6);
              glVertex2f(1.68,-3.57);
              glVertex2f(1.62,-3.57);
              glVertex2f(1.6,-3.6);

    glEnd();


    //Runway light_11
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(2.3,-3.7);
              glVertex2f(2.4,-3.7);
              glVertex2f(2.4,-3.6);
              glVertex2f(2.38,-3.57);
              glVertex2f(2.32,-3.57);
              glVertex2f(2.3,-3.6);

    glEnd();


    //Runway light_12
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(3,-3.7);
              glVertex2f(3.1,-3.7);
              glVertex2f(3.1,-3.6);
              glVertex2f(3.08,-3.57);
              glVertex2f(3.02,-3.57);
              glVertex2f(3,-3.6);

    glEnd();


    //Runway light_13
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(3.7,-3.7);
              glVertex2f(3.8,-3.7);
              glVertex2f(3.8,-3.6);
              glVertex2f(3.78,-3.57);
              glVertex2f(3.72,-3.57);
              glVertex2f(3.7,-3.6);

    glEnd();


    //Runway light_14
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(4.4,-3.7);
              glVertex2f(4.5,-3.7);
              glVertex2f(4.5,-3.6);
              glVertex2f(4.48,-3.57);
              glVertex2f(4.42,-3.57);
              glVertex2f(4.4,-3.6);

    glEnd();




/////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////



///////////////////////////////////////////////////

    glutTimerFunc(10000,night_demo,0);

	glFlush();  // Render now
}


void evening_demo(int val)
{
    glutDisplayFunc(evening);
}




void morning() {

    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;


	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	//gluOrtho2D(-5,5,-4,4); //(L,R,B,T)

    // Full BG
    glBegin(GL_QUADS);
              glColor3ub(77, 195, 255);
              glVertex2f(-9,-4);
              glVertex2f(5,-4);
              glVertex2f(5,4);
              glVertex2f(-9,4);
    glEnd();

    // Sky
    glBegin(GL_QUADS);
              glColor3ub(26, 198, 255);
              glVertex2f(-5,0.1);
              glVertex2f(5,0.1);
              glVertex2f(5,5);
              glVertex2f(-5,5);
    glEnd();

    // low line
    glBegin(GL_QUADS);
              glColor3ub(46, 184, 46);
              glVertex2f(-5,-4);
              glVertex2f(5,-4);
              glVertex2f(5,-3.78);
              glVertex2f(-5,-3.78);
    glEnd();


////////////////////////////////////////////////// Md. Ibrahim
//morning sun

glPushMatrix();
glTranslatef(0,position_7,0);
GLfloat x26=-4.4f; GLfloat y26=0.6f; GLfloat radius_26 =0.26f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(255, 204, 179);
		glVertex2f(x26, y26);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x26 + (radius_26 * cos(i *  twicePi / triangleAmount)),
			    y26 + (radius_26 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glPopMatrix();


///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////



//Rozina apu
//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////


    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
    GLfloat a7=-4.45f;  GLfloat b7=3.9f; GLfloat radius7 =0.22f;//cloud 1
    int i7;
    int triangleAmount7 = 20;
    GLfloat twicePi7 = 2.0f * PI;
    glColor3ub(242,242,242);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(a7, b7); // center of circle
		for(i7 = 0; i7 <= triangleAmount7;i7++) {
			glVertex2f(
		            a7 + (radius7 * cos(i7*  twicePi7/ triangleAmount7)),
			    b7 + (radius7* sin(i7 * twicePi7/ triangleAmount7))
			);
		}
	glEnd();

      GLfloat a8=-4.1f;  GLfloat b8=3.9f; GLfloat radius8 =0.22f;//sky 1st er 2nd gol
    int i8;
    int triangleAmount8 = 20;
    GLfloat twicePi8 = 2.0f * PI;
    glColor3ub(242,242,242);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(a8, b8); // center of circle
		for(i8 = 0; i8 <= triangleAmount8;i8++) {
			glVertex2f(
		            a8 + (radius8 * cos(i8*  twicePi8/ triangleAmount8)),
			    b8 + (radius8* sin(i8 * twicePi8/ triangleAmount8))
			);
		}
	glEnd();

   GLfloat a9=-4.25f;  GLfloat b9=4.15f; GLfloat radius9 =0.23f;
    int i9;
    int triangleAmount9 = 20;
    GLfloat twicePi9 = 2.0f * PI;
    glColor3ub(242,242,242);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(a9, b9); // center of circle
		for(i9 = 0; i9 <= triangleAmount9;i9++) {
			glVertex2f(
		            a9 + (radius9 * cos(i9*  twicePi9/ triangleAmount9)),
			    b9 + (radius9* sin(i9 * twicePi9/ triangleAmount9))
			);
		}
	glEnd();  //end of cloud 1




    GLfloat a10=-2.8f;  GLfloat b10=4.2f; GLfloat radius10 =0.21f;//cloud2
    int i10;
    int triangleAmount10= 20;
    GLfloat twicePi10 = 2.0f * PI;
    glColor3ub(242,242,242);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(a10, b10); // center of circle
		for(i10 = 0; i10 <= triangleAmount10;i10++) {
			glVertex2f(
		            a10 + (radius10 * cos(i10*  twicePi10/ triangleAmount10)),
			    b10 + (radius10* sin(i10 * twicePi10/ triangleAmount10))
			);
		}
	glEnd();


	 GLfloat a11=-2.2f;  GLfloat b11=4.2f; GLfloat radius11 =0.21f;//cloud2
    int i11;
    int triangleAmount11= 20;
    GLfloat twicePi11 = 2.0f * PI;
    glColor3ub(242,242,242);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(a11, b11); // center of circle
		for(i11 = 0; i11 <= triangleAmount11;i11++) {
			glVertex2f(
		            a11 + (radius11 * cos(i11*  twicePi11/ triangleAmount11)),
			    b11 + (radius11* sin(i11 * twicePi11/ triangleAmount11))
			);
		}
	glEnd();


	 GLfloat a12=-2.6f;  GLfloat b12=4.4f; GLfloat radius12 =0.21f;//cloud2
    int i12;
    int triangleAmount12= 20;
    GLfloat twicePi12 = 2.0f * PI;
    glColor3ub(242,242,242);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(a12, b12); // center of circle
		for(i12 = 0; i12 <= triangleAmount12;i12++) {
			glVertex2f(
		            a12 + (radius12 * cos(i12*  twicePi12/ triangleAmount12)),
			    b12 + (radius12* sin(i12 * twicePi12/ triangleAmount12))
			);
		}
	glEnd();


	 GLfloat a13=-2.4f;  GLfloat b13=4.5f; GLfloat radius13 =0.21f;//cloud2
    int i13;
    int triangleAmount13= 20;
    GLfloat twicePi13 = 2.0f * PI;
    glColor3ub(242,242,242);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(a13, b13); // center of circle
		for(i13= 0; i13 <= triangleAmount13;i13++) {
			glVertex2f(
		            a13+ (radius13 * cos(i13*  twicePi13/ triangleAmount13)),
			    b13 + (radius13* sin(i13 * twicePi13/ triangleAmount13))
			);
		}
	glEnd();



	 glBegin(GL_TRIANGLES); //CLOUD 2 ER TRAINGLE
              glColor3ub(242,242,242);
              glVertex2f(-2.8,4.0);
              glVertex2f(-2.29,4.0);
              glVertex2f(-2.45,4.5);

               glEnd();//end of cloud 2
                glPopMatrix();


             glPushMatrix();
             glTranslatef(position2,position2, 0.0f);
             glBegin(GL_POLYGON);
             glColor3ub(0,0,0);
             glVertex2f(-3.77f,3.64f);// 1st bird
             glVertex2f(-3.70f,3.63f);
             glVertex2f(-3.70f,3.63f);
             glVertex2f(-3.79f,3.62f);
             glVertex2f(-3.79f,3.62f);
             glVertex2f(-3.79f,3.62f);
             glVertex2f(-3.78f,3.61f);
             glVertex2f(-3.78f,3.60f);
             glVertex2f(-3.77f,3.62f);
             glVertex2f(-3.76f,3.62f);
             glVertex2f(-3.76f,3.62f);
             glVertex2f(-3.76f,3.63f);
             glVertex2f(-3.77f,3.64f);
             glEnd();

             glBegin(GL_POLYGON);
             glColor3ub(0,0,0);
             glVertex2f(-3.25f,3.64f);// 2nd bird
             glVertex2f(-3.31f,3.63f);
             glVertex2f(-3.31f,3.63f);
             glVertex2f(-3.32f,3.62f);
             glVertex2f(-3.32f,3.62f);
             glVertex2f(-3.32f,3.62f);
             glVertex2f(-3.29f,3.61f);
             glVertex2f(-3.29f,3.60f);
             glVertex2f(-3.29f,3.62f);
              glVertex2f(-3.29f,3.62f);
             glVertex2f(-3.29f,3.62f);
             glVertex2f(-3.29f,3.63f);
             glVertex2f(-3.25f,3.64f);
             glEnd();

            glBegin(GL_POLYGON);
            glColor3ub(0,0,0);
            glVertex2f(-4.22f,3.64f);// 3rd bird
            glVertex2f(-4.32f,3.63f);
            glVertex2f(-4.32f,3.63f);
            glVertex2f(-4.33f,3.62f);
            glVertex2f(-4.33f,3.62f);
            glVertex2f(-4.33f,3.62f);
            glVertex2f(-4.30f,3.61f);
            glVertex2f(-4.30f,3.60f);
            glVertex2f(-4.30f,3.62f);
            glVertex2f(-4.29f,3.62f);
            glVertex2f(-4.30f,3.62f);
            glVertex2f(-4.32f,3.63f);
            glVertex2f(-4.22f,3.64f);
             glEnd();

            glBegin(GL_POLYGON);
            glColor3ub(0,0,0);
            glVertex2f(-3.29f,3.44f);// 4th
            glVertex2f(-3.32f,3.43f);
            glVertex2f(-3.33f,3.43f);
            glVertex2f(-3.32f,3.42f);
            glVertex2f(-3.313f,3.422f);
            glVertex2f(-3.315f,3.414f);
            glVertex2f(-3.31f,3.40f);
            glVertex2f(-3.308f,3.417f);
            glVertex2f(-3.295f,3.414f);
            glVertex2f(-3.29f,3.422f);
             glVertex2f(-3.28f,3.43f);
             glVertex2f(-3.28f,3.431f);
            glVertex2f(-3.29f,3.43f);
            glEnd();

             glBegin(GL_POLYGON);
             glColor3ub(0,0,0);
             glVertex2f(-3.37f,4.517f);// 5th
             glVertex2f(-3.39f,4.505f);
             glVertex2f(-3.305f,4.497f);
             glVertex2f(-3.39f,4.4914f);
             glVertex2f(-3.39f,4.494f);
             glVertex2f(-3.39f,4.488f);
             glVertex2f(-3.385f,4.488f);
             glVertex2f(-3.38f,4.48f);
             glVertex2f(-3.37f,4.494f);
             glVertex2f(-3.36f,4.4914f);
             glVertex2f(-3.366f,4.5f);
             glVertex2f(-3.363f,4.511f);
             glVertex2f(-3.37f,4.511f);

              glEnd();
             glPopMatrix();




////////////////////////////////////////////////// sobita plane
                                                //up plane 1st
    /*glPushMatrix();
   glTranslatef(positionr,0,0);
    glBegin(GL_POLYGON);
              glColor3ub(204, 255, 255);

               glVertex2f(2.66,4.32);
              glVertex2f(2.73,4.19);
              glVertex2f(2.85,4.1);
              glVertex2f(2.97,4.07);
              glVertex2f(3.27,4.04);
              glVertex2f(3.71,4.06);

              glVertex2f(4.04,4.15);
              glVertex2f(4.09,4.19);
             glVertex2f(4.09,4.24);
             glVertex2f(4.08,4.28);
             glVertex2f(3.37,4.45);
             glVertex2f(3.15,4.49);
             glVertex2f(3.02,4.51);
             glVertex2f(2.87,4.51);
             glVertex2f(2.74,4.46);
             glVertex2f(2.67,4.37);

    glEnd();

                                             //up plane wing
      glBegin(GL_QUADS);
              glColor3ub(255, 71, 26);
              glVertex2f(3.8,4.34);
             glVertex2f(3.97,4.3);
             glVertex2f(3.97,4.59);
             glVertex2f(3.88,4.57);

            glEnd();
                                            //up plane wing side
       glBegin(GL_POLYGON);
              glColor3ub(255, 71, 26);
              glVertex2f(3.76,3.99);
               glVertex2f(3.42,4.19);
               glVertex2f(3.39,4.21);
               glVertex2f(3.36,4.22);
               glVertex2f(3.3,4.22);
               glVertex2f(3.21,4.22);
               glVertex2f(3.17,4.21);
               glVertex2f(3.15,4.2);
               glVertex2f(3.15,4.18);
               glVertex2f(3.18,4.16);
               glVertex2f(3.21,4.15);
            glEnd();

                                            //side wing up plane
            glBegin(GL_POLYGON);
              glColor3ub(255, 71, 26);
             glVertex2f(3.88,4.17);
             glVertex2f(3.92,4.13);
             glVertex2f(3.99,4.12);
             glVertex2f(4.05,4.12);
             glVertex2f(4.1,4.13);
             glVertex2f(4.14,4.14);
             glVertex2f(4.16,4.16);
             glVertex2f(4.13,4.18);
             glVertex2f(4.09,4.19);
             glVertex2f(4.04,4.2);
             glVertex2f(3.98,4.2);
             glVertex2f(3.92,4.19);


    glEnd();

                                          //up plane wheel
            glBegin(GL_POLYGON);
              glColor3ub(204, 255, 255);
             glVertex2f(3.45,4.05);
             glVertex2f(3.38,4.03);
             glVertex2f(3.37,3.98);
              glVertex2f(3.38,3.93);
             glVertex2f(3.43,3.9);
              glVertex2f(3.5,3.9);
             glVertex2f(3.55,3.93);
             glVertex2f(3.57,3.97);
             glVertex2f(3.54,4.02);
             glVertex2f(3.55,4.01);
             glEnd();
              glBegin(GL_POLYGON);
              glColor3ub(51, 10, 0);
             glVertex2f(3.42,3.93);
             glVertex2f(3.44,3.95);
             glVertex2f(3.44,3.99);
             glVertex2f(3.41,4.02);
             glVertex2f(3.39,3.99);
             glVertex2f(3.39,3.95);
             glEnd();


                                                 //up plane 2nd wheel
            glBegin(GL_POLYGON);
              glColor3ub(204, 255, 255);
             glVertex2f(3.2,4.05);
              glVertex2f(3.16,4.05);
             glVertex2f(3.14,4.02);
             glVertex2f(3.12,3.99);
             glVertex2f(3.14,3.94);
             glVertex2f(3.2,3.9);
             glVertex2f(3.26,3.91);
             glVertex2f(3.3,3.94);
             glVertex2f(3.32,3.98);
             glVertex2f(3.27,4.04);
              glEnd();

            glBegin(GL_POLYGON);
              glColor3ub(51, 10, 0);

             glVertex2f(3.18,3.93);
             glVertex2f(3.21,3.96);
             glVertex2f(3.21,3.99);
             glVertex2f(3.18,4.02);
             glVertex2f(3.15,3.99);
             glVertex2f(3.15,3.96);


    glEnd();

                                               //window up plane
     glBegin(GL_QUADS);
              glColor3ub(0, 92, 230);
             glVertex2f(2.67,4.37);
             glVertex2f(2.75,4.36);
             glVertex2f(2.8,4.42);
             glVertex2f(2.74,4.46);

            glEnd();

            glBegin(GL_QUADS);
              glColor3ub(0, 92, 230);

             glVertex2f(2.76,4.35);
             glVertex2f(2.84,4.33);
             glVertex2f(2.87,4.38);
             glVertex2f(2.81,4.41);

            glEnd();

            glBegin(GL_QUADS);
              glColor3ub(0, 92, 230);
             glVertex2f(3.05,4.25);
             glVertex2f(3.09,4.25);
             glVertex2f(3.09,4.33);
             glVertex2f(3.05,4.33);
            glEnd();

            glBegin(GL_QUADS);
              glColor3ub(0, 92, 230);
             glVertex2f(3.14,4.25);
             glVertex2f(3.18,4.25);
             glVertex2f(3.18,4.33);
             glVertex2f(3.14,4.33);
            glEnd();

             glBegin(GL_QUADS);
              glColor3ub(0, 92, 230);
             glVertex2f(3.23,4.25);
             glVertex2f(3.27,4.25);
             glVertex2f(3.27,4.33);
             glVertex2f(3.23,4.33);
            glEnd();

            glBegin(GL_QUADS);
              glColor3ub(0, 92, 230);
             glVertex2f(3.32,4.25);
             glVertex2f(3.36,4.25);
             glVertex2f(3.36,4.33);
             glVertex2f(3.32,4.33);
            glEnd();

             glBegin(GL_QUADS);
              glColor3ub(0, 92, 230);
             glVertex2f(3.41,4.25);
             glVertex2f(3.45,4.25);
             glVertex2f(3.45,4.33);
             glVertex2f(3.41,4.33);
            glEnd();

             glBegin(GL_QUADS);
              glColor3ub(0, 92, 230);
             glVertex2f(3.5,4.25);
             glVertex2f(3.54,4.25);
             glVertex2f(3.54,4.33);
             glVertex2f(3.5,4.33);
            glEnd();

             glBegin(GL_QUADS);
              glColor3ub(0, 92, 230);
             glVertex2f(3.59,4.25);
             glVertex2f(3.63,4.25);
             glVertex2f(3.63,4.33);
             glVertex2f(3.59,4.33);
            glEnd();

            glPopMatrix();*/



///////////////////////////////////////////////// 2nd spot light
///////////////////////////////////////////////// Md. Ibrahim

              glBegin(GL_QUADS); // 2nd spot light pillar
              glColor3ub(128, 128, 128);
              glVertex2f(3.5,0.1);
              glVertex2f(3.6,0.1);
              glVertex2f(3.6,2.6);
              glVertex2f(3.5,2.6);
              glEnd();


              glBegin(GL_TRIANGLES); // 2nd spot light_1
              glColor3ub(166, 166, 166);
              glVertex2f(3.2,2.5);
              glVertex2f(3.4,2.3);
              glVertex2f(3.5,2.6);
              glEnd();


              glBegin(GL_TRIANGLES); // 2nd spot light_2
              glColor3ub(166, 166, 166);
              glVertex2f(3.7,2.3);
              glVertex2f(3.9,2.5);
              glVertex2f(3.6,2.6);
              glEnd();


              /*glBegin(GL_QUADS); // 2nd spot light_Light
              glColor3ub(255, 255, 204);
              glVertex2f(3.2,2.5);
              glVertex2f(1.2,1.8);
              glVertex2f(2.6,0.4);
              glVertex2f(3.4,2.3);
              glEnd();

              glBegin(GL_QUADS); // 2nd spot light_Light_1
              glColor3ub(255, 255, 204);
              glVertex2f(3.7,2.3);
              glVertex2f(4.4,0.4);
              glVertex2f(5.5,2);
              glVertex2f(3.9,2.5);
              glEnd();*/




//////////////////////////////////////////////////
//////////////////////////////////////////////////








         //background  building
              glBegin(GL_QUADS);
              glColor3ub(179,204,230);
              glVertex2f(-1.4,0.1);
              glVertex2f(-0.9,0.1);
              glVertex2f(-0.9,1.9);
              glVertex2f(-1.4,1.9);
               glEnd();

              glBegin(GL_QUADS);
              glColor3ub(194,214,214);
              glVertex2f(-2.3,0.1);
              glVertex2f(-1.56,0.1);
              glVertex2f(-1.56,2.2);
              glVertex2f(-2.3,2.2);
               glEnd();
              glBegin(GL_QUADS);
              glColor3ub(194,214,214);
              glVertex2f(-2.2,2.2);
              glVertex2f(-1.66,2.2);
              glVertex2f(-1.66,2.4);
              glVertex2f(-2.2,2.4);
               glEnd();

                 glBegin(GL_QUADS);
              glColor3ub(194,214,214);
              glVertex2f(-2.1,2.4);
              glVertex2f(-1.76,2.4);
              glVertex2f(-1.76,2.55);
              glVertex2f(-2.1,2.55);
               glEnd();


                 glBegin(GL_QUADS);
              glColor3ub(194,214,214);
              glVertex2f(-3.8,0.1);
              glVertex2f(-3.5,0.1);
              glVertex2f(-3.5,1.9);
              glVertex2f(-3.8,1.9);
               glEnd();

              glBegin(GL_QUADS);
              glColor3ub(194,214,214);
              glVertex2f(-3.0,0.1);
              glVertex2f(-2.6,0.1);
              glVertex2f(-2.6,1.9);
              glVertex2f(-3.0,1.9);
               glEnd();

                glBegin(GL_QUADS);
              glColor3ub(194,214,214);
              glVertex2f(-5.0,0.1);
              glVertex2f(-4.5,0.1);
              glVertex2f(-4.5,2.9);
              glVertex2f(-5.0,2.9);
               glEnd();

               /* glBegin(GL_QUADS); //right side er background building
              glColor3ub(194,214,214);
              glVertex2f(4.6,0.1);
              glVertex2f(5.0,0.1);
              glVertex2f(5.0,2.9);
              glVertex2f(4.6,2.6);
               glEnd();*/







              glBegin(GL_QUADS);//1st quad main building
              glColor3ub(230, 230, 230);
              glVertex2f(-0.9,0.1);
              glVertex2f(4.4,0.1);
              glVertex2f(4.4,1.6);
              glVertex2f(-0.9,1.6);
              glEnd();



              glBegin(GL_QUADS);//  window1
              //glColor3ub(0,0,179);
                glColor3ub(166,166,166);
              glVertex2f(1.2,0.1);
              glVertex2f(2.0,0.1);
              glVertex2f(2.0,1.4);
              glVertex2f(1.2,1.4);
              glEnd();



                glBegin(GL_QUADS);//  window1 quad
              //glColor3ub(0,0,179);
                glColor3ub(0,0,102);
              glVertex2f(1.23,0.1);
              glVertex2f(1.97,0.1);
              glVertex2f(1.97,1.36);
              glVertex2f(1.23,1.36);
              glEnd();

             glBegin(GL_QUADS);//  window1 quad vertical
             glColor3ub(166, 166, 166);
              glVertex2f(1.23,0.81);
              glVertex2f(1.97,0.81);
              glVertex2f(1.97,0.84);
              glVertex2f(1.23,0.84);
              glEnd();



              glBegin(GL_QUADS);//  window layer
              glColor3ub(140, 140, 140);
              glVertex2f(1.48,0.1);
              glVertex2f(1.5,0.1);
              glVertex2f(1.5,1.36);
              glVertex2f(1.48,1.36);
              glEnd();


              glBegin(GL_QUADS);// window layer2
              glColor3ub(140, 140, 140);
              glVertex2f(1.72,0.1);
              glVertex2f(1.74,0.1);
              glVertex2f(1.74,1.36);
              glVertex2f(1.72,1.36);
              glEnd();




                glBegin(GL_QUADS);//  window2 quad $

                glColor3ub(166,166,166);
              glVertex2f(2.3,0.2);
              glVertex2f(3.6,0.2);
              glVertex2f(3.6,1.4);
              glVertex2f(2.3,1.4);
              glEnd();


                glBegin(GL_QUADS);//  window2 quad
              //glColor3ub(0,0,179);
                glColor3ub(0, 0, 102);
              glVertex2f(2.32,0.24);
              glVertex2f(3.58,0.24);
              glVertex2f(3.58,1.36);
              glVertex2f(2.32,1.36);
              glEnd();

                 glBegin(GL_QUADS);// layer verti
              //glColor3ub(0,0,179);
                glColor3ub(166, 166, 166);
              glVertex2f(2.32,0.98);
              glVertex2f(3.58,0.98);
              glVertex2f(3.58,1.01);
              glVertex2f(2.32,1.01);
              glEnd();



                 glBegin(GL_QUADS);// layer verti
              glColor3ub(166, 166, 166);
              glVertex2f(2.93,0.24);
              glVertex2f(2.95,0.24);
              glVertex2f(2.95,1.36);
              glVertex2f(2.93,1.36);
              glEnd();


              glBegin(GL_QUADS);// layer horizontal
              glColor3ub(166, 166, 166);
              glVertex2f(2.62,0.24);
              glVertex2f(2.64,0.24);
              glVertex2f(2.64,1.0);
              glVertex2f(2.62,1.0);
              glEnd();

              glBegin(GL_QUADS);// layer horizontal
              glColor3ub(166, 166, 166);
              glVertex2f(3.28,0.24);
              glVertex2f(3.30,0.24);
              glVertex2f(3.30,1.0);
              glVertex2f(3.28,1.0);
              glEnd();






              glBegin(GL_QUADS);//  window3
              glColor3ub(166,166,166);
              glVertex2f(3.8,0.1);
              glVertex2f(4.35,0.1);
              glVertex2f(4.35,1.4);
              glVertex2f(3.8,1.4);
              glEnd();



              glBegin(GL_QUADS);//  window3main
              glColor3ub(0, 0, 102);
                  //glColor3ub(0, 0, 255);

              glVertex2f(3.82,0.1);
              glVertex2f(4.33,0.1);
              glVertex2f(4.33,1.36);
              glVertex2f(3.82,1.36);
              glEnd();




              glBegin(GL_QUADS);//  window3 layer
              glColor3ub(166,166,166);
              glVertex2f(4.09,0.1);
              glVertex2f(4.11,0.1);
              glVertex2f(4.11,1.4);
              glVertex2f(4.09,1.4);
              glEnd();

              glBegin(GL_QUADS);//1st quad er vitor janala
              glColor3ub(0, 0, 102);
              glVertex2f(-0.8,0.2);
              glVertex2f(1.0,0.2);
              glVertex2f(1.0,1.4);
              glVertex2f(-0.8,1.4);
              glEnd();

              glBegin(GL_QUADS);//1st quad er vitor janalar  bottom layer
              glColor3ub(140,140,140);
              glVertex2f(-0.8,0.2);
              glVertex2f(1.0,0.2);
              glVertex2f(1.0,0.25);
              glVertex2f(-0.8,0.25);
              glEnd();

              glBegin(GL_QUADS);//1st quad er vitor janalar  left  layer
              glColor3ub(140,140,140);
              glVertex2f(-0.8,0.2);
              glVertex2f(-0.77,0.2);
              glVertex2f(-0.77,1.4);
              glVertex2f(-0.8,1.4);
              glEnd();


              glBegin(GL_QUADS);//1st quad er vitor janalar  uporer  layer
              //glColor3ub(255,255,255);
                glColor3ub(140,140,140);
              glVertex2f(-0.8,1.36);
              glVertex2f(1.0,1.36);
              glVertex2f(1.0,1.4);
              glVertex2f(-0.8,1.4);
              glEnd();


             glBegin(GL_QUADS);//1st quad er vitor janala right layer

              glColor3ub(140,140,140);
              glVertex2f(0.97,0.2);
              glVertex2f(1.0,0.2);
              glVertex2f(1.0,1.4);
              glVertex2f(0.97,1.4);
              glEnd();


             glBegin(GL_QUADS);//1st quad er vitor vertical layer
              //glColor3ub(255,255,255);
               glColor3ub(140,140,140);
              glVertex2f(-0.77,0.95);
              glVertex2f(0.97,0.95);
              glVertex2f(0.97,0.99);
              glVertex2f(-0.77,0.99);
              glEnd();



                glBegin(GL_QUADS);//1st quad er vitor vertical layer2
              //glColor3ub(255,255,255);
               glColor3ub(140,140,140);
              glVertex2f(-0.77,0.55);
              glVertex2f(0.97,0.55);
              glVertex2f(0.97,0.58);
              glVertex2f(-0.77,0.58);
              glEnd();




             glBegin(GL_QUADS);//1st quad er vitor janala vitorer right layer

              glColor3ub(140,140,140);
              glVertex2f(0.71,0.22);
              glVertex2f(0.73,0.22);
              glVertex2f(0.73,1.37);
              glVertex2f(0.71,1.37);
              glEnd();


             glBegin(GL_QUADS);//1st quad er vitor janala vitorer right layer

              glColor3ub(140,140,140);
              glVertex2f(0.46,0.22);
              glVertex2f(0.48,0.22);
              glVertex2f(0.48,1.37);
              glVertex2f(0.46,1.37);
              glEnd();


             glBegin(GL_QUADS);//1st quad er vitor janala vitorer right layer

              glColor3ub(140,140,140);
              glVertex2f(0.15,0.22);
              glVertex2f(0.17,0.22);
              glVertex2f(0.17,1.37);
              glVertex2f(0.15,1.37);
              glEnd();




             glBegin(GL_QUADS);//1st quad er vitor janala vitorer right layer

              glColor3ub(140,140,140);
              glVertex2f(-0.18,0.22);
              glVertex2f(-0.16,0.22);
              glVertex2f(-0.16,1.37);
              glVertex2f(-0.18,1.37);
              glEnd();



             glBegin(GL_QUADS);//1st quad er vitor janala vitorer right layer

              glColor3ub(140,140,140);
              glVertex2f(-0.5,0.22);
              glVertex2f(-0.48,0.22);
              glVertex2f(-0.48,1.37);
              glVertex2f(-0.5,1.37);
              glEnd();







               glBegin(GL_QUADS);//1st quad er uporer layer
              glColor3ub(166, 166, 166);
              glVertex2f(-1.0,1.6);
              glVertex2f(4.45,1.6);
              glVertex2f(4.45,1.7);
              glVertex2f(-1.0,1.7);
              glEnd();

              glBegin(GL_QUADS);//2nd quad
              glColor3ub(255, 255, 255);
              glVertex2f(-0.8,1.7);
              glVertex2f(1.0,1.7);
              glVertex2f(1.0,2.3);
              glVertex2f(-0.8,2.3);
              glEnd();



               glBegin(GL_QUADS);//2nd quad er window
              glColor3ub(153, 153, 153);
              glVertex2f(-0.7,1.78);
              glVertex2f(0.9,1.78);
              glVertex2f(0.9,2.24);
              glVertex2f(-0.7,2.24);
              glEnd();


              glBegin(GL_QUADS);//2nd quad er window
              glColor3ub(0, 0, 153);
              glVertex2f(-0.68,1.82);
              glVertex2f(0.87,1.82);
              glVertex2f(0.87,2.2);
              glVertex2f(-0.68,2.2);
              glEnd();



              glBegin(GL_QUADS);//2nd quad er window layer
              glColor3ub(153, 153, 153);
              glVertex2f(-0.44,1.78);
              glVertex2f(-0.47,1.78);
              glVertex2f(-0.47,2.24);
              glVertex2f(-0.44,2.24);
              glEnd();



              glBegin(GL_QUADS);//2nd quad er window layer
              glColor3ub(153, 153, 153);
              glVertex2f(-0.21,1.78);
              glVertex2f(-0.18,1.78);
              glVertex2f(-0.18,2.24);
              glVertex2f(-0.21,2.24);
              glEnd();



              glBegin(GL_QUADS);//2nd quad er window layer
              glColor3ub(153, 153, 153);
              glVertex2f(0.03,1.78);
              glVertex2f(0.06,1.78);
              glVertex2f(0.06,2.24);
              glVertex2f(0.03,2.24);
              glEnd();


               glBegin(GL_QUADS);//2nd quad er window layer
              glColor3ub(153, 153, 153);
              glVertex2f(0.26,1.78);
              glVertex2f(0.28,1.78);
              glVertex2f(0.28,2.24);
              glVertex2f(0.26,2.24);
              glEnd();


              glBegin(GL_QUADS);//2nd quad er window layer
              glColor3ub(153, 153, 153);
              glVertex2f(0.48,1.78);
              glVertex2f(0.50,1.78);
              glVertex2f(0.50,2.24);
              glVertex2f(0.48,2.24);
              glEnd();

              glBegin(GL_QUADS);//2nd quad er window layer
              glColor3ub(153, 153, 153);
              glVertex2f(0.68,1.78);
              glVertex2f(0.70,1.78);
              glVertex2f(0.70,2.24);
              glVertex2f(0.68,2.24);
              glEnd();




              glBegin(GL_QUADS);//2nd quad er uporer layer
              glColor3ub(166, 166, 166);
              glVertex2f(-0.85,2.3);
              glVertex2f(1.05,2.3);
              glVertex2f(1.05,2.4);
              glVertex2f(-0.85,2.4);
              glEnd();





             glBegin(GL_QUADS);//3rd side quad
              glColor3ub(242, 242, 242);
              glVertex2f(1.0,1.7);
              glVertex2f(3.8,1.7);
              glVertex2f(3.8,2.1);
              glVertex2f(1.0,2.1);
               glEnd();




             glBegin(GL_QUADS);//3rd side quad vertical lines
              glColor3ub(61, 61, 41);
              glVertex2f(1.12,1.7);
              glVertex2f(1.15,1.7);
              glVertex2f(1.15,2.02);
              glVertex2f(1.12,2.02);
               glEnd();


                   glBegin(GL_QUADS);//3rd side quad vertical lines
              glColor3ub(61, 61, 41);
              glVertex2f(1.41,1.7);
              glVertex2f(1.44,1.7);
              glVertex2f(1.44,2.02);
              glVertex2f(1.41,2.02);
               glEnd();





             glBegin(GL_QUADS);//3rd side quad upper border
              glColor3ub(61, 61, 41);
              glVertex2f(1.0,1.98);
              glVertex2f(3.8,1.98);
              glVertex2f(3.8,2.02);
              glVertex2f(1.0,2.02);
               glEnd();

                    glBegin(GL_QUADS);//3rd side quad vertical lines
              glColor3ub(61, 61, 41);
              glVertex2f(1.70,1.7);
              glVertex2f(1.73,1.7);
              glVertex2f(1.73,2.02);
              glVertex2f(1.70,2.02);
               glEnd();



                    glBegin(GL_QUADS);//3rd side quad vertical lines
              glColor3ub(61, 61, 41);
              glVertex2f(1.91,1.7);
              glVertex2f(1.94,1.7);
              glVertex2f(1.94,2.02);
              glVertex2f(1.91,2.02);
               glEnd();


                    glBegin(GL_QUADS);//3rd side quad vertical lines
              glColor3ub(61, 61, 41);
              glVertex2f(2.11,1.7);
              glVertex2f(2.14,1.7);
              glVertex2f(2.14,2.02);
              glVertex2f(2.11,2.02);
               glEnd();



             glBegin(GL_QUADS);//3rd side quad vertical lines
              glColor3ub(61, 61, 41);
              glVertex2f(2.32,1.7);
              glVertex2f(2.35,1.7);
              glVertex2f(2.35,2.02);
              glVertex2f(2.32,2.02);
               glEnd();



             glBegin(GL_QUADS);//3rd side quad vertical lines
              glColor3ub(61, 61, 41);
              glVertex2f(2.53,1.7);
              glVertex2f(2.56,1.7);
              glVertex2f(2.56,2.02);
              glVertex2f(2.53,2.02);
               glEnd();


             glBegin(GL_QUADS);//3rd side quad vertical lines
              glColor3ub(61, 61, 41);
              glVertex2f(2.73,1.7);
              glVertex2f(2.76,1.7);
              glVertex2f(2.76,2.02);
              glVertex2f(2.73,2.02);
               glEnd();


                glBegin(GL_QUADS);//3rd side quad vertical lines
              glColor3ub(61, 61, 41);
              glVertex2f(2.93,1.7);
              glVertex2f(2.96,1.7);
              glVertex2f(2.96,2.02);
              glVertex2f(2.93,2.02);
               glEnd();

              glBegin(GL_QUADS);//3rd side quad vertical lines
              glColor3ub(61, 61, 41);
              glVertex2f(3.11,1.7);
              glVertex2f(3.14,1.7);
              glVertex2f(3.14,2.02);
              glVertex2f(3.11,2.02);
               glEnd();



              glBegin(GL_QUADS);//3rd side quad vertical lines
              glColor3ub(61, 61, 41);
              glVertex2f(3.31,1.7);
              glVertex2f(3.34,1.7);
              glVertex2f(3.34,2.02);
              glVertex2f(3.31,2.02);
               glEnd();


              glBegin(GL_QUADS);//3rd side quad vertical lines
              glColor3ub(61, 61, 41);
              glVertex2f(3.48,1.7);
              glVertex2f(3.52,1.7);
              glVertex2f(3.52,2.02);
              glVertex2f(3.48,2.02);
               glEnd();


              glBegin(GL_QUADS);//3rd side quad vertical lines
              glColor3ub(61, 61, 41);
              glVertex2f(3.71,1.7);
              glVertex2f(3.74,1.7);
              glVertex2f(3.74,2.02);
              glVertex2f(3.71,2.02);
               glEnd();


               glBegin(GL_QUADS);//4th quad
              glColor3ub(242, 242,242);
              glVertex2f(-0.4,2.4);
              glVertex2f(0.3,2.4);
              glVertex2f(0.3,3.2);
              glVertex2f(-0.4,3.2);
              glEnd();

              glBegin(GL_QUADS);//4th quad er layer
              glColor3ub(140, 140, 140);
              glVertex2f(-0.42,3.2);
              glVertex2f(0.32,3.2);
              glVertex2f(0.32,3.25);
              glVertex2f(-0.42,3.25);
              glEnd();

               glBegin(GL_QUADS);//5th quad
              glColor3ub(0, 0, 153);
              glVertex2f(-0.4,3.25);
              glVertex2f(0.3,3.25);
              glVertex2f(0.48,4.0);
              glVertex2f(-0.6,4.0);
              glEnd();

                glBegin(GL_QUADS);//5th quad layer
              glColor3ub(115, 115, 115);
              glVertex2f(-0.6,4.0);
              glVertex2f(0.48,4.0);
              glVertex2f(0.48,4.05);
              glVertex2f(-0.6,4.05);
              glEnd();

                glBegin(GL_QUADS);//5th quad layer
              glColor3ub(230, 230, 230);
              glVertex2f(-0.6,4.05);
              glVertex2f(-0.27,4.25);
              glVertex2f(0.17,4.25);
              glVertex2f(0.48,4.05);
              glEnd();


/////////////////////////////////////////////////////////////// 1st spot light
/////////////////////////////////////////////////////////////// Md. Ibrahim
////////// spot light of airport


              glBegin(GL_QUADS); // 1st spot light pillar
              glColor3ub(128, 128, 128);
              glVertex2f(-3.6,0.1);
              glVertex2f(-3.45,0.1);
              glVertex2f(-3.45,2.6);
              glVertex2f(-3.6,2.6);
              glEnd();


              glBegin(GL_TRIANGLES); // 1st spot light_1
              glColor3ub(166, 166, 166);
              glVertex2f(-4,2.4);
              glVertex2f(-3.7,2.2);
              glVertex2f(-3.6,2.6);
              glEnd();


              glBegin(GL_TRIANGLES); // 1st spot light_2
              glColor3ub(166, 166, 166);
              glVertex2f(-3.35,2.2);
              glVertex2f(-3.1,2.4);
              glVertex2f(-3.45,2.6);
              glEnd();


              /*glBegin(GL_QUADS); // 1st spot light_Light
              glColor3ub(255, 255, 204);
              glVertex2f(-5.6,1.6);
              glVertex2f(-4,0.5);
              glVertex2f(-3.7,2.2);
              glVertex2f(-4,2.4);
              glEnd();

              glBegin(GL_QUADS); // 1st spot light_Light_1
              glColor3ub(255, 255, 204);
              glVertex2f(-3.35,2.2);
              glVertex2f(-3,0.5);
              glVertex2f(-1.4,1.6);
              glVertex2f(-3.1,2.4);
              glEnd();*/











///////////////////////////////////////////////////////////////


	          glBegin(GL_QUADS); //gac er stick
              glColor3ub(102,51,0);
              glVertex2f(-1.4,0.1);
              glVertex2f(-1.3,0.1);
              glVertex2f(-1.3,0.95);
              glVertex2f(-1.4,0.95);
               glEnd();

    GLfloat a=-1.32f;  GLfloat b=1.1f; GLfloat radius =0.4f;//start of tree 1st
    int i;
    //int triangleAmount = 20;
   // GLfloat twicePi = 2.0f * PI;
    glColor3ub(0,102,0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();//end sun




              glBegin(GL_QUADS); //2nd tree
              glColor3ub(102,51,0);
              glVertex2f(-1.9,0.1);
              glVertex2f(-1.8,0.1);
              glVertex2f(-1.8,0.95);
              glVertex2f(-1.9,0.95);
               glEnd();

    GLfloat a6=-1.85f;  GLfloat b6=1.1f; GLfloat radius6 =0.4f;//start of tree 1st
    int i6;
    int triangleAmount6 = 20;
    GLfloat twicePi6 = 2.0f * PI;
    glColor3ub(0,204,0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(a6, b6); // center of circle
		for(i6 = 0; i6 <= triangleAmount6;i6++) {
			glVertex2f(
		            a6 + (radius6 * cos(i6 *  twicePi6 / triangleAmount6)),
			    b6 + (radius6 * sin(i6 * twicePi6 / triangleAmount6))
			);
		}
	glEnd();


             glBegin(GL_QUADS); //3rd gac er stick
              glColor3ub(102,51,0);
              glVertex2f(-2.6,0.1);
              glVertex2f(-2.5,0.1);
              glVertex2f(-2.5,0.8);
              glVertex2f(-2.6,0.8);
               glEnd();

    GLfloat a1=-2.55f;  GLfloat b1=1.1f; GLfloat radius1 =0.4f;//start of tree 2nd
    int i1;
    int triangleAmount1 = 20;
    GLfloat twicePi1 = 2.0f * PI;
    glColor3ub(0,102,0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(a1, b1); // center of circle
		for(i1 = 0; i1 <= triangleAmount1;i1++) {
			glVertex2f(
		            a1 + (radius1 * cos(i1 *  twicePi1 / triangleAmount1)),
			    b1 + (radius1 * sin(i1 * twicePi1 / triangleAmount1))
			);
		}
	glEnd();//end sun


	   glBegin(GL_QUADS); //4th gac er stick
              glColor3ub(102,51,0);
              glVertex2f(-3.3,0.1);
              glVertex2f(-3.2,0.1);
              glVertex2f(-3.2,0.95);
              glVertex2f(-3.3,0.95);
               glEnd();

    GLfloat a2=-3.3f;  GLfloat b2=1.1f; GLfloat radius2 =0.4f;//start of tree 2nd
    int i2;
    int triangleAmount2 = 20;
    GLfloat twicePi2 = 2.0f * PI;
    glColor3ub(0,204,0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(a2, b2); // center of circle
		for(i2 = 0; i2 <= triangleAmount1;i2++) {
			glVertex2f(
		            a2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    b2 + (radius2 * sin(i2 * twicePi2/ triangleAmount2))
			);
		}
	glEnd();//end 3rd tree

	  glBegin(GL_QUADS); //5th gac er stick
              glColor3ub(102,51,0);
              glVertex2f(-4.05,0.1);
              glVertex2f(-3.95,0.1);
              glVertex2f(-3.95,0.95);
              glVertex2f(-4.05,0.95);
               glEnd();

    GLfloat a3=-4.0f;  GLfloat b3=1.1f; GLfloat radius3 =0.4f;//start of tree 2nd
    int i3;
    int triangleAmount3 = 20;
    GLfloat twicePi3 = 2.0f * PI;
    glColor3ub(0,102,0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(a3, b3); // center of circle
		for(i3 = 0; i3 <= triangleAmount3;i3++) {
			glVertex2f(
		            a3 + (radius3 * cos(i3 *  twicePi3/ triangleAmount3)),
			    b3 + (radius3 * sin(i3 * twicePi3/ triangleAmount3))
			);
		}
	glEnd();//end 4th tree


	 glBegin(GL_QUADS); //6th gac er stick
              glColor3ub(102,51,0);
              glVertex2f(-4.8,0.1);
              glVertex2f(-4.7,0.1);
              glVertex2f(-4.7,0.95);
              glVertex2f(-4.8,0.95);
               glEnd();



  GLfloat a4=-4.75f;  GLfloat b4=1.1f; GLfloat radius4 =0.4f;//start of tree 2nd
    int i4;
    int triangleAmount4 = 20;
    GLfloat twicePi4 = 2.0f * PI;
    glColor3ub(0,204,0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(a4, b4); // center of circle
		for(i4 = 0; i4 <= triangleAmount4;i4++) {
			glVertex2f(
		            a4 + (radius4 * cos(i4 *  twicePi4/ triangleAmount4)),
			    b4 + (radius4 * sin(i4 * twicePi4/ triangleAmount4))
			);
		}
	glEnd();//end 4th tree*/




            glBegin(GL_LINES); //net under tree
              glColor3ub(51,26,0);
              glVertex2f(-5.0,0.2);
              glVertex2f(-0.9,0.2);
              glVertex2f(-5.0,0.25);
              glVertex2f(-0.9,0.25);
               glVertex2f(-5.0,0.3);
              glVertex2f(-0.9,0.3);
              glVertex2f(-5.0,0.35);
              glVertex2f(-0.9,0.35);
               glVertex2f(-5.0,0.4);
              glVertex2f(-0.9,0.4);
              glVertex2f(-5.0,0.45);
              glVertex2f(-0.9,0.45);
                glVertex2f(-5.0,0.5);
              glVertex2f(-0.9,0.5);
              glVertex2f(-5.0,0.55);
              glVertex2f(-0.9,0.55);
               glVertex2f(-5.0,0.6);
              glVertex2f(-0.9,0.6);
              glVertex2f(-4.9,0.2);   //here starts cross net
              glVertex2f(-4.9,0.6);
               glVertex2f(-4.85,0.2);   //here starts cross net
              glVertex2f(-4.85,0.6);
               glVertex2f(-4.8,0.2);   //here starts cross net
              glVertex2f(-4.8,0.6);
               glVertex2f(-4.75,0.2);   //here starts cross net
              glVertex2f(-4.75,0.6);
               glVertex2f(-4.7,0.2);   //here starts cross net
              glVertex2f(-4.7,0.6);
              glVertex2f(-4.65,0.2);   //here starts cross net
              glVertex2f(-4.65,0.6);
               glVertex2f(-4.6,0.2);   //here starts cross net
              glVertex2f(-4.6,0.6);
               glVertex2f(-4.55,0.2);   //here starts cross net
              glVertex2f(-4.55,0.6);
               glVertex2f(-4.5,0.2);   //here starts cross net
              glVertex2f(-4.5,0.6);
               glVertex2f(-4.45,0.2);   //here starts cross net
              glVertex2f(-4.45,0.6);
              glVertex2f(-4.4,0.2);   //here starts cross net
              glVertex2f(-4.4,0.6);
               glVertex2f(-4.35,0.2);   //here starts cross net
              glVertex2f(-4.35,0.6);
               glVertex2f(-4.3,0.2);   //here starts cross net
              glVertex2f(-4.3,0.6);
               glVertex2f(-4.25,0.2);   //here starts cross net
              glVertex2f(-4.25,0.6);
               glVertex2f(-4.2,0.2);   //here starts cross net
              glVertex2f(-4.2,0.6);
              glVertex2f(-4.15,0.2);   //here starts cross net
              glVertex2f(-4.15,0.6);
               glVertex2f(-4.1,0.2);   //here starts cross net
              glVertex2f(-4.1,0.6);
               glVertex2f(-4.05,0.2);   //here starts cross net
              glVertex2f(-4.05,0.6);
               glVertex2f(-3.95,0.2);   //here starts cross net
              glVertex2f(-3.95,0.6);
               glVertex2f(-3.9,0.2);
              glVertex2f(-3.9,0.6);
              glVertex2f(-3.85,0.2);
              glVertex2f(-3.85,0.6);
               glVertex2f(-3.8,0.2);
              glVertex2f(-3.8,0.6);
               glVertex2f(-3.75,0.2);
              glVertex2f(-3.75,0.6);

               glVertex2f(-3.7,0.2);   //here starts cross net
              glVertex2f(-3.7,0.6);
              glVertex2f(-3.65,0.2);   //here starts cross net
              glVertex2f(-3.65,0.6);
               glVertex2f(-3.6,0.2);   //here starts cross net
              glVertex2f(-3.6,0.6);
               glVertex2f(-3.55,0.2);   //here starts cross net
              glVertex2f(-3.55,0.6);
               glVertex2f(-3.5,0.2);   //here starts cross net
              glVertex2f(-3.5,0.6);
               glVertex2f(-3.45,0.2);   //here starts cross net
              glVertex2f(-3.45,0.6);
               glVertex2f(-3.4,0.2);   //here starts cross net
              glVertex2f(-3.4,0.6);
               glVertex2f(-3.35,0.2);   //here starts cross net
              glVertex2f(-3.35,0.6);
               glVertex2f(-3.3,0.2);   //here starts cross net
              glVertex2f(-3.3,0.6);
               glVertex2f(-3.25,0.2);   //here starts cross net
              glVertex2f(-3.25,0.6);
               glVertex2f(-3.2,0.2);   //here starts cross net
              glVertex2f(-3.2,0.6);
              glVertex2f(-3.15,0.2);   //here starts cross net
              glVertex2f(-3.15,0.6);
               glVertex2f(-3.1,0.2);   //here starts cross net
              glVertex2f(-3.1,0.6);
               glVertex2f(-3.05,0.2);   //here starts cross net
              glVertex2f(-3.05,0.6);

                 glVertex2f(-2.95,0.2);   //here starts cross net
              glVertex2f(-2.95,0.6);
               glVertex2f(-2.9,0.2);
              glVertex2f(-2.9,0.6);
              glVertex2f(-2.85,0.2);   //here starts cross net
              glVertex2f(-2.85,0.6);
               glVertex2f(-2.8,0.2);   //here starts cross net
              glVertex2f(-2.8,0.6);
               glVertex2f(-2.75,0.2);   //here starts cross net
              glVertex2f(-2.75,0.6);

               glVertex2f(-2.7,0.2);   //here starts cross net
              glVertex2f(-2.7,0.6);
              glVertex2f(-2.65,0.2);   //here starts cross net
              glVertex2f(-2.65,0.6);
               glVertex2f(-2.6,0.2);   //here starts cross net
              glVertex2f(-2.6,0.6);
               glVertex2f(-2.55,0.2);   //here starts cross net
              glVertex2f(-2.55,0.6);
               glVertex2f(-2.5,0.2);   //here starts cross net
              glVertex2f(-2.5,0.6);
               glVertex2f(-2.45,0.2);   //here starts cross net
              glVertex2f(-2.45,0.6);
               glVertex2f(-2.4,0.2);   //here starts cross net
              glVertex2f(-2.4,0.6);
               glVertex2f(-2.35,0.2);   //here starts cross net
              glVertex2f(-2.35,0.6);
               glVertex2f(-2.3,0.2);   //here starts cross net
              glVertex2f(-2.3,0.6);
               glVertex2f(-2.25,0.2);   //here starts cross net
              glVertex2f(-2.25,0.6);
               glVertex2f(-2.2,0.2);   //here starts cross net
              glVertex2f(-2.2,0.6);
              glVertex2f(-2.15,0.2);   //here starts cross net
              glVertex2f(-2.15,0.6);
               glVertex2f(-2.1,0.2);
              glVertex2f(-2.1,0.6);
               glVertex2f(-2.05,0.2);
              glVertex2f(-2.05,0.6);

                glVertex2f(-1.95,0.2);   //here starts cross net
              glVertex2f(-1.95,0.6);
               glVertex2f(-1.9,0.2);
              glVertex2f(-1.9,0.6);
              glVertex2f(-1.85,0.2);
              glVertex2f(-1.85,0.6);
               glVertex2f(-1.8,0.2);
              glVertex2f(-1.8,0.6);
               glVertex2f(-1.75,0.2);
              glVertex2f(-1.75,0.6);

               glVertex2f(-1.7,0.2);
              glVertex2f(-1.7,0.6);
              glVertex2f(-1.65,0.2);
              glVertex2f(-1.65,0.6);
               glVertex2f(-1.6,0.2);
              glVertex2f(-1.6,0.6);
               glVertex2f(-1.55,0.2);
              glVertex2f(-1.55,0.6);
               glVertex2f(-1.5,0.2);
              glVertex2f(-1.5,0.6);
               glVertex2f(-1.45,0.2);
              glVertex2f(-1.45,0.6);
               glVertex2f(-1.4,0.2);
              glVertex2f(-1.4,0.6);
               glVertex2f(-1.35,0.2);
              glVertex2f(-1.35,0.6);
               glVertex2f(-1.3,0.2);
              glVertex2f(-1.3,0.6);
               glVertex2f(-1.25,0.2);
              glVertex2f(-1.25,0.6);
               glVertex2f(-1.2,0.2);
              glVertex2f(-1.2,0.6);
              glVertex2f(-1.15,0.2);
              glVertex2f(-1.15,0.6);
               glVertex2f(-1.1,0.2);
              glVertex2f(-1.1,0.6);
               glVertex2f(-1.05,0.2);
              glVertex2f(-1.05,0.6);
              glVertex2f(-1.0,0.2);
              glVertex2f(-1.0,0.6);
               glVertex2f(-0.95,0.2);
              glVertex2f(-0.95,0.6);
              glVertex2f(-0.9,0.2);
              glVertex2f(-0.9,0.6);
             glEnd();   //end of cross net






	      glBegin(GL_QUADS); //right side er gac er stck
              glColor3ub(102,51,0);
              glVertex2f(4.65,0.1);
              glVertex2f(4.72,0.1);
              glVertex2f(4.72,0.95);
              glVertex2f(4.65,0.95);
               glEnd();






	         glBegin(GL_TRIANGLES); //right side er tree
                glColor3ub(52,102,0);
              glVertex2f(4.45,0.8);
              glVertex2f(4.95,0.8);
              glVertex2f(4.7,1.3);

               glEnd();


	         glBegin(GL_TRIANGLES);
              glColor3ub(52,102,0);
              glVertex2f(4.45,1.0);
              glVertex2f(4.95,1.0);
              glVertex2f(4.7,1.65);
              //glVertex2f(-1.4,0.95);
               glEnd();



               glBegin(GL_LINES);//right side net
              glColor3ub(0,0,0);
             glVertex2f(4.41,0.2);
              glVertex2f(5.0,0.2);
              glVertex2f(4.41,0.25);
              glVertex2f(5.0,0.25);
               glVertex2f(4.41,0.3);
              glVertex2f(5.0,0.3);
              glVertex2f(4.41,0.35);
              glVertex2f(5.0,0.35);
               glVertex2f(4.41,0.4);
              glVertex2f(5.0,0.4);
              glVertex2f(4.41,0.45);
              glVertex2f(5.0,0.45);
                glVertex2f(4.41,0.5);
              glVertex2f(5.0,0.5);
              glVertex2f(4.41,0.55);
              glVertex2f(5.0,0.55);
               glVertex2f(4.41,0.6);
              glVertex2f(5.0,0.6);
              glVertex2f(4.41,0.2);//crossnet
              glVertex2f(4.41,0.6);
               glVertex2f(4.45,0.2);
              glVertex2f(4.45,0.6);
               glVertex2f(4.5,0.2);
              glVertex2f(4.5,0.6);
              glVertex2f(4.55,0.2);
              glVertex2f(4.55,0.6);
               glVertex2f(4.6,0.2);
              glVertex2f(4.6,0.6);
               glVertex2f(4.65,0.2);
              glVertex2f(4.65,0.6);
               glVertex2f(4.7,0.2);
              glVertex2f(4.7,0.6);
               glVertex2f(4.75,0.2);
              glVertex2f(4.75,0.6);
                glVertex2f(4.8,0.2);
                glVertex2f(4.8,0.6);
               glVertex2f(4.85,0.2);
              glVertex2f(4.85,0.6);
               glVertex2f(4.9,0.2);
              glVertex2f(4.9,0.6);
               glVertex2f(4.95,0.2);
              glVertex2f(4.95,0.6);
               glEnd();







//Middle space
//////////////////////////////////////////////////////////
////////////////////////////////////////////////////////// sobita


    //middle space
    glBegin(GL_QUADS);
              glColor3ub(166, 166, 166);
              glVertex2f(-5,-1.8);
              glVertex2f(5,-1.8);
              glVertex2f(5,0);
              glVertex2f(-5,0);
    glEnd();

    // Middle Space boarder
    glBegin(GL_QUADS);
              glColor3ub(77, 77, 77);
              glVertex2f(-5,0);
              glVertex2f(5,0);
              glVertex2f(5,0.1);
              glVertex2f(-5,0.1);
    glEnd();





    ////////////////////////////////////////////////////////////////////////////
                                         //working car lorry
          glPushMatrix();
   glTranslatef(positionLorry,0,0);
               glBegin(GL_POLYGON);
    glColor3ub(230, 184, 0);
    glVertex2f(.25,-.3);
    glVertex2f(.62,-.3);
    glVertex2f(.69,-.19);
    glVertex2f(.83,-.2);
    glVertex2f(.81,-.01);
    glVertex2f(.71,-.01);
    glVertex2f(.65,.2);
    glVertex2f(.42,.2);
    glVertex2f(.24,0);
    glEnd();
      int q13;

	GLfloat m13=.36; GLfloat n13=-.3f; GLfloat radius13q =.05f;
	int triangleAmount13q = 20;


	GLfloat twicePi13q = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(0, 0, 0);
		glVertex2f(m13, n13);
		for(q13 = 0; q13 <= triangleAmount13q;q13++) {
			glVertex2f(
		            m13 + (radius13q * cos(q13 *  twicePi13q / triangleAmount13q)),
			    n13+ (radius13q * sin(q13 * twicePi13q / triangleAmount13q))
			);
		}

    glEnd();
int q14;

	GLfloat m14=.73; GLfloat n14=-.27f; GLfloat radius14q =.07f;
	int triangleAmount14q = 20;


	GLfloat twicePi14q = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(0, 0, 0);
		glVertex2f(m14, n14);
		for(q14 = 0; q14 <= triangleAmount14q;q14++) {
			glVertex2f(
		            m14 + (radius14q * cos(q14 *  twicePi14q / triangleAmount14q)),
			    n14+ (radius14q * sin(q14 * twicePi14q / triangleAmount14q))
			);
		}

    glEnd();
    glBegin(GL_QUADS);
              glColor3ub(0,0,0);
                 glVertex2f(.84,-.2);
                 glVertex2f(.87,-.2);
                 glVertex2f(.87,.3);
                 glVertex2f(.84,.3);


    glEnd();
     glBegin(GL_QUADS);
              glColor3ub(0,0,0);

                 glVertex2f(.83,-.2);
                 glVertex2f(1.29,-.2);
                 glVertex2f(1.29,-.18);
                 glVertex2f(.83,-.18);


    glEnd();
                                  ///////window
       glBegin(GL_QUADS);
              glColor3ub(0, 57, 230);

                 glVertex2f(.46,.01);
                 glVertex2f(.6,-.01);
                 glVertex2f(.6,.16);
                 glVertex2f(.46,.16);


    glEnd();
    glBegin(GL_QUADS);
              glColor3ub(0, 57, 230);

                 glVertex2f(.46,-.11);
                 glVertex2f(.6,-.13);
                 glVertex2f(.6,-.04);
                 glVertex2f(.46,-.01);


    glEnd();
                                                // worker car back light


       glBegin(GL_QUADS);
              glColor3ub(128, 0, 42);

                 glVertex2f(.25,-.25);
                 glVertex2f(.31,-.25);
                 glVertex2f(.31,-.2);
                 glVertex2f(.25,-.2);


    glEnd();
    glBegin(GL_QUADS);                       //bags
              glColor3ub(255, 212, 128);



                 glVertex2f(.92,-.18);
                 glVertex2f(1.25,-.18);
                 glVertex2f(1.24,.04);
                 glVertex2f(.92,.04);



    glEnd();
     glBegin(GL_QUADS);                       //bags2
              glColor3ub(255, 238, 204);



                 glVertex2f(.98,.04);
                 glVertex2f(1.2,.04);
                 glVertex2f(1.2,.2);
                 glVertex2f(.98,.2);



    glEnd();

glPopMatrix();






                                                //**** for Big plane ******
     glBegin(GL_POLYGON);
              glColor3ub(204, 235, 255);
              glVertex2f(-3.8,-.78);
              glVertex2f(-1.52,-.78);
              glVertex2f(-1.48,-.77);
              glVertex2f(-1.43,-.75);
              glVertex2f(-1.38,-.73);
               glVertex2f(-1.34,-.7);

              glVertex2f(-1.16,-.59);

              glVertex2f(-.33,-.17);
               glVertex2f(-.27,-.13);
              glVertex2f(-.23,-.08);
              glVertex2f(-.23,-.08);
              glVertex2f(-.26,0);
              glVertex2f(-.3,.05);
              glVertex2f(-3.79,.06);
              glVertex2f(-3.84,.06);
              glVertex2f(-3.88,.05);
               glVertex2f(-3.92,.03);

              glVertex2f(-4.17,-.11);
              glVertex2f(-4.22,-.13);
              glVertex2f(-4.27,-.15);
              glVertex2f(-4.32,-.18);
              glVertex2f(-4.36,-.22);
              glVertex2f(-4.4,-.25);
              glVertex2f(-4.42,-.29);
              glVertex2f(-4.42,-.35);
              glVertex2f(-4.4,-.38);
              glVertex2f(-4.35,-.44);
              glVertex2f(-4.3,-.5);
              glVertex2f(-4.24,-.54);
              glVertex2f(-4.2,-.58);
              glVertex2f(-4.14,-.63);
               glVertex2f(-4.09,-.66);
              glVertex2f(-4.02,-.7);
              glVertex2f(-3.96,-.74);
              glVertex2f(-3.9,-.77);
              glVertex2f(-3.84,-.78);
              glEnd();

                                                       //Up Wing
              glBegin(GL_POLYGON);
              glColor3ub(255, 153, 0);
              glVertex2f(-.55,.05);
              glVertex2f(-.52,.71);
              glVertex2f(-.66,.65);
               glVertex2f(-.9,.16);
              glVertex2f(-.98,.12);
              glVertex2f(-1.04,.08);
              glVertex2f(-1.1,.06);

              glEnd();
                                                    //uo 2nd wing
               glBegin(GL_POLYGON);
              glColor3ub(0, 0, 153);
             glVertex2f(-1.47,0);
              glVertex2f(-1.11,.6);
              glVertex2f(-1.23,.57);
               glVertex2f(-1.65,.1);
              glVertex2f(-1.72,.08);
              glVertex2f(-1.78,.05);
              glVertex2f(-1.82,.03);
              glVertex2f(-1.88,0);
              glEnd();

                                           //////window for overload
              glBegin(GL_QUADS);
              glColor3ub(102, 179, 255);
              glVertex2f(-2.25,-.23);
              glVertex2f(-2.15,-.23);
              glVertex2f(-2.15,-.06);
              glVertex2f(-2.25,-.06);
              glEnd();
                                           //up 2nd wing with extra wing

               glBegin(GL_POLYGON);
              glColor3ub(255, 153, 0);
             glVertex2f(-1.82,.03);
              glVertex2f(-2.56,-.47);
              glVertex2f(-2.55,-.5);
               glVertex2f(-2.52,-.51);
              glVertex2f(-2.48,-.52);
              glVertex2f(-2.46,-.5);
              glVertex2f(-1.82,-.01);

              glEnd();
                                               //1
               glBegin(GL_QUADS);
              glColor3ub(102, 179, 255);
              glVertex2f(-2.46,-.5);
              glVertex2f(-1.8,-.5);
              glVertex2f(-1.47,0.01);
              glVertex2f(-1.82,0);
              glEnd();

                                                     //side wing
               glBegin(GL_POLYGON);
              glColor3ub(0, 0, 153);
              glVertex2f(-.31,-.13);
              glVertex2f(-.13,.21);
               glVertex2f(-.2,.2);
              glVertex2f(-.27,.17);
               glVertex2f(-.34,.13);
              glVertex2f(-.42,.07);
              glVertex2f(-.49,.02);
               glVertex2f(-.54,-.03);
              glVertex2f(-.58,-.08);
              glVertex2f(-.64,-.14);
               glEnd();

              //Front Mouth
               glBegin(GL_POLYGON);
                glColor3ub(255, 153, 0);
              glVertex2f(-4.27,-.15);
              glVertex2f(-4.32,-.18);
              glVertex2f(-4.36,-.22);
              glVertex2f(-4.4,-.25);
              glVertex2f(-4.42,-.29);
              glVertex2f(-4.42,-.35);
              glVertex2f(-4.4,-.38);
              glVertex2f(-4.35,-.44);
              glVertex2f(-4.3,-.5);

              glVertex2f(-4.28,-.45);
              glVertex2f(-4.26,-.4);
              glVertex2f(-4.25,-.33);
              glVertex2f(-4.25,-.26);
              glVertex2f(-4.27,-.19);
              glEnd();

                                                    //Front window
              glBegin(GL_QUADS);
              glColor3ub(102, 179, 255);
              glVertex2f(-3.45,-.27);
              glVertex2f(-3.35,-.27);
              glVertex2f(-3.35,-.03);
              glVertex2f(-3.45,-.03);
              glEnd();



              glBegin(GL_QUADS);
              glColor3ub(0, 0, 153);
              glVertex2f(-4.17,-.11);
              glVertex2f(-4.09,-.16);
              glVertex2f(-3.9,-.01);
              glVertex2f(-3.92,.03);
              glEnd();
               glBegin(GL_QUADS);
              glColor3ub(0, 0, 153);
              glVertex2f(-4.06,-.18);
              glVertex2f(-3.9,-.2);
              glVertex2f(-3.82,-.04);
              glVertex2f(-3.88,-.02);
              glEnd();
               glBegin(GL_QUADS);
              glColor3ub(0, 0, 153);
              glVertex2f(-3.87,-.2);
              glVertex2f(-3.76,-.18);
              glVertex2f(-3.76,-.05);
              glVertex2f(-3.8,-.05);
              glEnd();

               glBegin(GL_QUADS);
              glColor3ub(102, 179, 255);
              glVertex2f(-3.45,-.23);
              glVertex2f(-3.35,-.23);
              glVertex2f(-3.35,-.06);
              glVertex2f(-3.45,-.06);
              glEnd();

               glBegin(GL_QUADS);
              glColor3ub(102, 179, 255);
              glVertex2f(-3.25,-.23);
              glVertex2f(-3.15,-.23);
              glVertex2f(-3.15,-.06);
              glVertex2f(-3.25,-.06);
              glEnd();
              glBegin(GL_QUADS);
              glColor3ub(102, 179, 255);
              glVertex2f(-3.05,-.23);
              glVertex2f(-2.95,-.23);
              glVertex2f(-2.95,-.06);
              glVertex2f(-3.05,-.06);
             glEnd();
              glBegin(GL_QUADS);
              glColor3ub(102, 179, 255);
              glVertex2f(-2.85,-.23);
              glVertex2f(-2.75,-.23);
              glVertex2f(-2.75,-.06);
              glVertex2f(-2.85,-.06);
             glEnd();
              glBegin(GL_QUADS);
              glColor3ub(102, 179, 255);
              glVertex2f(-2.65,-.23);
              glVertex2f(-2.55,-.23);
              glVertex2f(-2.55,-.06);
              glVertex2f(-2.65,-.06);
              glEnd();
              glBegin(GL_QUADS);
              glColor3ub(102, 179, 255);
              glVertex2f(-2.45,-.23);
              glVertex2f(-2.35,-.23);
              glVertex2f(-2.35,-.06);
              glVertex2f(-2.45,-.06);
              glEnd();
               glBegin(GL_QUADS);
              glColor3ub(102, 179, 255);
              glVertex2f(-1.5,-.23);
              glVertex2f(-1.4,-.23);
              glVertex2f(-1.4,-.06);
              glVertex2f(-1.5,-.06);
            glEnd();

             glBegin(GL_QUADS);
              glColor3ub(102, 179, 255);
              glVertex2f(-1.3,-.23);
              glVertex2f(-1.2,-.23);
              glVertex2f(-1.2,-.06);
              glVertex2f(-1.3,-.06);
            glEnd();
             glBegin(GL_QUADS);
              glColor3ub(102, 179, 255);
              glVertex2f(-1.1,-.23);
              glVertex2f(-1,-.23);
              glVertex2f(-1,-.06);
              glVertex2f(-1.1,-.06);
              glEnd();

                                                     //wheel
              glBegin(GL_QUADS);
              glColor3ub(255, 153, 0);
              glVertex2f(-2.79,-.93);
              glVertex2f(-2.77,-.93);
              glVertex2f(-2.77,-.64);
              glVertex2f(-2.79,-.64);
               glEnd();



            glBegin(GL_POLYGON);
                glColor3ub(179, 224, 255);
                 glVertex2f(-2.77,-.93);
                 glVertex2f(-2.74,-.94);
              glVertex2f(-2.71,-.95);
              glVertex2f(-2.68,-.97);
              glVertex2f(-2.64,-.97);
              glVertex2f(-2.61,-.98);
              glVertex2f(-2.58,-.98);
              glVertex2f(-2.55,-.97);
               glVertex2f(-2.52,-.96);
              glVertex2f(-2.49,-.94);
              glVertex2f(-2.47,-.92);
              glVertex2f(-2.46,-.9);
              glVertex2f(-2.43,-.87);
              glVertex2f(-2.42,-.85);
              glVertex2f(-2.41,-.82);
               glVertex2f(-2.41,-.8);
              glVertex2f(-2.41,-.78);
              glVertex2f(-2.41,-.75);
              glVertex2f(-2.41,-.73);
              glVertex2f(-2.41,-.7);
              glVertex2f(-2.42,-.69);
              glVertex2f(-2.44,-.66);
               glVertex2f(-2.47,-.64);
              glVertex2f(-2.5,-.62);
              glVertex2f(-2.53,-.6);
              glVertex2f(-2.57,-.58);
              glVertex2f(-2.61,-.58);
              glVertex2f(-2.65,-.58);
              glVertex2f(-2.67,-.59);
               glVertex2f(-2.7,-.6);
              glVertex2f(-2.72,-.61);
              glVertex2f(-2.75,-.62);
              glVertex2f(-2.77,-.64);
              glEnd();
               glBegin(GL_POLYGON);
                glColor3ub(102, 179, 255);
              glVertex2f(-2.42,-.87);
              glVertex2f(-2.4,-.85);
              glVertex2f(-2.37,-.83);
              glVertex2f(-2.35,-.81);
              glVertex2f(-2.35,-.79);
              glVertex2f(-2.34,-.77);
              glVertex2f(-2.35,-.74);
              glVertex2f(-2.35,-.73);
              glVertex2f(-2.37,-.71);
              glVertex2f(-2.4,-.69);
              glVertex2f(-2.42,-.67);
              glVertex2f(-2.44,-.67);
              glVertex2f(-2.44,-.87);
              glEnd();
                                                //2nd wheel
               glBegin(GL_QUADS);
                glColor3ub(102, 179, 255);

              glVertex2f(-2.26,-.86);
              glVertex2f(-2.14,-.86);
              glVertex2f(-2.14,-.78);
              glVertex2f(-2.26,-.78);
              glEnd();
              glBegin(GL_LINES);
                glColor3ub(0, 0, 153);

              glVertex2f(-2.22,-.91);
              glVertex2f(-2.22,-.86);
              glVertex2f(-2.19,-.91);
              glVertex2f(-2.19,-.86);
              glEnd();
                                               //3rd wheel
              glBegin(GL_QUADS);
                glColor3ub(102, 179, 255);

              glVertex2f(-3.6,-.86);
              glVertex2f(-3.48,-.86);
              glVertex2f(-3.48,-.78);
              glVertex2f(-3.6,-.78);
              glEnd();
              glBegin(GL_LINES);
                glColor3ub(0, 0, 153);

              glVertex2f(-3.55,-.91);
              glVertex2f(-3.55,-.86);
              glVertex2f(-3.53,-.91);
              glVertex2f(-3.53,-.86);
              glEnd();
        int q1;

	GLfloat m1=-2.21; GLfloat n1=-.96f; GLfloat radius1q =.05f;
	int triangleAmount1q = 20; //# of triangles used to draw circle


	GLfloat twicePi1q = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(0, 0, 153);
		glVertex2f(m1, n1); // center of circle
		for(q1 = 0; q1 <= triangleAmount1q;q1++) {
			glVertex2f(
		            m1 + (radius1q * cos(q1 *  twicePi1q / triangleAmount1q)),
			    n1 + (radius1q * sin(q1 * twicePi1q / triangleAmount1q))
			);
		}

	 glEnd();
	    int q2;

	GLfloat m2=-2.21; GLfloat n2=-.96f; GLfloat radius2q =.04f;
	int triangleAmount2q = 20; //# of triangles used to draw circle


	GLfloat twicePi2q = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(204, 235, 255);
		glVertex2f(m2, n2); // center of circle
		for(q2 = 0; q2 <= triangleAmount2q;q2++) {
			glVertex2f(
		            m2 + (radius2q * cos(q2 *  twicePi2q / triangleAmount2q)),
			    n2 + (radius2q * sin(q2 * twicePi2q / triangleAmount2q))
			);
		}
		glEnd();
		 int q3;

	GLfloat m3=-3.54; GLfloat n3=-.96f; GLfloat radius3q =.05f;
	int triangleAmount3q = 20; //# of triangles used to draw circle


	GLfloat twicePi3q = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(0, 0, 153);
		glVertex2f(m3, n3); // center of circle
		for(q3 = 0; q3 <= triangleAmount3q;q3++) {
			glVertex2f(
		            m3 + (radius3q * cos(q3 *  twicePi3q / triangleAmount3q)),
			    n3 + (radius3q * sin(q3 * twicePi3q / triangleAmount3q))
			);
		}
		glEnd();
		int q4;

	GLfloat m4=-3.54; GLfloat n4=-.96f; GLfloat radius4q =.04f;
	int triangleAmount4q = 20; //# of triangles used to draw circle


	GLfloat twicePi4q = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(204, 235, 255);
		glVertex2f(m4, n4); // center of circle
		for(q4 = 0; q4 <= triangleAmount4q;q4++) {
			glVertex2f(
		            m4 + (radius4q * cos(q4 *  twicePi4q / triangleAmount4q)),
			    n4 + (radius4q * sin(q4 * twicePi4q / triangleAmount4q))
			);
		}

    glEnd();
                                               ///////////////////////////////////////////////////////////////////////////////////
                                                               //man 2

                                                   //HEAD
                                                                //head
int q7;

	GLfloat m7=-4.12; GLfloat n7=-.3f; GLfloat radius7q =.055f;
	int triangleAmount7q = 20;


	GLfloat twicePi7q = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(255, 230, 204);
		glVertex2f(m7, n7);
		for(q7 = 0; q7 <= triangleAmount7q;q7++) {
			glVertex2f(
		            m7 + (radius7q * cos(q7 *  twicePi7q / triangleAmount7q)),
			    n7 + (radius7q * sin(q7 * twicePi7q / triangleAmount7q))
			);
		}

    glEnd();

                                                  //Hair
                                                                //head
int q8;

	GLfloat m8=-4.1; GLfloat n8=-.3f; GLfloat radius8q =.05f;
	int triangleAmount8q = 20;


	GLfloat twicePi8q = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(0, 0, 0);
		glVertex2f(m8, n8);
		for(q8 = 0; q8 <= triangleAmount8q;q8++) {
			glVertex2f(
		            m8 + (radius8q * cos(q8 *  twicePi8q / triangleAmount8q)),
			    n8+ (radius8q * sin(q8 * twicePi8q / triangleAmount8q))
			);
		}

    glEnd();

                                                     //nack 2b
      glBegin(GL_QUADS);
              glColor3ub(255, 230, 204);
              glVertex2f(-4.12,-.4);
              glVertex2f(-4.08,-.4);
              glVertex2f(-4.08,-.36);
              glVertex2f(-4.12,-.36);
    glEnd();
                                                 //body org 2
     glBegin(GL_POLYGON);
              glColor3ub(255, 169, 77);
              glVertex2f(-4.15,-.66);
              glVertex2f(-4.15,-.44);
              glVertex2f(-4.12,-.4);
              glVertex2f(-4.04,-.44);
              //glVertex2f(-4.01,-.47);
              glVertex2f(-4.04,-.66);

                glEnd();

                                                        //leg1
      glBegin(GL_QUADS);
              glColor3ub(0, 102, 255);
              glVertex2f(-4.12,-.96);
              glVertex2f(-4.09,-.95);
              glVertex2f(-4.09,-.66);
              glVertex2f(-4.15,-.66);
    glEnd();
                                                  //leg2
      glBegin(GL_QUADS);
              glColor3ub(0, 102, 255);
              glVertex2f(-4.04,-.96);
              glVertex2f(-4.01,-.95);
              glVertex2f(-4.04,-.65);
              glVertex2f(-4.09,-.66);
    glEnd();
                                                   //shoe1
      glBegin(GL_QUADS);
              glColor3ub(0, 0, 0);
              glVertex2f(-4.15,-.98);
              glVertex2f(-4.09,-.98);
              glVertex2f(-4.09,-.95);
              glVertex2f(-4.12,-.96);
    glEnd();
                                                  //shoe2
      glBegin(GL_QUADS);
             glColor3ub(0, 0, 0);
              glVertex2f(-4.06,-.98);
              glVertex2f(-4,-.98);
              glVertex2f(-4.01,-.95);
              glVertex2f(-4.04,-.95);
    glEnd();
                                                //hand 2b
     glBegin(GL_POLYGON);
              glColor3ub(0, 102, 255);

              glVertex2f(-4.16,-.56);
              glVertex2f(-4.16,-.47);
              glVertex2f(-4.14,-.43);
              glVertex2f(-4.12,-.45);
              glVertex2f(-4.12,-.59);
              //glVertex2f();

                glEnd();

                                        //hand 2b
     glBegin(GL_POLYGON);
              glColor3ub(0, 102, 255);
              glVertex2f(-4.24,-.54);
              glVertex2f(-4.22,-.54);
              glVertex2f(-4.18,-.55);
               glVertex2f(-4.16,-.56);
               glVertex2f(-4.13,-.57);
               glVertex2f(-4.12,-.59);
              glVertex2f(-4.13,-.62);
              glVertex2f(-4.17,-.61);
              glVertex2f(-4.24,-.57);
              glEnd();
                                             //2hand 2b
     glBegin(GL_POLYGON);
              glColor3ub(0, 102, 255);
              glVertex2f(-4.26,-.37);
              glVertex2f(-4.22,-.41);
              glVertex2f(-4.19,-.43);
              glVertex2f(-4.16,-.42);
              glVertex2f(-4.14,-.42);
              glVertex2f(-4.16,-.47);
              glVertex2f(-4.2,-.46);
              glVertex2f(-4.23,-.44);
              glVertex2f(-4.25,-.42);
              glVertex2f(-4.27,-.4);
                glEnd();
                                                        //hand skin
      glBegin(GL_QUADS);
              glColor3ub(255, 230, 204);
              glVertex2f(-4.27,-.4);
              glVertex2f(-4.26,-.37);
              glVertex2f(-4.3,-.35);
              glVertex2f(-4.31,-.38);
    glEnd();
                                                      //hand skin
      glBegin(GL_QUADS);
              glColor3ub(255, 230, 204);
              glVertex2f(-4.24,-.57);
              glVertex2f(-4.25,-.54);
              glVertex2f(-4.27,-.53);
              glVertex2f(-4.28,-.56);
    glEnd();

                                                      //work stair1
      glBegin(GL_LINES);
              glColor3ub(0, 51, 204);
              glVertex2f(-4.28,-1.46);
              glVertex2f(-3.72,-1.46);
              glVertex2f(-3.72,-1.46);
              glVertex2f(-3.9,-.98);
              glVertex2f(-3.9,-.98);
              glVertex2f(-4.28,-.98);
              glVertex2f(-4.28,-.98);
              glVertex2f(-4.28,-1.46);
              glVertex2f(-4.06,-.98);
              glVertex2f(-3.92,-1.46);
              glVertex2f(-3.9,-.98);
              glVertex2f(-3.72,-1.46);
              glVertex2f(-4.06,-.98);
              glVertex2f(-4.28,-1.46);
              glVertex2f(-4.29,-.98);
              glVertex2f(-4.29,-.75);
              glVertex2f(-4.29,-.75);
              glVertex2f(-4.14,-.75);
              glVertex2f(-3.9,-.98);
              glVertex2f(-3.9,-.75);
              glVertex2f(-3.9,-.75);
              glVertex2f(-4,-.75);
              glVertex2f(-4,-.75);
              glVertex2f(-4,-.98);

    glEnd();
    glBegin(GL_LINES);
              glColor3ub(230, 138, 0);
              glVertex2f(-4.05,-1.02);
              glVertex2f(-3.89,-1.02);
              glVertex2f(-4.03,-1.11);
              glVertex2f(-3.86,-1.11);
              glVertex2f(-4,-1.21);
              glVertex2f(-3.82,-1.21);
              glVertex2f(-3.97,-1.3);
              glVertex2f(-3.78,-1.3);
              glVertex2f(-3.94,-1.39);
              glVertex2f(-3.74,-1.39);
    glEnd();
                                                    //stair wheel
    glBegin(GL_TRIANGLES);
              glColor3ub(0, 51, 204);
               glVertex2f(-4.3,-1.5);
               glVertex2f(-4.27,-1.5);
               glVertex2f(-4.28,-1.46);
                glVertex2f(-3.94,-1.5);
               glVertex2f(-3.9,-1.5);
               glVertex2f(-3.92,-1.46);
                glVertex2f(-3.74,-1.5);
               glVertex2f(-3.7,-1.5);
               glVertex2f(-3.72,-1.46);


    glEnd();

                                               /////////////////////////////////////////////////////////////////////////////////

                                                                        // *********** worker Man2
                                                //HEAD
                glBegin(GL_POLYGON);
              glColor3ub(255, 217, 179);
              glVertex2f(-.82,-.04);
              glVertex2f(-.76,-.05);
              glVertex2f(-.73,-.03);
              glVertex2f(-.73,-.01);

              glVertex2f(-.74,.04);
              glVertex2f(-.78,.05);
              glVertex2f(-.81,.04);
              glVertex2f(-.83,0);

    glEnd();
                                                //hair
     glBegin(GL_POLYGON);
              glColor3ub(0,0,0);
              glVertex2f(-.82,-.04);
              glVertex2f(-.83,0);
              glVertex2f(-.81,-.04);
              glVertex2f(-.77,-.05);
              glVertex2f(-.73,-.01);
    glEnd();
        glBegin(GL_POLYGON);
        glColor3ub(255, 217, 179);                //nack
            glVertex2f(-.79,-.08);
            glVertex2f(-.75,-.08);
            glVertex2f(-.75,-.05);
            glVertex2f(-.79,-.05);
            //glVertex2f();
             glEnd();
                                                      //body
         glBegin(GL_POLYGON);
        glColor3ub(255, 169, 77);
        glVertex2f(-.8,-.08);
        glVertex2f(-.82,-.31);
        glVertex2f(-.69,-.31);
        glVertex2f(-.74,-.08);
             glEnd();

                                                     //hand left
    glBegin(GL_POLYGON);
              glColor3ub(0, 102, 255);
             glVertex2f(-.8,-.08);
             glVertex2f(-.82,-.08);
             glVertex2f(-.84,-.12);
             glVertex2f(-.86,-.15);
             glVertex2f(-.86,-.2);
             glVertex2f(-.81,-.2);
             glVertex2f(-.79,-.11);


    glEnd();
    glBegin(GL_QUADS);
              glColor3ub(0, 102, 255);
             glVertex2f(-.86,-.2);
             glVertex2f(-.8,-.27);
             glVertex2f(-.77,-.24);
             glVertex2f(-.82,-.2);
glEnd();

                                                     //hand right
    glBegin(GL_POLYGON);
              glColor3ub(0, 102, 255);
             glVertex2f(-.74,-.08);
             glVertex2f(-.74,-.12);
             glVertex2f(-.71,-.19);
             glVertex2f(-.69,-.22);
             glVertex2f(-.66,-.19);
             glVertex2f(-.68,-.14);
             glVertex2f(-.7,-.11);
             glVertex2f(-.73,-.08);


    glEnd();
    glBegin(GL_QUADS);
              glColor3ub(0, 102, 255);
             glVertex2f(-.69,-.22);
             glVertex2f(-.61,-.22);
             glVertex2f(-.61,-.19);
             glVertex2f(-.66,-.18);
glEnd();

                                                        //leg1
      glBegin(GL_QUADS);
              glColor3ub(0, 102, 255);
              glVertex2f(-.82,-.57);
              glVertex2f(-.79,-.57);
              glVertex2f(-.74,-.31);
              glVertex2f(-.82,-.31);

    glEnd();
                                                  //leg2
      glBegin(GL_QUADS);
              glColor3ub(0, 102, 255);
               glVertex2f(-.72,-.57);
               glVertex2f(-.68,-.57);
               glVertex2f(-.69,-.31);
               glVertex2f(-.76,-.31);
    glEnd();

                                                        //shoe1
      glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.83,-.6);
              glVertex2f(-.76,-.6);
              glVertex2f(-.79,-.57);
              glVertex2f(-.82,-.57);

    glEnd();

                                                        //shoe2
      glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.72,-.6);
              glVertex2f(-.65,-.6);
              glVertex2f(-.68,-.57);
              glVertex2f(-.72,-.57);

    glEnd();
                                                 //workink stand

glBegin(GL_QUADS);
              glColor3ub(0, 51, 102);
               glVertex2f(-.91,-.62);
               glVertex2f(-.6,-.62);
               glVertex2f(-.6,-.6);
               glVertex2f(-.91,-.6);
    glEnd();
    glBegin(GL_LINES);
              glColor3ub(0, 51, 102);
               glVertex2f(-.91,-.62);
               glVertex2f(-.6,-.71);
               glVertex2f(-.6,-.71);
               glVertex2f(-.91,-.83);
               glVertex2f(-.91,-.83);
               glVertex2f(-.6,-.95);
               glVertex2f(-.6,-.62);
               glVertex2f(-.91,-.71);
               glVertex2f(-.91,-.71);
               glVertex2f(-.6,-.83);
                glVertex2f(-.6,-.83);
                 glVertex2f(-.91,-.95);
    glEnd();
    glBegin(GL_QUADS);
              glColor3ub(0, 51, 102);
               glVertex2f(-.91,-1);
               glVertex2f(-.6,-1);
               glVertex2f(-.6,-.95);
               glVertex2f(-.91,-.95);
    glEnd();
    int q9;

	GLfloat m9=-.83; GLfloat n9=-1.02f; GLfloat radius9q =.02f;
	int triangleAmount9q = 20;


	GLfloat twicePi9q = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(0, 0, 0);
		glVertex2f(m9, n9);
		for(q9 = 0; q9 <= triangleAmount9q;q9++) {
			glVertex2f(
		            m9 + (radius9q * cos(q9 *  twicePi9q / triangleAmount9q)),
			    n9+ (radius9q * sin(q9 * twicePi9q / triangleAmount9q))
			);
		}

    glEnd();
        int q10;

	GLfloat m10=-.7; GLfloat n10=-1.02f; GLfloat radius10q =.02f;
	int triangleAmount10q = 20;


	GLfloat twicePi10q = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(0, 0, 0);
		glVertex2f(m10, n10);
		for(q10 = 0; q10 <= triangleAmount10q;q10++) {
			glVertex2f(
		            m10 + (radius10q * cos(q10 *  twicePi10q / triangleAmount10q)),
			    n10+ (radius10q * sin(q10 * twicePi10q / triangleAmount10q))
			);
		}

    glEnd();






                                                  //traffic cone
    glBegin(GL_TRIANGLES);
              glColor3ub(255, 163, 26);
                 glVertex2f(-4.6,-1.5);
                 glVertex2f(-4.5,-1.5);
                 glVertex2f(-4.55,-1.2);
                 glVertex2f(-4.63,-1.53);
                 glVertex2f(-4.47,-1.53);
                 glVertex2f(-4.55,-1.45);

    glEnd();




    ///////////////////////////////////////////bag carry man


                                                                //head
   glPushMatrix();
   glTranslatef(positionLorry,0,0);
int q5;

	GLfloat m5=-3.29; GLfloat n5=-.81f; GLfloat radius5q =.08f;
	int triangleAmount5q = 20;


	GLfloat twicePi5q = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(255, 230, 204);
		glVertex2f(m5, n5);
		for(q5 = 0; q5 <= triangleAmount5q;q5++) {
			glVertex2f(
		            m5 + (radius5q * cos(q5 *  twicePi5q / triangleAmount5q)),
			    n5 + (radius5q * sin(q5 * twicePi5q / triangleAmount5q))
			);
		}

    glEnd();
                                                                             //hair
    int q6;

	GLfloat m6=-3.29; GLfloat n6=-.81f; GLfloat radius6q =.08f;
	int triangleAmount6q = 20;


	GLfloat twicePi6q = 1.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(0,0,0);
		glVertex2f(m6, n6);
		for(q6 = 0; q6 <= triangleAmount6q;q6++) {
			glVertex2f(
		            m6 + (radius6q * cos(q6 *  twicePi6q / triangleAmount6q)),
			    n6 + (radius6q * sin(q6 * twicePi6q / triangleAmount6q))
			);
		}

    glEnd();



                                                     //nack
      glBegin(GL_QUADS);
              glColor3ub(255, 230, 204);
              glVertex2f(-3.31,-.92);
              glVertex2f(-3.27,-.92);
              glVertex2f(-3.27,-.89);
              glVertex2f(-3.31,-.89);
    glEnd();
                                                  //body blue dress
      glBegin(GL_QUADS);
              glColor3ub(0, 102, 255);
              glVertex2f(-3.35,-1.15);
              glVertex2f(-3.2,-1.15);
              glVertex2f(-3.21,-1.01);
              glVertex2f(-3.35,-1.01);
                                                  //orange dr
    glEnd();
     glBegin(GL_QUADS);
              glColor3ub(255, 169, 77);
              glVertex2f(-3.35,-1.01);
              glVertex2f(-3.21,-1.01);
              glVertex2f(-3.21,-.92);
              glVertex2f(-3.34,-.92);
    glEnd();
                                                  //hand
     glBegin(GL_POLYGON);
              glColor3ub(255, 169, 77);
              glVertex2f(-3.32,-.92);
              glVertex2f(-3.38,-.92);
              glVertex2f(-3.39,-.94);
              glVertex2f(-3.41,-1);
              glVertex2f(-3.41,-1.07);
              glVertex2f(-3.37,-1.07);
              glVertex2f(-3.35,-.96);
                glEnd();
                                                  //hand right
     glBegin(GL_POLYGON);
              glColor3ub(255, 169, 77);
              glVertex2f(-3.23,-.92);
              glVertex2f(-3.17,-.93);
              glVertex2f(-3.15,-.97);
              glVertex2f(-3.14,-1);
              glVertex2f(-3.14,-1.07);
              glVertex2f(-3.18,-1.07);
               glVertex2f(-3.21,-.96);
              glEnd();

      glBegin(GL_QUADS);
              glColor3ub(255, 230, 204);
              glVertex2f(-3.4,-1.22);
              glVertex2f(-3.38,-1.22);
              glVertex2f(-3.37,-1.07);
              glVertex2f(-3.41,-1.07);
    glEnd();
    glBegin(GL_QUADS);
              glColor3ub(255, 230, 204);
              glVertex2f(-3.16,-1.22);
              glVertex2f(-3.14,-1.22);
              glVertex2f(-3.14,-1.07);
              glVertex2f(-3.17,-1.07);
    glEnd();



                                                      //blue dr
         glBegin(GL_QUADS);
              glColor3ub(0, 102, 255);
              glVertex2f(-3.33,-1.01);
              glVertex2f(-3.31,-1.01);
              glVertex2f(-3.31,-.92);
              glVertex2f(-3.33,-.92);
    glEnd();
     glBegin(GL_QUADS);
              glColor3ub(0, 102, 255);
              glVertex2f(-3.26,-1.01);
              glVertex2f(-3.24,-1.01);
              glVertex2f(-3.24,-.92);
              glVertex2f(-3.26,-.92);
    glEnd();

                                                  //leg1
      glBegin(GL_QUADS);
              glColor3ub(0, 102, 255);
              glVertex2f(-3.32,-1.45);
              glVertex2f(-3.28,-1.45);
              glVertex2f(-3.28,-1.15);
              glVertex2f(-3.35,-1.15);
    glEnd();
                                                  //leg2
      glBegin(GL_QUADS);
              glColor3ub(0, 102, 255);
              glVertex2f(-3.24,-1.45);
              glVertex2f(-3.2,-1.45);
              glVertex2f(-3.2,-1.15);
              glVertex2f(-3.28,-1.15);
    glEnd();
                                                  //shoe1
      glBegin(GL_QUADS);
              glColor3ub(0, 0, 0);
              glVertex2f(-3.38,-1.48);
              glVertex2f(-3.28,-1.48);
              glVertex2f(-3.28,-1.45);
              glVertex2f(-3.32,-1.45);
    glEnd();
                                                  //shoe2
      glBegin(GL_QUADS);
             glColor3ub(0, 0, 0);
              glVertex2f(-3.24,-1.48);
              glVertex2f(-3.15,-1.48);
              glVertex2f(-3.2,-1.45);
              glVertex2f(-3.24,-1.45);
    glEnd();
                                                   //lorry 1st
    glBegin(GL_QUADS);
              glColor3ub(0, 0, 255);

              glVertex2f(-3.14,-1.22);
              glVertex2f(-3.07,-1.22);
              glVertex2f(-3.06,-1.2);
              glVertex2f(-3.14,-1.2);

    glEnd();
    glBegin(GL_QUADS);
              glColor3ub(194, 214, 214);

              glVertex2f(-3.07,-1.22);
              glVertex2f(-3.07,-1.45);
              glVertex2f(-3.05,-1.45);
              glVertex2f(-3.05,-1.2);
              glEnd();
 glBegin(GL_QUADS);
              glColor3ub(194, 214, 214);

              glVertex2f(-3.08,-1.45);
              glVertex2f(-3.08,-1.5);
              glVertex2f(-2.52,-1.5);
              glVertex2f(-2.52,-1.45);
    glEnd();
                                                     //bag
               glBegin(GL_QUADS);
              glColor3ub(179, 89, 0);

              glVertex2f(-3.03,-1.45);
              glVertex2f(-2.75,-1.45);
              glVertex2f(-2.75,-1.25);
              glVertex2f(-3.03,-1.25);
          glColor3ub(0, 89, 179);
              glVertex2f(-3.04,-1.45);
              glVertex2f(-2.86,-1.45);
              glVertex2f(-2.87,-1.32);
              glVertex2f(-3.04,-1.32);
          glColor3ub(102, 153, 153);
              glVertex2f(-2.7,-1.45);
              glVertex2f(-2.55,-1.45);
              glVertex2f(-2.55,-1.2);
              glVertex2f(-2.7,-1.2);

    glEnd();
    glBegin(GL_LINES);
              glColor3ub(0 , 0, 0);
              glVertex2f(-2.97,-1.25);
              glVertex2f(-2.93,-1.2);
              glVertex2f(-2.93,-1.2);
              glVertex2f(-2.86,-1.2);
              glVertex2f(-2.86,-1.2);
              glVertex2f(-2.82,-1.25);
              glVertex2f(-2.99,-1.32);
              glVertex2f(-2.99,-1.29);
              glVertex2f(-2.99,-1.29);
              glVertex2f(-2.92,-1.29);
              glVertex2f(-2.92,-1.29);
              glVertex2f(-2.92,-1.32);
              //glVertex2f();
              glEnd();
              int q11;

	GLfloat m11=-2.99; GLfloat n11=-1.53f; GLfloat radius11q =.03f;
	int triangleAmount11q = 20;


	GLfloat twicePi11q = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(0,0,0);
		glVertex2f(m11, n11);
		for(q11 = 0; q11 <= triangleAmount11q;q11++) {
			glVertex2f(
		            m11 + (radius11q * cos(q11 *  twicePi11q / triangleAmount11q)),
			    n11 + (radius11q * sin(q11 * twicePi11q / triangleAmount11q))
			);
		}

    glEnd();

   int q12;

	GLfloat m12=-2.62; GLfloat n12=-1.53f; GLfloat radius12q =.03f;
	int triangleAmount12q = 20;


	GLfloat twicePi12q = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(0,0,0);
		glVertex2f(m12, n12);
		for(q12 = 0; q12 <= triangleAmount12q;q12++) {
			glVertex2f(
		            m12 + (radius12q * cos(q12 *  twicePi12q / triangleAmount12q)),
			    n12 + (radius12q * sin(q12 * twicePi12q / triangleAmount12q))
			);
		}

    glEnd();


glPopMatrix();




    ////////////////////////////////////////////////////////


                                                              //////////////////////////////////////////////////////////////
                                                        // *********** engi Man
                                                //HEAD
               glPushMatrix();
   glTranslatef(positionEngineer,0,0);
    glBegin(GL_POLYGON);
                glBegin(GL_POLYGON);
              glColor3ub(0,0,0);
              glVertex2f(-4.84,-.89);
              glVertex2f(-4.79,-.89);
              glVertex2f(-4.82,-.84);
              glVertex2f(-4.86,-.86);

    glEnd();
                                                //HAT
    glBegin(GL_POLYGON);
              glColor3ub(255, 169, 77);
              glVertex2f(-4.87,-.86);
              glVertex2f(-4.77,-.8);
              glVertex2f(-4.71,-.76);
              glVertex2f(-4.76,-.73);
              glVertex2f(-4.82,-.74);
              glVertex2f(-4.86,-.8);

    glEnd();
                                                 //FACE
    glBegin(GL_POLYGON);
              glColor3ub(255, 230, 204);
              glVertex2f(-4.82,-.84);
              glVertex2f(-4.77,-.8);
              glVertex2f(-4.74,-.78);
              glVertex2f(-4.72,-.8);
              glVertex2f(-4.71,-.86);
              glVertex2f(-4.72,-.88);
              glVertex2f(-4.79,-.89);
    glEnd();

                                                 //BODY
     glBegin(GL_QUADS);
    glColor3ub(255, 169, 77);
    glVertex2f(-4.83,-1.22);
    glVertex2f(-4.69,-1.22);
    glVertex2f(-4.69,-.98);
    glVertex2f(-4.83,-.98);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(255, 169, 77);
    glVertex2f(-4.78,-.93);
    glVertex2f(-4.82,-.94);
    glVertex2f(-4.86,-.95);
    glVertex2f(-4.88,-.97);
    glVertex2f(-4.89,-1.12);
    glVertex2f(-4.8,-1.14);
    glVertex2f(-4.79,-1.12);
    glVertex2f(-4.84,-1.09);
    glVertex2f(-4.83,-.99);
    glVertex2f(-4.71,-.99);
    glVertex2f(-4.68,-1.1);
    glVertex2f(-4.64,-1.1);
    glVertex2f(-4.65,-.98);
    glVertex2f(-4.67,-.96);
    glVertex2f(-4.71,-.94);
    glEnd();

                                                      //HAND
    glBegin(GL_QUADS);
    glColor3ub(255, 230, 204);
    glVertex2f(-4.89,-1.12);
    glVertex2f(-4.75,-1.17);
    glVertex2f(-4.74,-1.14);
    glVertex2f(-4.84,-1.09);
    glVertex2f(-4.68,-1.1);
    glVertex2f(-4.69,-1.14);
    glVertex2f(-4.69,-1.19);
    glVertex2f(-4.64,-1.1);
    glVertex2f(-4.8,-.93);                            //NECK
    glVertex2f(-4.75,-.93);
    glVertex2f(-4.75,-.88);
    glVertex2f(-4.79,-.89);

    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 102, 255);
    glVertex2f(-4.79,-1.65);
    glVertex2f(-4.73,-1.65);
    glVertex2f(-4.76,-1.22);
    glVertex2f(-4.83,-1.22);
    glVertex2f(-4.69,-1.64);
    glVertex2f(-4.64,-1.63);
    glVertex2f(-4.69,-1.22);
    glVertex2f(-4.76,-1.22);
        glColor3ub(0, 0,0);                        //SHOE
    glVertex2f(-4.8,-1.68);
    glVertex2f(-4.7,-1.68);
    glVertex2f(-4.73,-1.65);
    glVertex2f(-4.79,-1.65);
    glVertex2f(-4.69,-1.68);
    glVertex2f(-4.59,-1.67);
    glVertex2f(-4.64,-1.63);
    glVertex2f(-4.69,-1.64);
    /*glVertex2f();
    glVertex2f();*/
    glEnd();
     glPopMatrix();





/////////////////////////////////////////////////////// Md. Ibrahim

    //Lorry_1
///////////////////////////////////////////////////
    glPushMatrix();
    glTranslatef(position_9,0,0);
    glBegin(GL_POLYGON);
              glColor3ub(255, 121, 77);
              glVertex2f(4.38,-0.44);
              glVertex2f(4.32,-0.6);
              glVertex2f(4.29,-0.6);
              glVertex2f(4.29,-0.68);
              glVertex2f(4.34,-0.68);
              glVertex2f(4.36,-0.75);
              glVertex2f(4.49,-0.75);
              glVertex2f(4.51,-0.7);
              glVertex2f(4.54,-0.7);
              glVertex2f(4.56,-0.75);
              glVertex2f(4.58,-0.75);
              glVertex2f(4.58,-0.65);
              glVertex2f(4.54,-0.44);

    glEnd();

    //Lorry Door
    glBegin(GL_QUADS);
              glColor3ub(191, 191, 191);
              glVertex2f(4.4,-0.68);
              glVertex2f(4.47,-0.68);
              glVertex2f(4.47,-0.5);
              glVertex2f(4.4,-0.5);
    glEnd();

    //Lorry Handle_1
    glBegin(GL_QUADS);
              glColor3ub(51, 51, 51);
              glVertex2f(4.27,-0.72);
              glVertex2f(4.29,-0.72);
              glVertex2f(4.29,-0.28);
              glVertex2f(4.27,-0.28);
    glEnd();

    //Lorry Handle_2
    glBegin(GL_QUADS);
              glColor3ub(51, 51, 51);
              glVertex2f(4.06,-0.72);
              glVertex2f(4.27,-0.72);
              glVertex2f(4.27,-0.7);
              glVertex2f(4.06,-0.7);
    glEnd();


    //Lorry box_1
    glBegin(GL_QUADS);
              glColor3ub(255, 179, 102);
              glVertex2f(4.1,-0.7);
              glVertex2f(4.25,-0.7);
              glVertex2f(4.25,-0.55);
              glVertex2f(4.1,-0.55);
    glEnd();

    //Lorry box_2
    glBegin(GL_QUADS);
              glColor3ub(255, 217, 179);
              glVertex2f(4.09,-0.55);
              glVertex2f(4.24,-0.55);
              glVertex2f(4.24,-0.38);
              glVertex2f(4.09,-0.38);
    glEnd();

    //lorry wheel_1
    GLfloat x9=4.32f; GLfloat y9=-0.72f; GLfloat radius_9 =0.04f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(26, 26, 26);
		glVertex2f(x9, y9);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x9 + (radius_9 * cos(i *  twicePi / triangleAmount)),
			    y9 + (radius_9 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


    //lorry wheel_2
    GLfloat x10=4.53f; GLfloat y10=-0.72f; GLfloat radius_10 =0.04f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(26, 26, 26);
		glVertex2f(x10, y10);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x10 + (radius_10 * cos(i *  twicePi / triangleAmount)),
			    y10 + (radius_10 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

    glPopMatrix();




///////////////////////////////////////////////////////////


//Lorry with man
////////////////////////////////////////////////////////////////

    //base
    glPushMatrix();
    glTranslatef(position_8,0,0);
    glBegin(GL_QUADS);
              glColor3ub(51, 51, 51);
              glVertex2f(3.32,-1.49);
              glVertex2f(3.75,-1.49);
              glVertex2f(3.75,-1.45);
              glVertex2f(3.32,-1.45);
    glEnd();

    //Bag back
    glBegin(GL_QUADS);
              glColor3ub(134, 45, 45);
              glVertex2f(3.34,-1.45);
              glVertex2f(3.34,-1.29);
              glVertex2f(3.62,-1.29);
              glVertex2f(3.62,-1.45);
    glEnd();

    //Bag front
    glBegin(GL_QUADS);
              glColor3ub(255, 140, 26);
              glVertex2f(3.4,-1.45);
              glVertex2f(3.68,-1.45);
              glVertex2f(3.68,-1.33);
              glVertex2f(3.4,-1.33);
    glEnd();


    //Lorry handle_1
    glBegin(GL_QUADS);
              glColor3ub(64, 64, 64);
              glVertex2f(3.7,-1.45);
              glVertex2f(3.74,-1.45);
              glVertex2f(3.74,-1.42);
              glVertex2f(3.7,-1.42);
    glEnd();

    //Lorry handle_2
    glBegin(GL_QUADS);
              glColor3ub(89, 89, 89);
              glVertex2f(3.7,-1.42);
              glVertex2f(3.73,-1.42);
              glVertex2f(3.73,-1.2);
              glVertex2f(3.7,-1.2);
    glEnd();

    //Lorry handle_3
    glBegin(GL_POLYGON);
              glColor3ub(89, 89, 89);
              glVertex2f(3.7,-1.2);
              glVertex2f(3.8,-1.2);
              glVertex2f(3.8,-1.17);
              glVertex2f(3.72,-1.17);
              glVertex2f(3.71,-1.17);
              glVertex2f(3.71,-1.18);
              glVertex2f(3.71,-1.19);
    glEnd();

    //lorry wheel_1
    GLfloat x7=3.37f; GLfloat y7=-1.51f; GLfloat radius_7 =0.035f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(26, 26, 26);
		glVertex2f(x7, y7);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x7 + (radius_7 * cos(i *  twicePi / triangleAmount)),
			    y7 + (radius_7 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//lorry wheel_2
    GLfloat x8=3.71f; GLfloat y8=-1.51f; GLfloat radius_8 =0.035f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(26, 26, 26);
		glVertex2f(x8, y8);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x8 + (radius_8 * cos(i *  twicePi / triangleAmount)),
			    y8 + (radius_8 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


    //Man
    //left hand
    glBegin(GL_QUADS);
              glColor3ub(255, 140, 26);
              glVertex2f(3.8,-1.2);
              glVertex2f(3.86,-1.12);
              glVertex2f(3.86,-1.07);
              glVertex2f(3.8,-1.17);
    glEnd();

    //Body
    glBegin(GL_POLYGON);
              glColor3ub(0, 128, 255);
              glVertex2f(3.86,-1.27);
              glVertex2f(4,-1.27);
              glVertex2f(4,-1.12);
              glVertex2f(4.01,-1.07);
              glVertex2f(3.86,-1.07);
              glVertex2f(3.86,-1.12);
    glEnd();

    //right hand
    glBegin(GL_QUADS);
              glColor3ub(255, 140, 26);
              glVertex2f(4,-1.12);
              glVertex2f(4.05,-1.2);
              glVertex2f(4.07,-1.2);
              glVertex2f(4.01,-1.07);
    glEnd();


    //right hand_1
    glBegin(GL_POLYGON);
              glColor3ub(255, 191, 0);
              glVertex2f(4.05,-1.2);
              glVertex2f(4.04,-1.23);
              glVertex2f(4.06,-1.24);
              glVertex2f(4.08,-1.24);
              glVertex2f(4.09,-1.23);
              glVertex2f(4.07,-1.2);
    glEnd();

    //legs
    glBegin(GL_POLYGON);
              glColor3ub(0, 64, 128);
              glVertex2f(3.86,-1.27);
              glVertex2f(3.85,-1.47);
              glVertex2f(3.88,-1.48);
              glVertex2f(3.94,-1.3);
              glVertex2f(3.97,-1.48);
              glVertex2f(4,-1.49);
              glVertex2f(4,-1.27);
    glEnd();

    //foot_1
    glBegin(GL_QUADS);
              glColor3ub(13, 13, 13);
              glVertex2f(3.85,-1.47);
              glVertex2f(3.83,-1.51);
              glVertex2f(3.85,-1.52);
              glVertex2f(3.88,-1.48);
    glEnd();

    //foot_2
    glBegin(GL_QUADS);
              glColor3ub(13, 13, 13);
              glVertex2f(3.97,-1.47);
              glVertex2f(3.95,-1.51);
              glVertex2f(3.97,-1.52);
              glVertex2f(4,-1.49);
    glEnd();


    //Head
    glBegin(GL_POLYGON);
              glColor3ub(255, 179, 102);
              glVertex2f(3.94,-1.09);
              glVertex2f(3.99,-1.05);
              glVertex2f(3.99,-1.0);
              glVertex2f(3.94,-0.98);
              glVertex2f(3.89,-1.0);
              glVertex2f(3.88,-1.05);
    glEnd();

    //hair
    glBegin(GL_POLYGON);
              glColor3ub(13, 13, 13);
              glVertex2f(3.89,-1.02);
              glVertex2f(3.9,-1.01);
              glVertex2f(3.91,-1.0);
              glVertex2f(3.93,-1.0);
              glVertex2f(3.95,-1.0);
              glVertex2f(3.97,-1.0);
              glVertex2f(3.98,-1.01);
              glVertex2f(3.99,-1.01);
              glVertex2f(3.99,-1.0);
              glVertex2f(3.94,-0.98);
              glVertex2f(3.89,-1);
    glEnd();

    //Eye_1
    glBegin(GL_QUADS);
              glColor3ub(13, 13, 13);
              glVertex2f(3.9,-1.05);
              glVertex2f(3.92,-1.05);
              glVertex2f(3.92,-1.03);
              glVertex2f(3.9,-1.03);
    glEnd();

    //Eye_2
    glBegin(GL_QUADS);
              glColor3ub(13, 13, 13);
              glVertex2f(3.96,-1.05);
              glVertex2f(3.97,-1.05);
              glVertex2f(3.97,-1.03);
              glVertex2f(3.96,-1.03);
    glEnd();

    //mouth
    glBegin(GL_TRIANGLES);
              glColor3ub(13, 13, 13);
              glVertex2f(3.92,-1.06);
              glVertex2f(3.94,-1.08);
              glVertex2f(3.96,-1.06);
    glEnd();
    glPopMatrix();




////////////////////////////////////////////////////////////////





////////////////////////////////////////////////////////
////////////////////////////////////////////////////////


    // Main runway
    glBegin(GL_QUADS);
              glColor3ub(89,89,89);
              glVertex2f(-5,-3.53);
              glVertex2f(5,-3.53);
              glVertex2f(5,-2);
              glVertex2f(-5,-2);
    glEnd();



    // Runway up line/////////// Md. Ibrahim
    /////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////
    glBegin(GL_QUADS);
              glColor3ub(204, 204, 204);
              glVertex2f(-5,-2);
              glVertex2f(5,-2);
              glVertex2f(5,-1.8);
              glVertex2f(-5,-1.8);
    glEnd();

    //Runway light_1
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(-4.7,-1.95);
              glVertex2f(-4.6,-1.95);
              glVertex2f(-4.6,-1.85);
              glVertex2f(-4.62,-1.82);
              glVertex2f(-4.68,-1.82);
              glVertex2f(-4.7,-1.85);

    glEnd();

    //Runway light_2
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(-4,-1.95);
              glVertex2f(-3.9,-1.95);
              glVertex2f(-3.9,-1.85);
              glVertex2f(-3.92,-1.82);
              glVertex2f(-3.98,-1.82);
              glVertex2f(-4,-1.85);

    glEnd();

    //Runway light_3
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(-3.3,-1.95);
              glVertex2f(-3.2,-1.95);
              glVertex2f(-3.2,-1.85);
              glVertex2f(-3.22,-1.82);
              glVertex2f(-3.28,-1.82);
              glVertex2f(-3.3,-1.85);

    glEnd();

    //Runway light_4
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(-2.6,-1.95);
              glVertex2f(-2.5,-1.95);
              glVertex2f(-2.5,-1.85);
              glVertex2f(-2.52,-1.82);
              glVertex2f(-2.58,-1.82);
              glVertex2f(-2.6,-1.85);

    glEnd();

    //Runway light_5
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(-1.9,-1.95);
              glVertex2f(-1.8,-1.95);
              glVertex2f(-1.8,-1.85);
              glVertex2f(-1.82,-1.82);
              glVertex2f(-1.88,-1.82);
              glVertex2f(-1.9,-1.85);

    glEnd();

    //Runway light_6
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(-1.2,-1.95);
              glVertex2f(-1.1,-1.95);
              glVertex2f(-1.1,-1.85);
              glVertex2f(-1.12,-1.82);
              glVertex2f(-1.18,-1.82);
              glVertex2f(-1.2,-1.85);

    glEnd();

    //Runway light_7
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(-0.5,-1.95);
              glVertex2f(-0.4,-1.95);
              glVertex2f(-0.4,-1.85);
              glVertex2f(-0.42,-1.82);
              glVertex2f(-0.48,-1.82);
              glVertex2f(-0.5,-1.85);

    glEnd();

    //Runway light_8
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(0.2,-1.95);
              glVertex2f(0.3,-1.95);
              glVertex2f(0.3,-1.85);
              glVertex2f(0.28,-1.82);
              glVertex2f(0.22,-1.82);
              glVertex2f(0.2,-1.85);

    glEnd();


    //Runway light_9
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(0.9,-1.95);
              glVertex2f(1,-1.95);
              glVertex2f(1,-1.85);
              glVertex2f(0.98,-1.82);
              glVertex2f(0.92,-1.82);
              glVertex2f(0.9,-1.85);

    glEnd();


    //Runway light_10
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(1.6,-1.95);
              glVertex2f(1.7,-1.95);
              glVertex2f(1.7,-1.85);
              glVertex2f(1.68,-1.82);
              glVertex2f(1.62,-1.82);
              glVertex2f(1.6,-1.85);

    glEnd();


    //Runway light_11
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(2.3,-1.95);
              glVertex2f(2.4,-1.95);
              glVertex2f(2.4,-1.85);
              glVertex2f(2.38,-1.82);
              glVertex2f(2.32,-1.82);
              glVertex2f(2.3,-1.85);

    glEnd();


    //Runway light_12
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(3,-1.95);
              glVertex2f(3.1,-1.95);
              glVertex2f(3.1,-1.85);
              glVertex2f(3.08,-1.82);
              glVertex2f(3.02,-1.82);
              glVertex2f(3,-1.85);

    glEnd();


    //Runway light_13
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(3.7,-1.95);
              glVertex2f(3.8,-1.95);
              glVertex2f(3.8,-1.85);
              glVertex2f(3.78,-1.82);
              glVertex2f(3.72,-1.82);
              glVertex2f(3.7,-1.85);

    glEnd();


    //Runway light_14
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(4.4,-1.95);
              glVertex2f(4.5,-1.95);
              glVertex2f(4.5,-1.85);
              glVertex2f(4.48,-1.82);
              glVertex2f(4.42,-1.82);
              glVertex2f(4.4,-1.85);

    glEnd();







////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
    //Md. Ibrahim
    // Runway line
    glBegin(GL_QUADS);
              glColor3ub(255, 187, 51);
              glVertex2f(-5,-2.3);
              glVertex2f(-2.8,-2.3);
              glVertex2f(-2.8,-2.1);
              glVertex2f(-5,-2.1);
    glEnd();
      // Runway line2
    glBegin(GL_QUADS);
              glColor3ub(255, 187, 51);
              glVertex2f(-5,-2.7);
              glVertex2f(-2.8,-2.7);
              glVertex2f(-2.8,-2.5);
              glVertex2f(-5,-2.5);
    glEnd();
      // Runway line3
    glBegin(GL_QUADS);
              glColor3ub(255, 187, 51);
              glVertex2f(-5,-3.1);
              glVertex2f(-2.8,-3.1);
              glVertex2f(-2.8,-2.9);
              glVertex2f(-5,-2.9);
    glEnd();
    // Runway line3
    glBegin(GL_QUADS);
              glColor3ub(255, 187, 51);
              glVertex2f(-5,-3.5);
              glVertex2f(-2.8,-3.5);
              glVertex2f(-2.8,-3.3);
              glVertex2f(-5,-3.3);
    glEnd();
       // Runway line3
    glBegin(GL_QUADS);
              glColor3ub(255, 187, 51);
              glVertex2f(-1,-2.9);
              glVertex2f(1.01,-2.9);
              glVertex2f(1.01,-2.7);
              glVertex2f(-1,-2.7);
    glEnd();
     // Runway line3
    glBegin(GL_QUADS);
              glColor3ub(255, 187, 51);
              glVertex2f(2.49,-2.9);
              glVertex2f(4.5,-2.9);
              glVertex2f(4.5,-2.7);
              glVertex2f(2.49,-2.7);
    glEnd();

////////////////////////////////////////////////////
////////////////////////////////////////////////////

    // Runway down Line
    glBegin(GL_QUADS);
              glColor3ub(204, 204, 204);
              glVertex2f(-5,-3.78);
              glVertex2f(5,-3.78);
              glVertex2f(5,-3.53);
              glVertex2f(-5,-3.53);
    glEnd();


    //Runway light_1
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(-4.7,-3.7);
              glVertex2f(-4.6,-3.7);
              glVertex2f(-4.6,-3.6);
              glVertex2f(-4.62,-3.57);
              glVertex2f(-4.68,-3.57);
              glVertex2f(-4.7,-3.6);

    glEnd();

    //Runway light_2
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(-4,-3.7);
              glVertex2f(-3.9,-3.7);
              glVertex2f(-3.9,-3.6);
              glVertex2f(-3.92,-3.57);
              glVertex2f(-3.98,-3.57);
              glVertex2f(-4,-3.6);

    glEnd();

    //Runway light_3
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(-3.3,-3.7);
              glVertex2f(-3.2,-3.7);
              glVertex2f(-3.2,-3.6);
              glVertex2f(-3.22,-3.57);
              glVertex2f(-3.28,-3.57);
              glVertex2f(-3.3,-3.6);

    glEnd();

    //Runway light_4
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(-2.6,-3.7);
              glVertex2f(-2.5,-3.7);
              glVertex2f(-2.5,-3.6);
              glVertex2f(-2.52,-3.57);
              glVertex2f(-2.58,-3.57);
              glVertex2f(-2.6,-3.6);

    glEnd();

    //Runway light_5
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(-1.9,-3.7);
              glVertex2f(-1.8,-3.7);
              glVertex2f(-1.8,-3.6);
              glVertex2f(-1.82,-3.57);
              glVertex2f(-1.88,-3.57);
              glVertex2f(-1.9,-3.6);

    glEnd();

    //Runway light_6
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(-1.2,-3.7);
              glVertex2f(-1.1,-3.7);
              glVertex2f(-1.1,-3.6);
              glVertex2f(-1.12,-3.57);
              glVertex2f(-1.18,-3.57);
              glVertex2f(-1.2,-3.6);

    glEnd();

    //Runway light_7
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(-0.5,-3.7);
              glVertex2f(-0.4,-3.7);
              glVertex2f(-0.4,-3.6);
              glVertex2f(-0.42,-3.57);
              glVertex2f(-0.48,-3.57);
              glVertex2f(-0.5,-3.6);

    glEnd();

    //Runway light_8
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(0.2,-3.7);
              glVertex2f(0.3,-3.7);
              glVertex2f(0.3,-3.6);
              glVertex2f(0.28,-3.57);
              glVertex2f(0.22,-3.57);
              glVertex2f(0.2,-3.6);

    glEnd();


    //Runway light_9
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(0.9,-3.7);
              glVertex2f(1,-3.7);
              glVertex2f(1,-3.6);
              glVertex2f(0.98,-3.57);
              glVertex2f(0.92,-3.57);
              glVertex2f(0.9,-3.6);

    glEnd();


    //Runway light_10
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(1.6,-3.7);
              glVertex2f(1.7,-3.7);
              glVertex2f(1.7,-3.6);
              glVertex2f(1.68,-3.57);
              glVertex2f(1.62,-3.57);
              glVertex2f(1.6,-3.6);

    glEnd();


    //Runway light_11
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(2.3,-3.7);
              glVertex2f(2.4,-3.7);
              glVertex2f(2.4,-3.6);
              glVertex2f(2.38,-3.57);
              glVertex2f(2.32,-3.57);
              glVertex2f(2.3,-3.6);

    glEnd();


    //Runway light_12
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(3,-3.7);
              glVertex2f(3.1,-3.7);
              glVertex2f(3.1,-3.6);
              glVertex2f(3.08,-3.57);
              glVertex2f(3.02,-3.57);
              glVertex2f(3,-3.6);

    glEnd();


    //Runway light_13
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(3.7,-3.7);
              glVertex2f(3.8,-3.7);
              glVertex2f(3.8,-3.6);
              glVertex2f(3.78,-3.57);
              glVertex2f(3.72,-3.57);
              glVertex2f(3.7,-3.6);

    glEnd();


    //Runway light_14
    glBegin(GL_POLYGON);
              glColor3ub(255, 128, 128);
              glVertex2f(4.4,-3.7);
              glVertex2f(4.5,-3.7);
              glVertex2f(4.5,-3.6);
              glVertex2f(4.48,-3.57);
              glVertex2f(4.42,-3.57);
              glVertex2f(4.4,-3.6);

    glEnd();




// Runway Plane takeoff////////// Md. Ibrahim
////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

    glPushMatrix();
    glTranslatef(position,position_2,0);

    //Plane body
    glBegin(GL_POLYGON);
              glColor3ub(242, 242, 242);
              glVertex2f(-4.55,-2.62);
              glVertex2f(-4.3,-2.73);
              glVertex2f(-4.13,-2.8);
              glVertex2f(-3.86,-2.89);
              glVertex2f(-3.5,-2.9);
              glVertex2f(-3.5,-2.9);
              glVertex2f(-2.3,-2.9);
              glVertex2f(-2.16,-2.89);
              glVertex2f(-2.06,-2.87);
              glVertex2f(-1.97,-2.85);
              glVertex2f(-1.91,-2.84);
              glVertex2f(-1.87,-2.8);
              glVertex2f(-1.83,-2.76);
              glVertex2f(-1.81,-2.7);
              glVertex2f(-1.81,-2.65);
              glVertex2f(-1.84,-2.59);
              glVertex2f(-1.89,-2.53);
              glVertex2f(-1.92,-2.49);
              glVertex2f(-1.98,-2.45);
              glVertex2f(-2.03,-2.43);
              glVertex2f(-2.1,-2.41);
              glVertex2f(-2.2,-2.4);
              glVertex2f(-4.2,-2.4);
              glVertex2f(-4.37,-2.4);
              glVertex2f(-4.49,-2.4);
              glVertex2f(-4.56,-2.41);
              glVertex2f(-4.62,-2.47);
              glVertex2f(-4.63,-2.55);
    glEnd();


    //wheel stand_1
    glBegin(GL_QUADS);
              glColor3ub(26, 26, 26);
              glVertex2f(-2.42,-2.97);
              glVertex2f(-2.4,-2.97);
              glVertex2f(-2.4,-2.9);
              glVertex2f(-2.42,-2.9);
    glEnd();



    //Wheel
    GLfloat x1=-2.41f; GLfloat y1=-2.99f; GLfloat radius_1 =0.035f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(26, 26, 26);
		glVertex2f(x1, y1);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius_1 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius_1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//Inner wheel_1
	GLfloat x2=-2.41f; GLfloat y2=-2.99f; GLfloat radius_2 =0.022f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(128, 128, 128);
		glVertex2f(x2, y2);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x2 + (radius_2 * cos(i *  twicePi / triangleAmount)),
			    y2 + (radius_2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();




    //wheel stand_2
    glBegin(GL_QUADS);
              glColor3ub(26, 26, 26);
              glVertex2f(-3.7,-2.94);
              glVertex2f(-3.68,-2.94);
              glVertex2f(-3.68,-2.9);
              glVertex2f(-3.69,-2.89);
    glEnd();

    //Whee_2
    GLfloat x3=-3.68f; GLfloat y3=-2.95f; GLfloat radius_3 =0.03f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(26, 26, 26);
		glVertex2f(x3, y3);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x3 + (radius_3 * cos(i *  twicePi / triangleAmount)),
			    y3 + (radius_3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//Inner wheel_2
	GLfloat x4=-3.68f; GLfloat y4=-2.95f; GLfloat radius_4 =0.022f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(128, 128, 128);
		glVertex2f(x4, y4);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x4 + (radius_4 * cos(i *  twicePi / triangleAmount)),
			    y4 + (radius_4 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();




    //wheel stand_3
    glBegin(GL_QUADS);
              glColor3ub(26, 26, 26);
              glVertex2f(-3.74,-2.94);
              glVertex2f(-3.72,-2.94);
              glVertex2f(-3.72,-2.89);
              glVertex2f(-3.74,-2.89);
    glEnd();


    //Whee_3
    GLfloat x5=-3.73f; GLfloat y5=-2.95f; GLfloat radius_5 =0.03f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(26, 26, 26);
		glVertex2f(x5, y5);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x5 + (radius_5 * cos(i *  twicePi / triangleAmount)),
			    y5 + (radius_5 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//Inner wheel_3
	GLfloat x6=-3.73f; GLfloat y6=-2.95f; GLfloat radius_6 =0.022f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(128, 128, 128);
		glVertex2f(x6, y6);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x6 + (radius_6 * cos(i *  twicePi / triangleAmount)),
			    y6 + (radius_6 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();




    //Windows
    //Pilot window
    glBegin(GL_POLYGON);
              glColor3ub(128, 128, 128);
              glVertex2f(-1.87,-2.55);
              glVertex2f(-2.1,-2.55);
              glVertex2f(-2.12,-2.54);
              glVertex2f(-2.13,-2.52);
              glVertex2f(-2.12,-2.51);
              glVertex2f(-2.1,-2.5);
              glVertex2f(-1.92,-2.5);
              glVertex2f(-1.89,-2.53);

    glEnd();

    //Door
    glBegin(GL_QUADS);
              glColor3ub(128, 128, 128);
              glVertex2f(-2.3,-2.68);
              glVertex2f(-2.23,-2.68);
              glVertex2f(-2.23,-2.5);
              glVertex2f(-2.3,-2.5);
    glEnd();

    //windows
    //1
    glBegin(GL_QUADS);
              glColor3ub(128, 128, 128);
              glVertex2f(-2.45,-2.55);
              glVertex2f(-2.4,-2.55);
              glVertex2f(-2.4,-2.5);
              glVertex2f(-2.45,-2.5);
    glEnd();

    //2
    glBegin(GL_QUADS);
              glColor3ub(128, 128, 128);
              glVertex2f(-2.6,-2.55);
              glVertex2f(-2.55,-2.55);
              glVertex2f(-2.55,-2.5);
              glVertex2f(-2.6,-2.5);
    glEnd();

    //3
    glBegin(GL_QUADS);
              glColor3ub(128, 128, 128);
              glVertex2f(-2.75,-2.55);
              glVertex2f(-2.7,-2.55);
              glVertex2f(-2.7,-2.5);
              glVertex2f(-2.75,-2.5);
    glEnd();

    //4
    glBegin(GL_QUADS);
              glColor3ub(128, 128, 128);
              glVertex2f(-2.9,-2.55);
              glVertex2f(-2.85,-2.55);
              glVertex2f(-2.85,-2.5);
              glVertex2f(-2.9,-2.5);
    glEnd();

    //5
    glBegin(GL_QUADS);
              glColor3ub(128, 128, 128);
              glVertex2f(-3.05,-2.55);
              glVertex2f(-3,-2.55);
              glVertex2f(-3,-2.5);
              glVertex2f(-3.05,-2.5);
    glEnd();

    //6
    glBegin(GL_QUADS);
              glColor3ub(128, 128, 128);
              glVertex2f(-3.2,-2.55);
              glVertex2f(-3.15,-2.55);
              glVertex2f(-3.15,-2.5);
              glVertex2f(-3.2,-2.5);
    glEnd();

    //7
    glBegin(GL_QUADS);
              glColor3ub(128, 128, 128);
              glVertex2f(-3.35,-2.55);
              glVertex2f(-3.3,-2.55);
              glVertex2f(-3.3,-2.5);
              glVertex2f(-3.35,-2.5);
    glEnd();

    //8
    glBegin(GL_QUADS);
              glColor3ub(128, 128, 128);
              glVertex2f(-3.5,-2.55);
              glVertex2f(-3.45,-2.55);
              glVertex2f(-3.45,-2.5);
              glVertex2f(-3.5,-2.5);
    glEnd();

    //9
    glBegin(GL_QUADS);
              glColor3ub(128, 128, 128);
              glVertex2f(-3.65,-2.55);
              glVertex2f(-3.6,-2.55);
              glVertex2f(-3.6,-2.5);
              glVertex2f(-3.65,-2.5);
    glEnd();

    //10
    glBegin(GL_QUADS);
              glColor3ub(128, 128, 128);
              glVertex2f(-3.8,-2.55);
              glVertex2f(-3.75,-2.55);
              glVertex2f(-3.75,-2.5);
              glVertex2f(-3.8,-2.5);
    glEnd();





    //Engine_1
    glBegin(GL_POLYGON);
              glColor3ub(217, 217, 217);
              glVertex2f(-3.23,-3);
              glVertex2f(-3.22,-3.02);
              glVertex2f(-3.21,-3.03);
              glVertex2f(-3.19,-3.03);
              glVertex2f(-3.16,-3.04);
              glVertex2f(-3.04,-3.04);
              glVertex2f(-3.03,-3.04);
              glVertex2f(-3.02,-3.03);
              glVertex2f(-3.02,-3.02);
              glVertex2f(-3.02,-2.94);
              glVertex2f(-3.02,-2.93);
              glVertex2f(-3.03,-2.92);
              glVertex2f(-3.04,-2.92);
              glVertex2f(-3.05,-2.92);
              glVertex2f(-3.23,-2.98);
    glEnd();

    //Inner circle of the engine
    glBegin(GL_POLYGON);
              glColor3ub(51, 51, 51);
              glVertex2f(-3.05,-3.02);
              glVertex2f(-3.04,-3.02);
              glVertex2f(-3.04,-3.02);
              glVertex2f(-3.04,-3.02);
              glVertex2f(-3.03,-3.02);
              glVertex2f(-3.03,-3.02);
              glVertex2f(-3.03,-2.94);
              glVertex2f(-3.03,-2.94);
              glVertex2f(-3.04,-2.94);
              glVertex2f(-3.04,-2.94);
              glVertex2f(-3.04,-2.94);
              glVertex2f(-3.05,-2.94);
    glEnd();



    //Engine_2
    glBegin(GL_POLYGON);
              glColor3ub(217, 217, 217);
              glVertex2f(-3.52,-3.09);
              glVertex2f(-3.52,-3.1);
              glVertex2f(-3.51,-3.11);
              glVertex2f(-3.49,-3.12);
              glVertex2f(-3.47,-3.13);
              glVertex2f(-3.44,-3.14);
              glVertex2f(-3.32,-3.14);
              glVertex2f(-3.31,-3.13);
              glVertex2f(-3.3,-3.12);
              glVertex2f(-3.3,-3.04);
              glVertex2f(-3.31,-3.03);
              glVertex2f(-3.32,-3.02);
              glVertex2f(-3.41,-3.04);
              glVertex2f(-3.52,-3.07);

    glEnd();

    //Inner circle of the engine
    glBegin(GL_POLYGON);
              glColor3ub(51, 51, 51);
              glVertex2f(-3.33,-3.12);
              glVertex2f(-3.32,-3.12);
              glVertex2f(-3.32,-3.12);
              glVertex2f(-3.32,-3.12);
              glVertex2f(-3.31,-3.12);
              glVertex2f(-3.31,-3.12);
              glVertex2f(-3.31,-3.04);
              glVertex2f(-3.31,-3.04);
              glVertex2f(-3.32,-3.03);
              glVertex2f(-3.32,-3.04);
              glVertex2f(-3.32,-3.04);
              glVertex2f(-3.33,-3.04);
    glEnd();





    // Wing_1
    glBegin(GL_POLYGON);
              glColor3ub(51, 133, 255);
              glVertex2f(-4.2,-3.2);
              glVertex2f(-4.08,-3.19);
              glVertex2f(-4.01,-3.18);
              glVertex2f(-3.95,-3.18);
              glVertex2f(-3.89,-3.17);
              glVertex2f(-3.8,-3.15);
              glVertex2f(-3.71,-3.13);
              glVertex2f(-3.62,-3.11);
              glVertex2f(-3.52,-3.08);
              glVertex2f(-3.43,-3.05);
              glVertex2f(-3.34,-3.03);
              glVertex2f(-3.24,-3);
              glVertex2f(-3.15,-2.96);
              glVertex2f(-3.05,-2.93);
              glVertex2f(-2.96,-2.88);
              glVertex2f(-2.89,-2.85);
              glVertex2f(-2.82,-2.81);
              glVertex2f(-2.74,-2.76);
              glVertex2f(-2.66,-2.7);
              glVertex2f(-3.1,-2.7);
    glEnd();


    // Tail_1
    glBegin(GL_QUADS);
              glColor3ub(51, 133, 255);
              glVertex2f(-4.37,-2.4);
              glVertex2f(-4,-2.4);
              glVertex2f(-4.22,-2);
              glVertex2f(-4.46,-2);
    glEnd();

    // Tail_2
    glBegin(GL_QUADS);
              glColor3ub(51, 133, 255);
              glVertex2f(-4.55,-2.85);
              glVertex2f(-4.05,-2.6);
              glVertex2f(-4.3,-2.6);
              glVertex2f(-4.7,-2.85);
    glEnd();

    glPopMatrix();


/////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////






// Middle Space
////////////////////////////////////////////////////


///////////////////////////////////////////////////
    glutTimerFunc(10000,evening_demo,0);


	glFlush();  // Render now
}


void morning_demo(int val)
{
    glutDisplayFunc(morning);
    sun_update(1);
    airportSound();
}



void animaiton(int val)
{
    glutTimerFunc(3000,update,0);
    glutTimerFunc(20000,update_1,0);
	glutTimerFunc(22000,update_2,0);
	glutTimerFunc(100,lorry_update_1,0);
	glutTimerFunc(100,lorry_update_2,0);
	glutTimerFunc(100, update2, 0);
    glutTimerFunc(100, update3, 0);
    glutTimerFunc(100, updater, 0);
    glutTimerFunc(100,updateEnginnerMan,0);
    glutTimerFunc(100,updateRain,0);
    glutTimerFunc(10000,updateSun,0);
    glutTimerFunc(100,updateLorry,0);


    glutMouseFunc(handleMouse);
    glutKeyboardFunc(handleKeypress);
}




/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("Osmani International Airport");        // Create a window with the given title
	glutInitWindowSize(500, 500);       // Set the window's initial width & height
	gluOrtho2D(-5,5,-4,5);              //(L,R,B,T)
	morning_demo(1);
    animaiton(1);
    glutIdleFunc(Idle);            // Register display callback handler for window re-paint
	glutMainLoop();                  // Enter the event-processing loop
	return 0;
}
