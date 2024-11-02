#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/color.hpp>
#include <iostream>
#include <thread>

using namespace std;
using namespace ftxui;

int main() {
    int frame = 0;
    int centerY = 25;  // Coordenada Y del centro del oso
    bool moving_up = true;

    while (true) {
        // Crear el lienzo de 50x50
        auto can = Canvas(50, 50);

        // Cambiar la posición del oso arriba y abajo
        int offsetY = (moving_up) ? -1 : 1;
        centerY += offsetY;

        // Cambiar dirección al llegar a un límite
        if (centerY <= 20 || centerY >= 30) {
            moving_up = !moving_up;
        }

        // Dibujar la cabeza del oso
        can.DrawPointCircle(25, centerY, 10, Color::Green); // Cabeza

        // Dibujar las orejas del oso
        can.DrawPointCircle(15, centerY - 10, 5, Color::Green); // Oreja izquierda
        can.DrawPointCircle(35, centerY - 10, 5, Color::Green); // Oreja derecha

        // Dibujar los ojos del oso
        can.DrawPoint(22, centerY - 5, Color::Black); // Ojo izquierdo
        can.DrawPoint(28, centerY - 5, Color::Black); // Ojo derecho

        // Dibujar la nariz del oso
        can.DrawPointCircle(25, centerY + 3, 2, Color::Black); // Nariz

        // Crear la pantalla y renderizar
        Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());
        Render(pantalla, canvas(&can));
        pantalla.Print();

        // Esperar antes de actualizar el movimiento
        this_thread::sleep_for(chrono::milliseconds(100));
    }

    return 0;
}