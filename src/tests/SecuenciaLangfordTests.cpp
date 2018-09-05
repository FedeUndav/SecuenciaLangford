#include "SecuenciaLangfordTests.h"
#include "../SecuenciaLangford.h"
#include "TestRunner.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

typedef bool (*FuncionEsSecuenciaLangford)(int* secuenciaNumeros, unsigned int n);

void Mostrar(bool value){
	if(value){
		cout<<"[True]";
	}
	else{
		cout<<"[False]";
	}

}

void MostrarResultado(bool valorObtenido, bool valorEsperado, string nombreFuncion)
{
	if(valorObtenido == valorEsperado)
	{
		cout<<nombreFuncion<<": OK."<<endl;
	}
	else
	{
		cout<<nombreFuncion<<": Error. Se esperaba obtener ";
		Mostrar(valorEsperado);
		cout<<" se obtuvo ";
		Mostrar(valorObtenido);
		cout<<endl;
	}
}


bool TestEjemplo1()
{
	int n = 2;
	int secuencia[]={2,1,1,3};
	bool valorEsperado = false;

	bool valorObtenido = SecuenciaLangford::EsSecuenciaLangford(secuencia, n);

	MostrarResultado(valorObtenido, valorEsperado, "TestEjemplo1");

	return valorEsperado == valorObtenido;
}

bool TestEjemplo2()
{
	int n = 2;
	int secuencia[]={2,1,1,2};
	bool valorEsperado = false;

	bool valorObtenido = SecuenciaLangford::EsSecuenciaLangford(secuencia, n);

	MostrarResultado(valorObtenido, valorEsperado, "TestEjemplo2");

	return valorEsperado == valorObtenido;
}

bool TestEjemplo3()
{
	int n = 3;
	int secuencia[]={2,3,1,2,1,3};
	bool valorEsperado = true;

	bool valorObtenido = SecuenciaLangford::EsSecuenciaLangford(secuencia, n);

	MostrarResultado(valorObtenido, valorEsperado, "TestEjemplo3");

	return valorEsperado == valorObtenido;
}

bool TestLangford7A()
{
	int n = 7;
	int secuencia[]={2,6,3,2,7,4,3,5,6,1,4,1,7,5};
	bool valorEsperado = true;

	bool valorObtenido = SecuenciaLangford::EsSecuenciaLangford(secuencia, n);

	MostrarResultado(valorObtenido, valorEsperado, "TestLangford7A");

	return valorEsperado == valorObtenido;
}

bool TestLangford7B()
{
	int n = 7;
	int secuencia[]={5,2,6,4,2,7,5,3,4,6,1,3,1,7};
	bool valorEsperado = true;

	bool valorObtenido = SecuenciaLangford::EsSecuenciaLangford(secuencia, n);

	MostrarResultado(valorObtenido, valorEsperado, "TestLangford7B");

	return valorEsperado == valorObtenido;
}

bool TestLangford8A()
{
	int n = 8;
	int secuencia[]={1,5,1,7,3,8,6,5,3,2,4,7,2,6,8,4};
	bool valorEsperado = true;

	bool valorObtenido = SecuenciaLangford::EsSecuenciaLangford(secuencia, n);

	MostrarResultado(valorObtenido, valorEsperado, "TestLangford8A");

	return valorEsperado == valorObtenido;
}

bool TestLangford8B()
{
	int n = 8;
	int secuencia[]={1,7,1,3,8,4,5,3,6,7,4,2,5,8,2,6};
	bool valorEsperado = true;

	bool valorObtenido = SecuenciaLangford::EsSecuenciaLangford(secuencia, n);

	MostrarResultado(valorObtenido, valorEsperado, "TestLangford8B");

	return valorEsperado == valorObtenido;
}

bool TestLangford16()
{
	int n = 16;
	int secuencia[]={16,6,9,15,2,3,8,2,6,3,13,10,9,12,14,8,11,16,1,15,1,5,10,7,13,4,12,5,11,14,4,7};
	bool valorEsperado = true;

	bool valorObtenido = SecuenciaLangford::EsSecuenciaLangford(secuencia, n);

	MostrarResultado(valorObtenido, valorEsperado, "TestLangford16");

	return valorEsperado == valorObtenido;
}

bool SecuenciaLangfordTests::Ejecutar()
{
	cout<<"Running [SecuenciaLangfordTests]..."<<endl;
	TestRunner::Test tests[]={
			TestEjemplo1,
			TestEjemplo2,
			TestEjemplo3,
			TestLangford7A,
			TestLangford7B,
			TestLangford8A,
			TestLangford8B,
			TestLangford16
	};

	TestRunner::TestResult* result = TestRunner::Run("SecuenciaLangfordTests", tests,8);
	bool allOk = TestRunner::AllOk(result);
	TestRunner::Show(result);
	TestRunner::Destroy(result);
	return allOk;
}
