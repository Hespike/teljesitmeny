#include <string>

using namespace std;

struct Eredmeny {
    string nev;
    int pontszam;
};

 float operator%(const Eredmeny& e1, float egesz){
    float eredmeny = e1.pontszam * 100 / egesz ;
    return eredmeny;
}
/*
 #include <string>

using namespace std;

struct Eredmeny {
    string nev;
    int pontszam;
};

float operator%(const Eredmeny& eredmeny, int max_pont) {
    return 100 * (float) eredmeny.pontszam / max_pont;
}
 */
