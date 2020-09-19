#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_prime(void);
void test_pos(void);
void test_neg(void);
void test_iszero(void);
void test_modu(void);
void test_eve(void);
void test_odd(void);
void test_perc(void);
void test_pmsq(void);
void test_pmrq(void);
void test_pmcr(void);
void test_pmtr(void);
void test_arrq(void);
void test_arsq(void);
void test_arci(void);
void test_factorial(void);
void test_ams(void);
void test_sq(void);
void test_cu(void);
void test_rev(void);
void test_volcube(void);
/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */


  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "add", test_add);
  CU_add_test(suite, "subtract", test_subtract);
  CU_add_test(suite, "multiply", test_multiply);
  CU_add_test(suite, "divide", test_divide);
  CU_add_test(suite, "prime", test_prime);
  CU_add_test(suite, "pos", test_pos);
  CU_add_test(suite, "neg", test_neg);
  CU_add_test(suite, "iszero", test_iszero);
  CU_add_test(suite, "modu", test_modu);
  CU_add_test(suite, "eve", test_eve);
  CU_add_test(suite, "odd", test_odd);
  CU_add_test(suite, "perc", test_perc);
  CU_add_test(suite, "pmsq", test_pmsq);
  CU_add_test(suite, "pmrq", test_pmrq);
  CU_add_test(suite, "pmcr", test_pmcr);
  CU_add_test(suite, "arrq", test_arrq);
  CU_add_test(suite, "arsq", test_arsq);
  CU_add_test(suite, "arci", test_arci);
  CU_add_test(suite, "factorial", test_factorial);
  CU_add_test(suite, "ams", test_ams);
  CU_add_test(suite, "sq", test_sq);
  CU_add_test(suite, "cu", test_cu);
  CU_add_test(suite, "rev", test_rev);
  CU_add_test(suite, "volcube", test_volcube);

/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);

  /* run the unit test framework*/
  CU_basic_run_tests();

  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */
void test_add(void) {
  CU_ASSERT(30 == add(10, 20));

  /* Dummy fail*/
  CU_ASSERT(1500 == add(750, 7500));
}

void test_subtract(void) {
  CU_ASSERT(-3 == subtract(0, 3));

  /* Dummy fail*/
  CU_ASSERT(1 == subtract(1000, 900));
}

void test_multiply(void) {
  CU_ASSERT(0 == multiply(1, 0));

  /* Dummy fail*/
  CU_ASSERT(2 == multiply(2, 5));
}

void test_divide(void) {
  CU_ASSERT(0 == divide(1, 0));

  /* Dummy fail*/
  CU_ASSERT(3 == divide(2, 2));
}

void test_prime(void)
 {
   CU_ASSERT(-1==prime(5));
   CU_ASSERT(1==prime(4));
 }
void test_pos(void)
{
  CU_ASSERT(1== pos(1));
}
void test_neg(void)
{
  CU_ASSERT(-1== neg(-4));
}
void test_iszero(void)
{
  CU_ASSERT(0== iszero(0));
}
void test_modu(void) {
  CU_ASSERT(0 == modu(10, 5));

  /* Dummy fail*/
  CU_ASSERT(2 == divide(11, 3));
}
void test_eve(void) 
{
  CU_ASSERT(1 == eve(2));
}
void test_odd(void) 
{
  CU_ASSERT(1 == odd(3));
}
void test_perc(void) {
  CU_ASSERT(5 == perc(5, 100));
}
void test_pmsq(void) {
  CU_ASSERT(8 == pmsq(2, 2));
}
void test_pmrq(void) {
  CU_ASSERT(12 == pmrq(3));
}
void test_pmcr(void) {
  CU_ASSERT(12 == pmrq(2));
}
void test_pmtr(void) {
  CU_ASSERT(30 == add(10, 20));

  /* Dummy fail*/
  CU_ASSERT(1500 == add(750, 7500));
}
void test_arrq(void) {
  CU_ASSERT(200 == arrq(10, 20));

  /* Dummy fail*/
  CU_ASSERT(75 == arrq(1, 75));
}
void test_arsq(void) 
{
  CU_ASSERT(100 == arsq(10));
}
void test_arci(void) 
{
  CU_ASSERT(27 == arci(3));
}
void test_factorial(void)
{
  CU_ASSERT(6 == factorial(3));  
}
void test_ams(void)
{
  CU_ASSERT(1 == ams(371));
  
}
void test_sq(void) 
{
  CU_ASSERT(100 == arsq(10));
}
void test_cu(void) 
{
  CU_ASSERT(1000 == cu(10));
}
void test_rev(void) 
{
  CU_ASSERT(456 == cu(654));
}
void test_volcube(void) 
{
  CU_ASSERT(8 == volcube(2));
}

