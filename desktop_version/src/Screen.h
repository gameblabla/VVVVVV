#ifndef SCREEN_H
#define SCREEN_H

#include <SDL/SDL.h>

class Screen
{
private:
  int x = -1, y = -1;

public:
	Screen();

	void ResizeScreen(int x, int y);
	void GetWindowSize(int* x, int* y);

	void UpdateScreen(SDL_Surface* buffer, SDL_Rect* rect);
	void ClearScreen(int colour);
	void FlipScreen();

	const SDL_PixelFormat* GetFormat();

	void toggleFullScreen();
	void toggleStretchMode();
	void toggleLinearFilter();

	void nextScaleMode();
	void setPlayerPosition(int x, int y);

	bool isWindowed;
	bool isFiltered;
	bool badSignalEffect;
	bool glScreen;
	int stretchMode;

	SDL_Surface* hw_screen;
	SDL_Surface* m_screen;

	SDL_Rect filterSubrect;
};

#endif /* SCREEN_H */
