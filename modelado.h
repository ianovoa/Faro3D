/*************************************************************************/
/*                                                                       */
/*   modelado.h                                                          */
/*   Rev. 27/10/03   AUTORES: C.Rebollo
/*                                                                       */
/*************************************************************************/

#ifndef MODELADO_H
#define MODELADO_H

#include "glut.h"


/* Identificadores de las display list */
GLuint abeto, escalera, arco, arcos;

/* Definición Funciones de modelado */
void IniciaDisplayLists (void);
void CreaAbeto(void);
void CreaEscalera(void);
void CreaArco();
void CreaArcos();

#endif
