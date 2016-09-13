#ifndef GRAPHICS_HPP
#define GRAPHICS_HPP
class Graphics
{
public:
	/* TERMINUS A QUO */
		//*Ställa in upplösning och fullskärm vid uppstart
		//* Rensa skärmen till valfri färg
		//* Ladda bilder
		//* Rita ut bilder på skärmen
		//* Rita ut text på skärmen
		//* Välja genomskinlighet på / av
		//* Rita ut bilder med godtycklig storlek oavsett bildens dimensioner(skalning)
	//Graphics(HWND hwnd);
	//~Graphics();

	//bool SetMode(int width, int height); // byter grafikläge till width*height

	//void Flip(bool waitRetrace = true); // byter skärm / backbuffer. Flaggan kontrollerar om man ska vänta på vertical retrace.

	//void Clear(DWORD color = 0);            // Rensar backbuffern till färgen color (som är svart som default).

	//Image LoadImage(const char* filename);

	//void Draw(Image image, int x, int y, float scale) // Ritar ut bilden till positionen x,y med storleken scale
};
#endif