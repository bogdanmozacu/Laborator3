#ifndef LAB3_KNOTEN_H
#define LAB3_KNOTEN_H

class Knoten {
friend class Suchbaum;
private:
    int wert; //valorea din nod
    Knoten* links; //legatura inspre stanga(pointer)
    Knoten* rechts; //legatura inspre dreapta(pointer)

public:
    /*
     * Constructorul clasei, initializeaza un nod cu valorea data, iar legaturile sunt pointeri spre NULL
     */
    Knoten(int x);

    /*
     *Returneaza valoarea din nod (getter)
     */
    int WertGetter();
};
#endif //LAB3_KNOTEN_H
