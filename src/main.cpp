#include "include/SDL2/SDL.h"
#include "include/SDL2/SDL_audio.h"
#include <iostream>
#include <string>

int wmain(int argc, char* argv[]){
	SDL_Window *window;
	SDL_Init(SDL_INIT_VIDEO);

	int number;
	number = 0;

	window = SDL_CreateWindow("amp", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_OPENGL);
	if (window == NULL){
		std::cout << "Error: I couldn't create a window: %s\n", SDL_GetError();
			return 1;
	}
		SDL_Delay(3000);
		SDL_DestroyWindow(window);
		SDL_Quit;

	return 0;
}