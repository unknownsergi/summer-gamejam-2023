#include <SDL.h>
#include <SDL_image.h>
#include <iostream>
#include "config.h"


int main(int argc, char* argv[])
{
	// Initialize SDL
	SDL_Init(SDL_INIT_EVERYTHING);
	// Create a window
	SDL_Window * window = SDL_CreateWindow(Config::Window::TITLE, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, Config::Window::SCREEN_WIDTH, Config::Window::SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
	// Create a renderer
	SDL_Renderer * renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

	// Render a green window
	SDL_SetRenderDrawColor(renderer, 0, Config::Window::BG_COLOR[0], Config::Window::BG_COLOR[1], Config::Window::BG_COLOR[2]);
	// Clear the window to green
	SDL_RenderClear(renderer);
	// Show the window
	SDL_RenderPresent(renderer);
	// Wait 5 seconds
	SDL_Delay(5000);

    return 0;
}
