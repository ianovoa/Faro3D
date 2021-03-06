/*************************************************************************/
/*                                                                       */
/*								modelado.c                               */
/*                                                                       */
/*************************************************************************/

/***************** INCLUDES DE LAS LIBRERIAS NECESARIAS ******************/
#include "glig.h"
#include "modelado.h"


/******************************************************************************************/
/* Crea los distintos objetos.															  */
/* Parametros: ninguno                                                                    */
/* Salida: Ninguna                                                                        */
/******************************************************************************************/
void IniciaDisplayLists (void){
    CreaAbeto ();
	CreaArbol();
	CreaCarballo();
	CreaPomo();
	CreaPuerta();
	CreaVentana();
	CreaVidrio();
	CreaOjoBuey();
	CreaSuelo();
	CreaBuzon();
	CreaFaro();
	CreaCasa();
	CreaEscena();
}

void CreaAbeto(void) {
	abeto = glGenLists(1);
	if (abeto != 0) { // Cero no es un identificador valido para una display list
		glNewList(abeto, GL_COMPILE);

		//  Codigo para dibujar el abeto
		//  Copa
		glPushMatrix();
			glColor3f(0.05f, 0.38f, 0.32f);
			glScalef(0.75f, 1.0f, 0.75f);
			igSolidCone(100, 100);
		glPopMatrix();

		glPushMatrix();
			glScalef(0.5625f, 1.0f, 0.5625f);
			glTranslatef(0.0f, 0.25f, 0.0f);
			igSolidCone(100, 100);
		glPopMatrix();

		glPushMatrix();
			glScalef(0.421875f, 1.0f, 0.421875f);
			glTranslatef(0.0f, 0.5f, 0.0f);
			igSolidCone(100, 100);
		glPopMatrix();

		//  Tronco
		glPushMatrix();
			glColor3f(0.43f, 0.17f, 0.0f);
			glScalef(0.1f, 1.0f, 0.1f);
			igSolidCylinder(100, 100);
		glPopMatrix();
		glEndList();
	}
}

void CreaArbol() {
	arbol = glGenLists(1);
	if (arbol != 0) { // Cero no es un identificador valido para una display list
		glNewList(arbol, GL_COMPILE);

		//  Codigo para dibujar el arbol
		//  Copa
		glPushMatrix();
			glColor3f(0.18f, 0.8f, 0.44f);
			glScalef(0.5f, 1.0f, 0.5f);
			glTranslatef(0.0f, 0.5f, 0.0f);
			igSolidSphere(100,100);
		glPopMatrix();

		//  Tronco
		glPushMatrix();
			glColor3f(0.43f, 0.17f, 0.0f);
			glScalef(0.1f, 1.0f, 0.1f);
			igSolidCylinder(100, 100);
		glPopMatrix();

		glEndList();
	}
}

void CreaCarballo() {
	carballo = glGenLists(1);
	if (carballo != 0) { // Cero no es un identificador valido para una display list
		glNewList(carballo, GL_COMPILE);

		//  Codigo para dibujar el carballo
		//  Copa
		glPushMatrix();
			glColor3f(0.11f, 0.51f, 0.28f);
			glScalef(1.0f, 0.9f, 1.0f);
			glTranslatef(0.0f, 0.6f, 0.0f);
			igSolidSphere(100, 100);
		glPopMatrix();

		//  Tronco
		glPushMatrix();
			glColor3f(0.43f, 0.17f, 0.0f);
			glScalef(0.1f, 1.0f, 0.1f);
			igSolidCylinder(100, 100);
		glPopMatrix();

		glEndList();
	}
}

void CreaPomo() {
	pomo = glGenLists(1);
	if (pomo != 0) { // Cero no es un identificador valido para una display list
		glNewList(pomo, GL_COMPILE);

		//  Codigo para dibujar el pomo
		glPushMatrix();
			glColor3f(0.9f, 0.91f, 0.91f);
			glScalef(0.3f, 0.5f, 0.3f);
			igSolidCylinder(100, 100);
		glPopMatrix();

		glPushMatrix();
			glColor3f(0.9f, 0.91f, 0.91f);
			glScalef(1.0f, 0.35f, 1.0f);
			glTranslatef(0.0f, 0.5f, 0.0f);
			igSolidSphere(100, 100);
		glPopMatrix();

		glEndList();
	}
}

