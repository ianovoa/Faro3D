/*************************************************************************/
/*                                                                       */
/*   modelado.h                                                          */
/*   Rev. 27/10/03   AUTORES: C.Rebollo
/*                                                                       */
/*************************************************************************/

#ifndef MODELADO_H
#define MODELADO_H

#include "glut.h"


// Identificadores de las display list
GLuint abeto,arbol,carballo,puerta,pomo,ventana,vidrio,ojo,faro,casa,escena;

// Definici�n Funciones de modelado
void IniciaDisplayLists();
void CreaAbeto();
void CreaArbol();
void CreaCarballo();
void CreaPomo();
void CreaPuerta();
void CreaVentana();
void CreaVidrio();
void CreaOjoBuey();
void CreaFaro();
void CreaCasa();
void CreaEscena();

#endif
