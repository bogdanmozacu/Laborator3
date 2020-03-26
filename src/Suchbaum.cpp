#include "Suchbaum.h"
#include <iostream>
#include "Knoten.h"

Suchbaum::Suchbaum() {
    Wurzel = nullptr;
}


void Suchbaum::insert(int x, Knoten Suchbaum) {
    if (Wurzel == nullptr)
        Wurzel = new Knoten(x);
    else {
        Knoten *iter = Wurzel; // un fel de iterator prin Suchbaum
        while (iter!=NULL) {
            if (iter->wert > x)
            {
                if (iter->links == nullptr) {
                    iter->links = new Knoten(x);
                    break;
                }
                iter = iter->links; // un fel de iter++, doar ca in directia in care avem nevoie
            }
            else if (iter->wert < x) {
                if (iter->rechts == nullptr)
                {
                    iter->rechts = new Knoten(x);
                    break;
                }
                iter = iter->rechts;
            }
        }
    }
}


Knoten* Suchbaum::WurzelGetter(){
    return Wurzel;
}



std::string Suchbaum::inorder(Knoten * Suchbaum) {
    if(Suchbaum == nullptr)
        return "";
    return inorder(Suchbaum->links) + std::to_string(Suchbaum->wert) + " " + inorder(Suchbaum->rechts);

}


std::string Suchbaum::postorder(Knoten * Suchbaum) {
    if(Suchbaum == nullptr)
        return "";
    return inorder(Suchbaum->links) + inorder(Suchbaum->rechts)+ std::to_string(Suchbaum->wert) + " ";

}


std::string Suchbaum::preorder(Knoten * Suchbaum) {
    if(Suchbaum == nullptr)
        return "";
    return  std::to_string(Suchbaum->WertGetter()) + " " +inorder(Suchbaum->links)+ inorder(Suchbaum->rechts);

}


int Suchbaum::countNodes(Knoten *k) {
    if (k == nullptr)
        return 0;
    else
        return 1 + countNodes(k->links) + countNodes(k->rechts);
}


int Suchbaum::countEdges(Knoten *k) {
    return countNodes(k)-1;
}


int Suchbaum::height(Knoten *k){
    if(k == NULL)
        return 0;
    else{

        int l = height(k->links)+1;
        int r = height(k->rechts)+1;
        if(l>r)
            return l;
        return r;
    }
}
