#include "Knoten.h"
#include "Suchbaum.h"
Knoten::Knoten(int x){
    wert = x;
    links = rechts = nullptr;
}
int Knoten::WertGetter() {
    return wert;
}