void CreaPuerta() {
	puerta = glGenLists(1);
	if (puerta != 0) { // Cero no es un identificador valido para una display list
		glNewList(puerta, GL_COMPILE);

		//  Codigo para dibujar la puerta
		//  Tabla
		glPushMatrix();
			glColor3f(0.9f, 0.6f, 0.4f);
			glScalef(0.85f, 2.0f, 0.1f);
			igSolidCube();
		glPopMatrix();

		//  Pomo
		glPushMatrix();
			glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
			glScalef(0.05f, 0.1f, 0.05f);
			glTranslatef(3.0f, 1.0f, 0.0f);
			glCallList(pomo);
		glPopMatrix();

		glEndList();
	}
}

void CreaVentana() {
	ventana = glGenLists(1);
	if (ventana != 0) { // Cero no es un identificador valido para una display list
		glNewList(ventana, GL_COMPILE);

		//  Codigo para dibujar la puerta
		//  Marco
		glPushMatrix();
			glColor3f(0.9f, 0.91f, 0.91f);
			glTranslatef(0.35f, 0.0f, 0.0f);
			glScalef(0.1f, 0.8f, 0.1f);
			igSolidCube();
		glPopMatrix();

		glPushMatrix();
			glColor3f(0.9f, 0.91f, 0.91f);
			glTranslatef(-0.35f, 0.0f, 0.0f);
			glScalef(0.1f, 0.8f, 0.1f);
			igSolidCube();
		glPopMatrix();

		glPushMatrix();
			glColor3f(0.9f, 0.91f, 0.91f);
			glTranslatef(0.0f, 0.45f, 0.0f);
			glScalef(0.8f, 0.1f, 0.1f);
			igSolidCube();
		glPopMatrix();

		glPushMatrix();
			glColor3f(0.9f, 0.91f, 0.91f);
			glTranslatef(0.0f, -0.45f, 0.0f);
			glScalef(0.8f, 0.1f, 0.1f);
			igSolidCube();
		glPopMatrix();

		//  Vidrio
		glPushMatrix();
			glColor3f(0.68f, 0.84f, 0.95f);
			glScalef(0.75f, 0.8f, 0.05f);
			igSolidCube();
		glPopMatrix();

		//  Marco interno
		glPushMatrix();
			glColor3f(0.9f, 0.91f, 0.91f);
			glScalef(0.8f, 0.08f, 0.07f);
			igSolidCube();
		glPopMatrix();

		glPushMatrix();
			glColor3f(0.9f, 0.91f, 0.91f);
			glScalef(0.08f, 0.8f, 0.07f);
			igSolidCube();
		glPopMatrix();

		glEndList();
	}
}

void CreaVidrio() {
	vidrio = glGenLists(1);
	if (vidrio != 0) { // Cero no es un identificador valido para una display list
		glNewList(vidrio, GL_COMPILE);

		//  Codigo para dibujar el vidrio
		//  Marco
		glPushMatrix();
			glColor3f(0.9f, 0.91f, 0.91f);
			glTranslatef(0.7f, 0.0f, 0.0f);
			glScalef(0.1f, 1.5f, 0.1f);
			igSolidCube();
		glPopMatrix();

		glPushMatrix();
			glColor3f(0.9f, 0.91f, 0.91f);
			glTranslatef(-0.7f, 0.0f, 0.0f);
			glScalef(0.1f, 1.5f, 0.1f);
			igSolidCube();
		glPopMatrix();

		glPushMatrix();
			glColor3f(0.9f, 0.91f, 0.91f);
			glTranslatef(0.0f, 0.8f, 0.0f);
			glScalef(1.5f, 0.1f, 0.1f);
			igSolidCube();
		glPopMatrix();

		glPushMatrix();
			glColor3f(0.9f, 0.91f, 0.91f);
			glTranslatef(0.0f, -0.8f, 0.0f);
			glScalef(1.5f, 0.1f, 0.1f);
			igSolidCube();
		glPopMatrix();

		//  Vidrio
		glPushMatrix();
			glColor3f(0.68f, 0.84f, 0.95f);
			glScalef(1.45f, 1.5f, 0.05f);
			igSolidCube();
		glPopMatrix();

		glEndList();
	}
}

