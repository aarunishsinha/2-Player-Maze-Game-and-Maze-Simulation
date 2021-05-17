#pragma once

#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include <iostream>

class TextureManager{
public:
  static SDL_Texture* LoadTexture(const char* filename, SDL_Renderer* ren);
};
