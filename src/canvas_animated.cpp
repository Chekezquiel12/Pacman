#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/color.hpp>
#include <iostream>
#include <thread>

using namespace std;
using namespace ftxui;

int main() {
    // Crear el lienzo de 50x50
    auto can = Canvas(50, 50);

    // Crear la pantalla
    Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());

    // Dibujar cada parte del oso con un retraso para animación
    // Dibujar la cabeza del oso
    can.DrawPointCircle(25, 25, 10, Color::Green); // Cabeza
    Render(pantalla, canvas(&can));
    pantalla.Print();
    this_thread::sleep_for(chrono::milliseconds(500));

    // Dibujar la oreja izquierda
    can.DrawPointCircle(15, 15, 5, Color::Green); // Oreja izquierda
    Render(pantalla, canvas(&can));
    pantalla.Print();
    this_thread::sleep_for(chrono::milliseconds(500));

    // Dibujar la oreja derecha
    can.DrawPointCircle(35, 15, 5, Color::Green); // Oreja derecha
    Render(pantalla, canvas(&can));
    pantalla.Print();
    this_thread::sleep_for(chrono::milliseconds(500));

    // Dibujar el ojo izquierdo
    can.DrawPoint(22, 20, Color::Black); // Ojo izquierdo
    Render(pantalla, canvas(&can));
    pantalla.Print();
    this_thread::sleep_for(chrono::milliseconds(500));

    // Dibujar el ojo derecho
    can.DrawPoint(28, 20, Color::Black); // Ojo derecho
    Render(pantalla, canvas(&can));
    pantalla.Print();
    this_thread::sleep_for(chrono::milliseconds(500));

    // Dibujar la nariz
    can.DrawPointCircle(25, 28, 2, Color::Black); // Nariz
    Render(pantalla, canvas(&can));
    pantalla.Print();
    this_thread::sleep_for(chrono::milliseconds(500));

    return 0;
}