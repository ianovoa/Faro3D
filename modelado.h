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
GLuint abeto,arbol,carballo,puerta,pomo,ventana,vidrio,faro,casa;

// Definición Funciones de modelado
void IniciaDisplayLists();
void CreaAbeto();
void CreaArbol();
void CreaCarballo();
void CreaPomo();
void CreaPuerta();
void CreaVentana();
void CreaVidrio();
void CreaFaro();
void CreaCasa();

#endif