void CreaOjoBuey() {
	ojo = glGenLists(1);
	if (ojo != 0) { // Cero no es un identificador valido para una display list
		glNewList(ojo, GL_COMPILE);

		//  Codigo para dibujar ojo de buey
		//  Marco
		glPushMatrix();
			glColor3f(0.9f, 0.91f, 0.91f);
			glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
			glScalef(0.5f, 0.01f, 0.5f);
			igSolidCone(100, 100);
		glPopMatrix();

		glPushMatrix();
			glColor3f(0.9f, 0.91f, 0.91f);
			glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
			glTranslatef(0.0f, -0.25f, 0.0f);
			glScalef(0.5f, 0.25f, 0.5f);
			igSolidCylinder(100, 100);
		glPopMatrix();

		//  Vidrio
		glPushMatrix();
			glColor3f(0.68f, 0.84f, 0.95f);
			glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
			glTranslatef(0.0f, 0.01f, 0.0f);
			glScalef(0.375f, 0.01f, 0.375f);
			igSolidCone(100, 100);
		glPopMatrix();

		//  Marco interno
		glPushMatrix();
			glColor3f(0.9f, 0.91f, 0.91f);
			glScalef(0.75f, 0.08f, 0.07f);
			igSolidCube();
		glPopMatrix();

		glEndList();
	}
}

void CreaSuelo() {
	suelo = glGenLists(1);
	if (suelo != 0) { // Cero no es un identificador valido para una display list
		glNewList(suelo, GL_COMPILE);

		//  Codigo para dibujar el faro
		//  Tierra
		glPushMatrix();
			glColor3f(0.21f, 0.41f, 0.18f);
			glTranslatef(15.0f, 0.0f, 0.0f);
			glScalef(40.0f, 1.0f, 50.0f);
			igSolidCube();
		glPopMatrix();

		//  Mar
		glPushMatrix();
			glColor3f(0.23f, 0.51f, 0.74f);
			glTranslatef(-10.0f, 0.0f, 0.0f);
			glScalef(10.0f, 1.0f, 50.0f);
			igSolidCube();
		glPopMatrix();

		glEndList();
	}
}

void CreaBuzon() {
	buzon = glGenLists(1);
	if (buzon != 0) { // Cero no es un identificador valido para una display list
		glNewList(buzon, GL_COMPILE);

		//  Codigo para dibujar el buzon
		//  Poster
		glPushMatrix();
			glColor3f(0.9f, 0.6f, 0.4f);
			glScalef(0.1f, 0.75f, 0.1f);
			igSolidCube();
		glPopMatrix();

		//  Caja
		glPushMatrix();
			glColor3f(0.54f, 0.58f, 0.59f);
			glTranslatef(0.0f, 0.5f, 0.0f);
			glScalef(0.25f, 0.25f, 0.5f);
			igSolidCube();
		glPopMatrix();

		glPushMatrix();
			glColor3f(0.54f, 0.58f, 0.59f);
			glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
			glTranslatef(0.0f, 0.25f, -0.625f);
			glScalef(0.125f, 0.005f, 0.125f);
			igSolidCone(100, 100);
		glPopMatrix();

		glPushMatrix();
			glColor3f(0.54f, 0.58f, 0.59f);
			glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
			glTranslatef(0.0f, 0.0f, -0.625f);
			glScalef(0.125f, 0.25f, 0.125f);
			igSolidCylinder(100, 100);
		glPopMatrix();

		glPushMatrix();
			glColor3f(0.54f, 0.58f, 0.59f);
			glRotatef(-90.0f, 1.0f, 0.0f, 0.0f);
			glTranslatef(0.0f, 0.25f, 0.625f);
			glScalef(0.125f, 0.005f, 0.125f);
			igSolidCone(100, 100);
		glPopMatrix();

		//  Banderilla
		glPushMatrix();
			glColor3f(0.75f, 0.0f, 0.0f);
			glTranslatef(0.145f, 0.65f, 0.15f);
			glScalef(0.025f, 0.25f, 0.025f);
			igSolidCube();
		glPopMatrix();

		glPushMatrix();
			glColor3f(0.75f, 0.0f, 0.0f);
			glRotatef(90.0f, 0.0f, 0.0f, 1.0f);
			glTranslatef(0.7125f, -0.145f, 0.215f);
			glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
			glScalef(0.125f, 0.125f, 0.02f);
			igTriangularPrism();
		glPopMatrix();

		glEndList();
	}
}

