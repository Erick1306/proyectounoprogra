#include <miniwin>

using namespace miniwin;

int main()
{
    //Eso re dimensiona la ventana
    vredimensiona(400, 300);

    //Eso pinta un rectángulo en vuelta al texto
    rectangulo(100, 100, 300, 200);

    //Eso imprime en las coordenadas el texto "Hola, MiniWin!"
    texto(152, 142, "Hola, MiniWin!");

    //llama a la función refresca para mostrar el resultado de los cambios(refrescar la pantalla)
    refresca();
    return 0;
}
