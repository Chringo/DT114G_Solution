#ifndef GRAPHICS_HPP
#define GRAPHICS_HPP
class Graphics
{
public:
	/* TERMINUS A QUO */
		//*St�lla in uppl�sning och fullsk�rm vid uppstart
		//* Rensa sk�rmen till valfri f�rg
		//* Ladda bilder
		//* Rita ut bilder p� sk�rmen
		//* Rita ut text p� sk�rmen
		//* V�lja genomskinlighet p� / av
		//* Rita ut bilder med godtycklig storlek oavsett bildens dimensioner(skalning)
	//Graphics(HWND hwnd);
	//~Graphics();

	//bool SetMode(int width, int height); // byter grafikl�ge till width*height

	//void Flip(bool waitRetrace = true); // byter sk�rm / backbuffer. Flaggan kontrollerar om man ska v�nta p� vertical retrace.

	//void Clear(DWORD color = 0);            // Rensar backbuffern till f�rgen color (som �r svart som default).

	//Image LoadImage(const char* filename);

	//void Draw(Image image, int x, int y, float scale) // Ritar ut bilden till positionen x,y med storleken scale
};
#endif