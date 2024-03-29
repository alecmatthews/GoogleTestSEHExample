/** TestMockClass.h
 * This is a mock class created to demonstrate the exception
 * generated by googlemock.
 * 
 * @author Alec Matthews <alec\@hoodtech.com>
 */

#pragma once

#include "gmock/gmock.h"

#include "TestAbstractClass.h"

class TestMockClass : TestAbstractClass {
public:
	MOCK_METHOD(void, TestMethod, (), (override));
};