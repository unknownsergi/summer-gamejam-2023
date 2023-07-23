#include <SDL.h>
#include <SDL_image.h>
#include <iostream>

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

int main(int argc, char* argv[])
{
	// Initialize SDL
	SDL_Init(SDL_INIT_EVERYTHING);
	// Create a window
	SDL_Window * window = SDL_CreateWindow("Unnamed Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
	// Create a renderer
	SDL_Renderer * renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

	// Render a green window
	SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
	// Clear the window to green
	SDL_RenderClear(renderer);
	// Show the window
	SDL_RenderPresent(renderer);
	// Wait 5 seconds
	SDL_Delay(5000);

    return 0;
}
