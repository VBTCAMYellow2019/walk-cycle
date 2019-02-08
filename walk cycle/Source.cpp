#include "SDL.h" 
#include "iostream" 
#include "string" 
using namespace std;

int main(int argc, char*argv[])
{
	int x;
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Window *window = SDL_CreateWindow(

		"window",
		SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED,
		1024,
		768,
		SDL_WINDOW_SHOWN
		);
	cout << "how many cycles" << endl;
	cin >> x;
	for (int b=0; b == x; b++){





		//int SDL_setWindowFullscreen(SDL_Window* window1);
		
		SDL_Renderer * renderer = SDL_CreateRenderer(window , -1, 0);
		
		////-------- image 1
		SDL_Surface * image1 = SDL_LoadBMP("placeholder");
		SDL_Texture *texture = SDL_CreateTextureFromSurface(renderer, image1);
		SDL_RenderCopy(renderer, texture, NULL, NULL);
		SDL_RenderPresent(renderer);
		SDL_Delay(20000);
		SDL_DestroyTexture(texture);
		////----- image 2
		SDL_Surface * image2 = SDL_LoadBMP("placeholder2");
		SDL_Texture *texture2 = SDL_CreateTextureFromSurface(renderer, image2);
		SDL_RenderCopy(renderer, texture2, NULL, NULL);
		SDL_RenderPresent(renderer); 
		SDL_Delay(20000);















	}
	return 0; 
}
