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
/* Crea los distintos objetos. En este caso iun abeto, si tuviese mas objetos, los pòndría*/
/* a continuación.                                                                        */
/* Parametros: ninguno                                                                    */
/* Salida: Ninguna                                                                        */
/******************************************************************************************/
void IniciaDisplayLists (void)
{
    CreaAbeto ();
	CreaEscalera();
	CreaArco();
	CreaArcos();
}

/******************************************************************************************/
/* Crea una display list para dibujar un abeto                                            */
/* Parametros: ninguno */
/* Salida: Ninguna                                                                        */
/******************************************************************************************/

void CreaEscalera() {
	escalera=glGenLists(1);  
	if (escalera !=0) { /* Cero no es un identificador valido para una display list */
	  	glNewList(escalera, GL_COMPILE);  
		/*  Código para dibujar el abeto */
		/*  Primero dibujo del eje */
		glPushMatrix();
			glScalef(0.2f, 2.0f, 0.2f);
			igWireCube();
		glPopMatrix();
		
		/*  Segundo dibujo escalones */
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


void CreaAbeto (void) {
     abeto=glGenLists(1);  
	if (abeto !=0) { /* Cero no es un identificador valido para una display list */
	  	glNewList(abeto, GL_COMPILE);  
		/*  Código para dibujar el abeto */
		/*  Primero dibujo la copa */
		glPushMatrix();
			glScalef(0.75f, 1.0f, 0.75f);
			igWireCone(100, 100);
		glPopMatrix();

		glPushMatrix();
			glScalef(0.5625f, 1.0f, 0.5625f);
			glTranslatef(0.0f, 0.25f, 0.0f);
			igWireCone(100, 100);
		glPopMatrix();

		glPushMatrix();
			glScalef(0.421875f, 1.0f, 0.421875f);
			glTranslatef(0.0f, 0.5f, 0.0f);
			igWireCone(100, 100);
		glPopMatrix();

		/*  Segundo dibujo el tronco */
		glPushMatrix();
			glScalef(0.1f, 1.0f, 0.1f);
			igWireRulo(100, 100);
		glPopMatrix();
	   	glEndList ();  
 	}  
}

void CreaArco() {
	arco = glGenLists(1);
	if (arco != 0) { /* Cero no es un identificador valido para una display list */
		glNewList(arco, GL_COMPILE);
		/*  Código para dibujar el arco */
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

void CreaArcos() {
	arcos = glGenLists(1);
	if (arcos != 0) { /* Cero no es un identificador valido para una display list */
		glNewList(arcos, GL_COMPILE);
		/*  Código para dibujar los arcos */
		for (int i = 0; i < 12; i++) {
			glPushMatrix();
				glRotatef(30.0f * i, 0.0f, 1.0f, 0.0f);
				glTranslatef(0.0f, 0.0f, -2.0f);
				glScalef(0.5f, 0.5f, 0.5f);
				glCallList(arco);
			glPopMatrix();
		}
		glEndList();
	}
}