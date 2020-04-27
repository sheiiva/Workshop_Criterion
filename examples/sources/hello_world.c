/*
** W O R K S H O P  C R I T E R I O N
**
** Corentin COUTRET-ROZET
** https://github.com/sheiiva/Workshop_Criterion
**
*/

#include "sources.h"

size_t hello_world(size_t option)
{
    if (option == 0)
        write(1, "Hello world!", 12);
    else if (option == 1)
        write(2, "Hello world!", 12);
    else
        return (84);
    return (option);
}