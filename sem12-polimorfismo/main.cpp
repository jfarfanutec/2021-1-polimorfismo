#include <iostream>
#include <vector>
#include "Astro.h"
#include "Planeta.h"
#include "Cometa.h"
#include "Estrella.h"

using namespace std;

int main() {
    vector<Astro*> astros =
            {new Planeta(), new Cometa(), new Estrella()};

    astros.push_back(new Cometa());

    for (auto i = 0; i < astros.size(); i++)
        cout << "Area es: " << astros[i]->size() << endl;

    for (auto i = 0; i < astros.size(); i++)
        astros[i]->dibujar();

    for (auto i = 0; i < astros.size(); i++)
        delete astros[i];

    astros.clear();

    return 0;
}