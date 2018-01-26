#include <iostream>
#include <ctime>
#include <allegro5/allegro.h>
using namespace std;

int main() {
	al_init();
	
	ALLEGRO_DISPLAY *display = NULL;

	al_create_display(500, 500);
	while (1) {
		al_clear_to_color(al_map_rgb(rand(), rand(), rand()));
		al_flip_display();
		system("pause");

	}
	al_destroy_display(display);
}