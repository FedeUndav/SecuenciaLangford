#ifndef TESTRUNNER_H_
#define TESTRUNNER_H_

#include <string>
using std::string;

namespace TestRunner{
	typedef bool (*Test)();
	struct TestResult;
	TestResult* Run(string testSuitName, Test tests[], int testCount);
	TestResult* Run(Test tests[], int testCount);
	void Show(TestResult* result);
	bool AllOk(const TestResult* result);
	void Destroy(TestResult* result);
}

#endif
