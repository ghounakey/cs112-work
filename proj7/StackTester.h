/* StackTester.h declares a test-class for a dynamically allocated (array) Stack.
 * Joel Adams, for CS 112 at Calvin College
 */

#ifndef STACKTESTER_H_
#define STACKTESTER_H_


class StackTester {
public:
	void runTests();
	void testConstructor();
	void testIsEmpty();
	void testPushAndIsFull();
	void testGetTop();
	void testPop();
	void testCopyConstructor();
	void testAssignment();
	void testDestructor();
	void testSizeAndCapacity();
};

#endif /*STACKTESTER_H_*/

