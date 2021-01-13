#include "definition_classes.h"
#include<vector>
using namespace std;
int main(){
    Cercle c(10,10,5);
    Rectangle r(15,25,5,30);
    vector <Cercle*> v;//une liste avec que des cercles
    v.push_back(&c);
    v[0]->move(5,5);
    v[1]->aire();
    return 0;
}
