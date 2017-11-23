#ifndef MAIN_INCLUDED
#define MAIN_INCLUDED

#endif // MAIN_INCLUDED

#include <iostream>
#include <SDL2/SDL.h>

#include<Image.h>

SDL_Window* window;
SDL_Surface* screen;

SDL_Event e;

SDL_Surface* img;
SDL_Rect imgRect;

int init();

void close();