void CreaFaro() {
	faro = glGenLists(1);
	if (faro != 0) { // Cero no es un identificador valido para una display list
		glNewList(faro, GL_COMPILE);

		//  Codigo para dibujar el faro
		//  Base
		glPushMatrix();
			glColor3f(0.48f, 0.49f, 0.49f);
			glScalef(4.5f, 1.0f, 4.5f);
			igSolidCone(100,100);
		glPopMatrix();

		//  Torre
		glPushMatrix();
			glColor3f(0.57f, 0.17f, 0.13f);
			glTranslatef(0.0f, 3.0f, 0.0f);
			glScalef(2.5f, 3.0f, 2.5f);
			igSolidCylinder(100, 100);
		glPopMatrix();

		glPushMatrix();
			glColor3f(0.93f, 0.94f, 0.95f);
			glTranslatef(0.0f, 9.0f, 0.0f);
			glScalef(2.5f, 3.0f, 2.5f);
			igSolidCylinder(100, 100);
		glPopMatrix();

		glPushMatrix();
			glColor3f(0.57f, 0.17f, 0.13f);
			glTranslatef(0.0f, 15.0f, 0.0f);
			glScalef(2.5f, 3.0f, 2.5f);
			igSolidCylinder(100, 100);
		glPopMatrix();

		//  Cornisa
		glPushMatrix();
			glColor3f(0.93f, 0.94f, 0.95f);
			glTranslatef(0.0f, 18.0f, 0.0f);
			glScalef(3.0f, 0.2f, 3.0f);
			glRotatef(180.0f, 1.0f, 0.0f, 0.0f);
			igSolidCone(100, 100);
		glPopMatrix();

		glPushMatrix();
			glColor3f(0.57f, 0.17f, 0.13f);
			glTranslatef(0.0f, 18.25f, 0.0f);
			glScalef(3.0f, 0.25f, 3.0f);
			igSolidCylinder(100, 100);
		glPopMatrix();

		glPushMatrix();
			glColor3f(0.93f, 0.94f, 0.95f);
			glTranslatef(0.0f, 18.5f, 0.0f);
			glScalef(3.0f, 0.2f, 3.0f);
			igSolidCone(100, 100);
		glPopMatrix();

		//  Ventanal
		for (int i = 0; i < 10; i++) {
			glPushMatrix();
				glRotatef(36.0f * i, 0.0f, 1.0f, 0.0f);
				glTranslatef(2.2f, 19.35f, 0.0f);
				glRotatef(90.0f, 0.0f, 1.0f, 0.0f);
				glCallList(vidrio);
			glPopMatrix();
		}

		//  Tejado
		glPushMatrix();
			glColor3f(0.93f, 0.94f, 0.95f);
			glTranslatef(0.0f, 20.25f, 0.0f);
			glScalef(3.0f, 0.2f, 3.0f);
			glRotatef(180.0f, 1.0f, 0.0f, 0.0f);
			igSolidCone(100, 100);
		glPopMatrix();

		glPushMatrix();
			glColor3f(0.57f, 0.17f, 0.13f);
			glTranslatef(0.0f, 20.5f, 0.0f);
			glScalef(3.0f, 0.25f, 3.0f);
			igSolidCylinder(100, 100);
		glPopMatrix();

		glPushMatrix();
			glColor3f(0.57f, 0.17f, 0.13f);
			glTranslatef(0.0f, 20.75f, 0.0f);
			glScalef(3.0f, 1.0f, 3.0f);
			igSolidCone(100, 100);
		glPopMatrix();

		//  Puerta
		glPushMatrix();
			glTranslatef(0.0f, 1.5f, 2.5f);
			glCallList(puerta);
		glPopMatrix();

		//  Ventanas
		for (int i = 0; i < 2; i++) {
			glPushMatrix();
				glRotatef(90.0f, 0.0f, 1.0f, 0.0f);
				glTranslatef(0.0f, 9.0f + 6.0f * i, 2.5f);
				glCallList(ventana);
			glPopMatrix();

			glPushMatrix();
				glRotatef(90.0f, 0.0f, 1.0f, 0.0f);
				glTranslatef(0.0f, 9.0f + 6.0f * i, -2.5f);
				glCallList(ventana);
			glPopMatrix();

			glPushMatrix();
				glTranslatef(0.0f, 9.0f + 6.0f * i, -2.5f);
				glCallList(ventana);
			glPopMatrix();

			glPushMatrix();
				glTranslatef(0.0f, 9.0f + 6.0f * i, 2.5f);
				glCallList(ventana);
			glPopMatrix();
		}

		glEndList();
	}
}

