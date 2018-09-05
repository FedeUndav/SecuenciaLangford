#include "TestRunner.h"
#include <iostream>
#include <string>

using std::string;
using TestRunner::TestResult;
using std::endl;
using std::cout;

struct TestRunner::TestResult{
	int testsOk;
	int testsFailed;
	string testSuit;
};

TestResult* TestRunner::Run(string testSuitName, Test* tests, int testCount){
	TestResult* result = new TestResult;
	result->testsOk = 0;
	result->testsFailed = 0;
	result->testSuit = testSuitName;
	for(int i=0; i < testCount; i++){
		if (tests[i]())
		{
			result->testsOk++;
		}
		else{
			result->testsFailed++;
		}
	}

	return result;
}

TestResult* TestRunner::Run(Test* tests, int testCount){
	return Run("", tests, testCount);
}

void TestRunner::Show(TestResult* result){
	cout<<"Results for ["<<result->testSuit<<"] : ok["<<result->testsOk<<"]/ failed["<<result->testsFailed<<"]"<<endl<<endl;
}

bool TestRunner::AllOk(const TestResult* result){
	return result->testsFailed == 0;
}

void TestRunner::Destroy(TestResult* result){
	delete result;
}
