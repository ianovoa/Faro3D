/*************************************************************************/
/*                                                                       */
/*								modelado.h                               */
/*                                                                       */
/*************************************************************************/

#ifndef MODELADO_H
#define MODELADO_H

#include "glut.h"


// Identificadores de las display list
GLuint abeto,arbol,carballo,puerta,pomo,ventana,vidrio,ojo,suelo,buzon,faro,casa,escena;

// Definición Funciones de modelado
void IniciaDisplayLists();
void CreaAbeto();
void CreaArbol();
void CreaCarballo();
void CreaPomo();
void CreaPuerta();
void CreaVentana();
void CreaVidrio();
void CreaOjoBuey();
void CreaSuelo();
void CreaBuzon();
void CreaFaro();
void CreaCasa();
void CreaEscena();

#endif