void CreaCasa() {
	casa = glGenLists(1);
	if (casa != 0) { // Cero no es un identificador valido para una display list
		glNewList(casa, GL_COMPILE);

		//  Codigo para dibujar la casa
		//  Base
		glPushMatrix();
			glColor3f(0.48f, 0.49f, 0.49f);
			glTranslatef(0.0f, -2.3f, 0.0f);
			glScalef(10.0f, 0.25f, 10.0f);
			igSolidCube();
		glPopMatrix();

		//  Estructura
		glPushMatrix();
			glColor3f(0.93f, 0.94f, 0.95f);
			glScalef(8.0f, 4.5f, 8.0f);
			igSolidCube();
		glPopMatrix();

		//  Tejado
		glPushMatrix();
			glColor3f(0.93f, 0.94f, 0.95f);
			glTranslatef(0.0f, 2.9f, 0.0f);
			glScalef(8.0f, 1.5f, 8.0f);
			igTriangularPrism();
		glPopMatrix();

		glPushMatrix();
			glColor3f(0.89f, 0.45f, 0.36f);
			glTranslatef(0.0f, 2.9f, 0.0f);
			glScalef(10.0f, 2.0f, 7.99f);
			igTriangularPrism();
		glPopMatrix();

		//  Puerta
		glPushMatrix();
			glTranslatef(0.0f, -1.25f, 4.0f);
			glCallList(puerta);
		glPopMatrix();

		//  Ventanas
		glPushMatrix();
			glTranslatef(0.0f, 1.25f, 4.0f);
			glCallList(ventana);
		glPopMatrix();

		glPushMatrix();
			glTranslatef(0.0f, 2.75f, 4.0f);
			glCallList(ojo);
		glPopMatrix();

		glPushMatrix();
			glRotatef(180.0f, 0.0f, 1.0f, 0.0f);
			glTranslatef(0.0f, 2.75f, 4.0f);
			glCallList(ojo);
		glPopMatrix();

		for (int i = 0; i < 2; i++) {
			glPushMatrix();
				glTranslatef(2.25f, -0.75f + 2.0f * i, 4.0f);
				glCallList(ventana);
			glPopMatrix();

			glPushMatrix();
				glTranslatef(-2.25f, -0.75f + 2.0f * i, 4.0f);
				glCallList(ventana);
			glPopMatrix();

			glPushMatrix();
				glTranslatef(0.0f, -0.75f + 2.0f * i, -4.0f);
				glCallList(ventana);
			glPopMatrix();

			glPushMatrix();
				glTranslatef(2.25f, -0.75f + 2.0f * i, -4.0f);
				glCallList(ventana);
			glPopMatrix();

			glPushMatrix();
				glTranslatef(-2.25f, -0.75f + 2.0f * i, -4.0f);
				glCallList(ventana);
			glPopMatrix();

			glPushMatrix();
				glRotatef(90.0f, 0.0f, 1.0f, 0.0f);
				glTranslatef(0.0f, -0.75f + 2.0f * i, -4.0f);
				glCallList(ventana);
			glPopMatrix();

			glPushMatrix();
				glRotatef(90.0f, 0.0f, 1.0f, 0.0f);
				glTranslatef(-2.25f, -0.75f + 2.0f * i, -4.0f);
				glCallList(ventana);
			glPopMatrix();

			glPushMatrix();
				glRotatef(90.0f, 0.0f, 1.0f, 0.0f);
				glTranslatef(2.25f, -0.75f + 2.0f * i, -4.0f);
				glCallList(ventana);
			glPopMatrix();

			glPushMatrix();
				glRotatef(90.0f, 0.0f, 1.0f, 0.0f);
				glTranslatef(0.0f, -0.75f + 2.0f * i, 4.0f);
				glCallList(ventana);
			glPopMatrix();

			glPushMatrix();
				glRotatef(90.0f, 0.0f, 1.0f, 0.0f);
				glTranslatef(-2.25f, -0.75f + 2.0f * i, 4.0f);
				glCallList(ventana);
			glPopMatrix();

			glPushMatrix();
				glRotatef(90.0f, 0.0f, 1.0f, 0.0f);
				glTranslatef(2.25f, -0.75f + 2.0f * i, 4.0f);
				glCallList(ventana);
			glPopMatrix();
		}

		glEndList();
	}
}

