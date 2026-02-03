#include <iostream>
#include <SDL3/SDL.h>

SDL_window* window; 

void setupSdl() 
{
  if (!SDL_Init(SDL_INIT_VIDEO) != 0) {
        std::cout << "error at sdl init\n"; 
  }

  window = SDL_CreateWindow("hell", 740, 420,"SDL_WINDOW_OPENGL");   

}
int main()
{
  std::cout << "hello world\n";
  setupSdl();
  return 0;
}
