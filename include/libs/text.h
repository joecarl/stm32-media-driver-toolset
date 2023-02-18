#ifndef TEXT_H
#define TEXT_H

#include "libs/graphics.h"

#define TEXT_CHAR_WIDTH 6
#define TEXT_LINE_HEIGHT 10


void GRAPHICS_DrawText(BITMAP* bmp, const char* text, int x, int y, uint8_t color);


/**
 * Dibuja una cadena de caracteres en la posición especificada
 * @param text el texto a dibujar
 * @param x
 * @param y coordenadas x, y de la esquina superior izquierda
 * 			del cuadro de texto
 * @param color color del texto
 */
void DrawText(const char* text, int x, int y,uint8_t color);


#endif