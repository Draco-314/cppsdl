#include "Main.h"

const int SCREEN_WIDTH = 1260;
const int SCREEN_HEIGHT = 600;

int main(int argc, char* args[])
{
    if(init() < 0){
        std::cout << "Error initializing SDL" << std::endl;
        return 1;
    }

    while(true){
        if(SDL_PollEvent(&e)){
            if(e.type == SDL_QUIT){
                break;
            }
        }
        SDL_UpdateWindowSurface(window);
    }

    close();
    return 0;
}

int init(){
    if(SDL_Init(SDL_INIT_VIDEO) < 0){
        return -1;
    }else{
        window = SDL_CreateWindow("Window", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
        if(window == NULL){
            return -2;
        }
        screen = SDL_GetWindowSurface(window);
    }
    return 0;
}

void close(){
    SDL_DestroyWindow(window);
    SDL_Quit();
}
