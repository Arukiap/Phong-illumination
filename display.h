#ifndef DISPLAY_H
#define DISPLAY_H

#include <string>
#define SDL_MAIN_HANDLED //https://stackoverflow.com/questions/32342285/undefined-reference-to-winmain16-c-sdl-2/32343111#32343111
#include <SDL2/SDL.h>
#include "camera.h"

class Display {
    public:
        Display(int width, int height, const std::string& title);

        void Clear(float r, float g, float b, float a);
        void Update();
        bool ListenInput(Camera *camera);
        bool IsClosed();

        virtual ~Display();
    private:
        SDL_Window* window;
        SDL_GLContext glContext;
        bool isClosed;
};

#endif // DISPLAY_H