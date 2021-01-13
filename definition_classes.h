#include<iostream>
class Forme{
    public :
    void move(int x,int y){
        abscisse+=x;
        ordonnee+=y;
    }
    private:
    int abscisse;
    int ordonnee;
    protected:
    Forme(int x, int y) : abscisse(x), ordonnee(y){
    }

};

class Carre : public Forme{
    public:
    Carre(int x,int y,float c):Forme(x,y),cote(c){
    }
    float aire(){
        return cote*cote;
    }
    float perimetre(){
        return 4*cote;
    }
    private:
    float cote;
};

class Rectangle : public Forme{
    public:
    Rectangle(int x, int y, float lar,float longu):Forme(x,y),largeur(lar),longueur(longu){
    }
    float aire(){
        return largeur*longueur;
    }
    float perimetre(){
        return 2*(largeur+longueur);
    }
    private:
    float largeur;
    float longueur;
};

class Cercle : public Forme{
    public:
    Cercle(int x,int y,float radius) : Forme(x,y),rayon(radius) {
    }
    float perimetre(){
        return 2*3.14*rayon;
    }
    float aire(){
        return rayon*rayon*3.14;
    }
    private:
    float rayon;
};
