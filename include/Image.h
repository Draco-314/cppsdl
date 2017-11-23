#ifndef BUTTON_H
#define BUTTON_H

#include <SDL2/SDL.h>

class Image
{
    public:
        Image(char*);
        int xpos;
        int ypos;
        SDL_Surface* img;
        virtual ~Image();
    protected:
    private:
};

#endif // BUTTON_H
