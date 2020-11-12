#include "unity.h"
#include "guessnumber.h"

	void setUp()
	{	}
	void tearDown()
	{	}

	void test_GetChoice(void)
	{
  		TEST_ASSERT_EQUAL(1,GetChoice(1,1));

	}

	void test_guessGame(void)
	{
  		TEST_ASSERT_EQUAL(1,guessGame(1,1));

	}


	int test_main(void)
	{
	  	UNITY_BEGIN();

	  	RUN_TEST(test_GetChoice);
	  	RUN_TEST(test_guessGame);

  		return UNITY_END();
	}
