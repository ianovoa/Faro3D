/*************************************************************************/
/*                                                                       */
/*   modelado.c                                                          */
/*   27/10/03  AUTORES: C.Rebollo                                        */
/*                                                                       */
/*************************************************************************/

/***************** INCLUDES DE LAS LIBRERIAS NECESARIAS ******************/
#include "glig.h"
#include "modelado.h"


/******************************************************************************************/
/* Crea los distintos objetos. En este caso un abeto, si tuviese mas objetos, los pondría */
/* a continuación.                                                                        */
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
	CreaVentanal();
}

/*void CreaArco() {
	arco = glGenLists(1);
	if (arco != 0) { // Cero no es un identificador valido para una display list
		glNewList(arco, GL_COMPILE);
		//  Código para dibujar el arco
		glPushMatrix();
			glTranslatef(0.75f,0.0f,0.0f);
			glScalef(0.5f, 2.0f, 0.5f);
			igWireCube();
		glPopMatrix();

		glPushMatrix();
			glTranslatef(-0.75f, 0.0f, 0.0f);
			glScalef(0.5f, 2.0f, 0.5f);
			igWireCube();
		glPopMatrix();

		glPushMatrix();
			glTranslatef(0.0f, 0.75f, 0.0f);
			glScalef(2.0f, 0.5f, 0.5f);
			igWireCube();
		glPopMatrix();
		glEndList();
	}
}

void CreaEscalera() {
	escalera=glGenLists(1);
	if (escalera !=0) { // Cero no es un identificador valido para una display list
		glNewList(escalera, GL_COMPILE);
		//  Código para dibujar la escalera
		//  Primero dibujo del eje
		glPushMatrix();
			glScalef(0.2f, 2.0f, 0.2f);
			igWireCube();
		glPopMatrix();

		//  Segundo dibujo escalones
		glPushMatrix();
			glTranslatef(0.0f, -1.0f, 0.0f);
			for (int i = 0; i < 11; i++) {
				glRotatef(30.0f, 0.0f, 1.0f, 0.0f);
				glPushMatrix();
					glScalef(0.5f, 0.05f, 0.1f);
					glTranslatef(0.5f, 0.0f, 0.0f);
					igWireCube();
				glPopMatrix();
				glTranslatef(0.0f, 0.2f, 0.0f);
			}
		glPopMatrix();
		glEndList ();
	}
}
*/

void CreaAbeto(void) {
	abeto = glGenLists(1);
	if (abeto != 0) { // Cero no es un identificador valido para una display list
		glNewList(abeto, GL_COMPILE);

		//  Código para dibujar el abeto
		//  Primero dibujo la copa
		glPushMatrix();
			glColor3f(0.11f, 0.51f, 0.28f);
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

		//  Segundo dibujo el tronco
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

		//  Código para dibujar el arbol
		//  Primero dibujo la copa
		glPushMatrix();
			glColor3f(0.11f, 0.51f, 0.28f);
			glScalef(0.5f, 1.0f, 0.5f);
			glTranslatef(0.0f, 0.5f, 0.0f);
			igSolidSphere(100,100);
		glPopMatrix();

		//  Segundo dibujo el tronco
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

		//  Código para dibujar el carballo
		//  Primero dibujo la copa
		glPushMatrix();
			glColor3f(0.11f, 0.51f, 0.28f);
			glScalef(1.0f, 0.9f, 1.0f);
			glTranslatef(0.0f, 0.6f, 0.0f);
			igSolidSphere(100, 100);
		glPopMatrix();

		//  Segundo dibujo el tronco
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

		//  Código para dibujar el pomo
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

		//  Código para dibujar la puerta
		//  Primero dibujo la tabla
		glPushMatrix();
			glColor3f(0.9f, 0.6f, 0.4f);
			glScalef(0.85f, 2.0f, 0.1f);
			igSolidCube();
		glPopMatrix();

		//  Segundo dibujo el pomo
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

		//  Código para dibujar la puerta
		//  Primero dibujo el marco
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

		//  Segundo dibujo el vidrio
		glPushMatrix();
			glColor3f(0.68f, 0.84f, 0.95f);
			glScalef(0.75f, 0.8f, 0.05f);
			igSolidCube();
		glPopMatrix();

		//  Tercero dibujo el marco interno
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

		//  Código para dibujar el vidrio
		//  Primero dibujo el marco
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

		//  Segundo dibujo el vidrio
		glPushMatrix();
			glColor3f(0.68f, 0.84f, 0.95f);
			glScalef(1.45f, 1.5f, 0.05f);
			igSolidCube();
		glPopMatrix();

		glEndList();
	}
}

void CreaVentanal() {
	ventanal = glGenLists(1);
	if (ventanal != 0) { // Cero no es un identificador valido para una display list
		glNewList(ventanal, GL_COMPILE);

		//  Código para dibujar cristales del faro
		for (int i = 0; i < 6; i++) {
			glPushMatrix();
				glRotatef(60.0f * i, 0.0f, 1.0f, 0.0f);
				glTranslatef(1.25f, 0.0f, 0.0f);
				glRotatef(90.0f, 0.0f, 1.0f, 0.0f);
				glCallList(vidrio);
			glPopMatrix();
		}

		glEndList();
	}
}

void CreaFaro() {
	faro = glGenLists(1);
	if (faro != 0) { // Cero no es un identificador valido para una display list
		glNewList(faro, GL_COMPILE);

		glPushMatrix();

		glPopMatrix();

		glEndList();
	}
}