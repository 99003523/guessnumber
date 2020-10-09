#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

#include <guessnumber.h>
#define PROJECT_NAME    "Guess_My_Number"

void test_MainMenu(void);
void test_GetChoice(void);
void test_guessGame(void);
void test_PrintScore(void);
void test_Quit(void);
void test_NumDigits(void);
void test_numPoints(void);

int main()
{
   if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
  
  CU_add_test(suite, "MainMenu", test_MainMenu);
  CU_add_test(suite, "GetChoice", test_GetChoice);
  CU_add_test(suite, "guessGame", test_guessGame);
  CU_add_test(suite, "PrintScore", test_PrintScore);
  CU_add_test(suite, "Quit", test_Quit);
  CU_add_test(suite, "NumDigits", test_NumDigits);
  CU_add_test(suite, "numPoints", test_numPoints);
  
  CU_basic_set_mode(CU_BRM_VERBOSE);
  CU_basic_run_tests();
  CU_cleanup_registry();
  return 0;
 }
 
 void test_MainMenu(void)
 {
 
 }
 
 void test_GetChoice(void)
 {
          CU_ASSERT(1 == GetChoice(1, 3));
          CU_ASSERT(2 == GetChoice(1, 3)); 
          CU_ASSERT(3 == GetChoice(1, 3));
 }
 
 void test_guessGame(void)
 {
          CU_ASSERT(5== guessGame());
          CU_ASSERT(1== guessGame());
          CU_ASSERT(2== guessGame());
          CU_ASSERT(3== guessGame());
          CU_ASSERT(4== guessGame());
          CU_ASSERT(5== guessGame());

 }
 
 void test_PrintScore(void)
 {
 }
 
 void test_Quit(void)
{
}
 
 void test_NumDigits(void)
 {
           
 }
 
 void test_numPoints(void)
 {
 }
