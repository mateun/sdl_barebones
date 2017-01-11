#include <stdio.h>
#include <sdl2/sdl.h>

#undef main

int main(int argc, char** args) {
	if (SDL_Init(SDL_INIT_VIDEO) != 0) {
		SDL_Log("SDL init failed: %s", SDL_GetError());
		exit(1);
	}

	SDL_Log("SDL initialized");
	
	return 0;
}