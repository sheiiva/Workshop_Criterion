/*
** W O R K S H O P  C R I T E R I O N
**
** Corentin COUTRET-ROZET
** https://github.com/sheiiva/Workshop_Criterion
**
*/

#include "crifunc.h"
#include "sources.h"

/* TEMPLATE:

Tests(functionName, comment[, options])
{
    [CODE]
}

*/

Test(hello_world, with_84_return)
{
    size_t value = hello_world(-1);

    cr_assert_eq(value, 84);                     // True if `value == 84`
}

//  .init=redirect_all_std     <-- calls the redirect_all_std function
//                                      before starting the function
//  cr_redirect_stdout  <-- redirect from standard output
//  cr_redirect_stderr  <-- redirect from error output

Test(hello_world, with_stdout_redirect, .init=redirect_all_std)
{
    size_t value = hello_world(0);

    cr_assert_stdout_eq_str("Hello world!");    // True if `str == standard output`
    cr_assert_eq(value, 0);                     // True if `value == 0`
}

Test(hello_world, with_stderr_redirect, .init=redirect_all_std)
{
    size_t value = hello_world(1);

    cr_assert_stderr_eq_str("Hello world!");    // True if `str == error output`
    cr_assert_eq(value, 1);                     // True if `value == 1`
}