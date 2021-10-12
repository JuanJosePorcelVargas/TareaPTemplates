#include <iostream>
using namespace std;

//******************************* PORCEL VARGAS JUAN JOSE  *********************************
//                                Grupo #2

template<class TVD>
TVD SumaPosicionBomberMasEnemigoEnX(TVD posXBomber, TVD posXEnemigo) {


	return    (posXBomber + posXEnemigo) ;

}
template<class TVD>
TVD SumaPosicionBomberMasEnemigoEnY(TVD posYBomber, TVD posYEnemigo) {

	return (posYBomber + posYEnemigo);

}

int main() {

	int posXBomber = 4;
	int posYBomber = 8;
	int posXEnemigo = 10;
	int posYEnemigo = 5;
	int sumX = 0;
	int sumY = 0;

	sumX = SumaPosicionBomberMasEnemigoEnX(posXBomber,posXEnemigo);
	cout << "La suma de sus posiciones en X de Bomber y Enemigo es: " << sumX<<endl;
	sumY = SumaPosicionBomberMasEnemigoEnY(posYBomber, posYEnemigo);
	cout << "La suma de sus posiciones en Y de Bomber y Enemigo es: " << sumY<<endl;





}