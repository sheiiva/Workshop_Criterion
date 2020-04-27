/*
** W O R K S H O P  C R I T E R I O N
**
** Corentin COUTRET-ROZET
** https://github.com/sheiiva/Workshop_Criterion
**
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}
