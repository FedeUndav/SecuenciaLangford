#include <iostream>
#include "tests/TestRunner.h"
#include "tests/SecuenciaLangfordTests.h"

using namespace std;
using namespace TestRunner;

int main() {
	Test testSuit[] = {SecuenciaLangfordTests::Ejecutar};
	TestResult* result = TestRunner::Run(testSuit, 1);
	bool allOk = AllOk(result);
	Destroy(result);
	return allOk ? 0 : -1;
}
