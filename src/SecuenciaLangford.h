#ifndef SECUENCIALANGFORD_H_
#define SECUENCIALANGFORD_H_

/*
 * Dominio: Secuencia numerica Langford
 * ¿Puede identificar el patron que hay en las siguientes 5 secuencias numericas?:
 *
 * A) [2 3 1 2 1 3]
 * B) [4 1 3 1 2 4 3 2]
 * C) [1 4 1 5 6 7 4 2 3 5 2 6 3 7]
 * D) [1 7 1 2 5 6 2 3 4 7 5 3 6 4]
 * E) [4 1 7 1 6 4 2 5 3 2 7 6 3 5]
 *
 * Mas informacion sobres las secuencias dadas:
 * (A) Corresponde a la unica solucion donde L(n=3): [2 3 1 2 1 3]
 * (B) Corresponde a la unica solucion donde L(n=4): [4 1 3 1 2 4 3 2]
 * (C), (D) y (E) Corresponden a 3 de las 26 soluciones posibles donde L(n=7)
 *
 * El patron que determina las secuencias es conocido como Langford, y es el siguiente:
 *
 * 1) Los elementos de la secuencia son {2N}.
 *    En A N=3 y los elementos son {1 1 2 2 3 3}
 *    En B N=4 y los elementos son {1 1 2 2 3 3 4 4}
 *    En C,D y E N=7 y los elementos son {1 1 2 2 3 3 4 4 5 5 6 6 7 7}
 *    Es decir deben aparecer dos veces los numeros de 1 a N
 *
 * 2) El orden de la secuencia esta determinado por la distancia relativa al valor en la posicion sub i...
 * Es decir en (A) el primer elemento es un 2, eso significa que luego de 2 elementos aparece de nuevo el 2 (2 aparece en la posicion 0 y en la posicion 3, es decir luego de 2 elementos a partir del indice 0)
 * En (A) el 3 aparece en la segunda posicion y luego de 3 elementos aparece nuevamente el 3 (3 aparece en la posicion 1 del vector y en la posicion 5, es decir luego de 3 elementos a partir de 1)
 */


namespace SecuenciaLangford{
	/*
	 * Precondicion: @secuenciaNumeros es un array de tamaño 2 por el parametro @n
	 * Postcondicion: Devuelve true si @secuenciaNumeros es un patron de Langford caso contrario devuelve false.
	 * Es decir que debe validar las doscondiciones del patron de Langford: los elementos presentes (que sean los determinados por 2N) y la posicion en donde se encuentran
	 * Ejemplo 1:
	 * Al invocarse con EsSecuenciaLangford([2,1,1,3], 2)
	 * No cumple las validaciones respecto de los elementos presentes en @secuenciaNumeros. Para que cumpla esta validacion se esperaria que en lugar del 3 este el 2.
	 * Por lo tanto devuelve false.
	 *
	 * Ejemplo 2:
	 * Al invocarse con EsSecuenciaLangford([2,1,1,2], 2)
	 * Cumple con las validaciones respecto de los elementos presentes en @secuenciaNumeros (hay dos de cada uno).
	 * No cumple con la validacion respecto del orden de la secuencia.
	 *
	 * Ejemplo 3:
	 * Al invocarse con EsSecuenciaLangford([2 3 1 2 1 3], 3)
	 * Cumple con todas las validaciones
	 *
	 */
	bool EsSecuenciaLangford(int* secuenciaNumeros, unsigned int n);

};

#endif
