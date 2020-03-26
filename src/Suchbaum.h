
#ifndef LAB3_SUCHBAUM_H
#define LAB3_SUCHBAUM_H

#include <string>
#include "Knoten.h"

class Suchbaum{
    friend class Knoten;

protected:
    Knoten* Wurzel;

public:
    /*
     * Constructor - variabila Wurzel de tip Knoten este initializata cu NULL
     */
    Suchbaum();

    /*
     * daca Suchbaum-ul este gol, Knoten-ul inserat devine radacina
     * daca nu:
     * -> se creaza un fel de iterator (iter) cu care se parcurge Suchbaum-ul, pornind de la Wurzel
     * ->se cauta in stanga sau in dreapta, in functie de wert-ul nodului care trebuie inserat
     * ->se opreste cand se ajunge la capatul ramurei
     * ->se conecteaza nodul care trebuie inserat de nodul de deasupra lui
     */
    void insert(int x, Knoten Suchbaum);

    /*
     * getter-ul pentru Wurzel
     */
    Knoten* WurzelGetter();

    /*
     *
     */

    ///void del(int x,Knoten* Suchbaum);

    /*
     * se parcurge Suchbaum-ul dupa regula stanga-radacina-dreapta
     */
    std::string inorder(Knoten* Suchbaum);

    /*
     * se parcurge Suchbaum-ul dupa regula stanga-dreapta-radacina
     */
    std::string postorder(Knoten* Suchbaum);
    /*
     * se parcurge Suchbaum-ul dupa regula radacina-stanga-dreapta
     */
    std::string preorder(Knoten* Suchbaum);

    /*
     * numara prin recursivita cate noduri sunt
     * se opreste cand se ajunge un nod fara urmasi
     */
    int countNodes(Knoten* k);

    /*
     * foloseste formula de la countNodes
     * nr de muchii este nr de noduri -1
     */
    int countEdges(Knoten* k);

    /*
     * se verifica prin recursivitate cate legaturi succesive sunt pe partea stanga si cate pe dreapta
     * la sfarsit se compara stanga cu dreapta si se returneza cea mai mare dintre cele doua
     */
    int height(Knoten* k);
};
#endif //LAB3_SUCHBAUM_H
