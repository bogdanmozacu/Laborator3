#include <iostream>
#include "Knoten.h"
#include "Suchbaum.h"
#include <assert.h>
using namespace std;
int main() {
    Knoten k = Knoten(15);
    Knoten x = Knoten(25);
    Knoten y = Knoten(10);
    Knoten z = Knoten(5);
    Knoten a = Knoten(12);
    Knoten b = Knoten(3);
    Suchbaum s;
    s.insert(k.WertGetter(),k);
    s.insert(x.WertGetter(),x);
    s.insert(y.WertGetter(),y);
    s.insert(z.WertGetter(),z);
    s.insert(a.WertGetter(),a);
    s.insert(b.WertGetter(),b);
    cout<<"in: "<<s.inorder(s.WurzelGetter())<<endl;
    assert(s.inorder(s.WurzelGetter()) == "3 5 10 12 15 25 ");
    cout<<"pre: "<<s.preorder(s.WurzelGetter())<<endl;
    assert(s.preorder(s.WurzelGetter()) == "15 3 5 10 12 25 ");
    cout<<"post: "<<s.postorder(s.WurzelGetter())<<endl;
    assert(s.postorder(s.WurzelGetter())=="3 5 10 12 25 15 ");
    assert(s.countNodes(s.WurzelGetter())==6);
    assert(s.countEdges(s.WurzelGetter())==5);
    assert(s.height(s.WurzelGetter())==4);
}
