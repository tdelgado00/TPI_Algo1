#include "solucion.h"

/********************************** EJERCICIO esValido **********************************/
bool esValido(toroide t){
    bool valido=true;
    if(t.size()==0){
        valido=false;
    } else {
        if(t[0].size()==0){
            valido=false;
        } else {
            for(int i=1;i<t.size();i++){
                if(t[i].size()!=t[0].size()) valido=false;
            }
        }
    }
    return valido;
}

/****************************** EJERCICIO posicionesVivas *******************************/
vector<posicion> posicionesVivas(toroide t){
    vector<posicion> vivas;

    for(int i=0;i<t.size();i++){
        for(int j=0;j<t[i].size();j++){
            if(t[i][j]) vivas.push_back(make_tuple(i,j));
        }
    }

    return vivas;
}

/***************************** EJERCICIO densidadPoblacion ******************************/
float densidadPoblacion(toroide t){
    float cantVivas=posicionesVivas(t).size(); //defino como float para que sea división normal
    int superficie=t.size()*t[0].size();
    float densidad = cantVivas/superficie;
    return densidad;
}

/**************************** EJERCICIO evolucionDePosicion *****************************/
bool evolucionDePosicion(toroide t, posicion p){
    return true;
}

/****************************** EJERCICIO evolucionToroide ******************************/
void evolucionToroide(toroide& t){
}

/***************************** EJERCICIO evolucionMultiple ******************************/
toroide evolucionMultiple(toroide t, int k){
    toroide result;
    return result;
}

/******************************** EJERCICIO esPeriodico *********************************/
bool esPeriodico(toroide t, int& p){
    return false;
}

/******************************* EJERCICIO primosLejanos ********************************/
bool primosLejanos(toroide t1, toroide t2) {
    return false;
}

/****************************** EJERCICIO seleccionNatural ******************************/
int seleccionNatural(vector<toroide> ts){
    int indice;
    return indice;
}

/********************************** EJERCICIO fusionar **********************************/
toroide fusionar(toroide t1, toroide t2){
    toroide t;
    return t;
}

/****************************** EJERCICIO vistaTrasladada *******************************/
bool vistaTrasladada(toroide t1, toroide t2){
    bool res = false;
    return res;
}

/******************************* EJERCICIO enCrecimiento ********************************/
bool enCrecimiento(toroide t){
    bool res;
    return res;
}

/******************************* EJERCICIO soloBloques (OPCIONAL) ***********************/
bool soloBloques(toroide t){
    bool res;
    return res;
}