void CreaEscena() {
	escena = glGenLists(1);
	if (escena != 0) { // Cero no es un identificador valido para una display list
		glNewList(escena, GL_COMPILE);

		//  Codigo para dibujar la escena
		//  Suelo
		glPushMatrix();
		glCallList(suelo);
		glPopMatrix();

		//  Faro
		glPushMatrix();
			glTranslatef(0.0f, 0.5f, -8.0f);
			glRotatef(45.0f, 0.0f, 1.0f, 0.0f);
			glCallList(faro);
		glPopMatrix();

		//  Casa
		glPushMatrix();
			glTranslatef(15.0f, 2.8f, 0.0f);
			glRotatef(-90.0f, 0.0f, 1.0f, 0.0f);
			glCallList(casa);
		glPopMatrix();

		//  Buzon
		glPushMatrix();
			glTranslatef(9.25f, 0.8f, 1.5f);
			glRotatef(-90.0f, 0.0f, 1.0f, 0.0f);
			glCallList(buzon);
		glPopMatrix();

		//  Arboles
		glPushMatrix();
			glTranslatef(9.0f, 1.5f, -8.0f);
			glCallList(arbol);
		glPopMatrix();

		glPushMatrix();
			glTranslatef(11.0f, 1.5f, -8.0f);
			glCallList(abeto);
		glPopMatrix();

		glPushMatrix();
			glTranslatef(10.0f, 1.5f, -9.5f);
			glCallList(carballo);
		glPopMatrix();

		glPushMatrix();
			glTranslatef(12.0f, 1.5f, -9.5f);
			glCallList(arbol);
		glPopMatrix();

		glPushMatrix();
			glTranslatef(8.5f, 1.5f, -9.0f);
			glCallList(abeto);
		glPopMatrix();

		glPushMatrix();
			glTranslatef(7.0f, 1.5f, -8.0f);
			glCallList(carballo);
		glPopMatrix();

		glPushMatrix();
			glTranslatef(9.0f, 1.5f, -11.0f);
			glCallList(arbol);
		glPopMatrix();

		glPushMatrix();
			glTranslatef(11.5f, 1.5f, -11.0f);
			glCallList(abeto);
		glPopMatrix();

		glPushMatrix();
			glTranslatef(10.0f, 1.5f, -13.0f);
			glCallList(carballo);
		glPopMatrix();

		glPushMatrix();
			glTranslatef(12.0f, 1.5f, -12.5f);
			glCallList(arbol);
		glPopMatrix();

		glPushMatrix();
			glTranslatef(8.5f, 1.5f, -12.0f);
			glCallList(abeto);
		glPopMatrix();

		glPushMatrix();
			glTranslatef(7.0f, 1.5f, -11.0f);
			glCallList(carballo);
		glPopMatrix();

		glEndList();
	}
}