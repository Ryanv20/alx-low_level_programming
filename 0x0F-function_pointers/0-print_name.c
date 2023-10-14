#include <stdlib.h>
#include "unique_functions.h"
/*
 * 
 * author Ryan
 *
 *
 */
void perform_action_on_name(char *name, void (*action)(char *)) {
    if (name && action) {
        action(name);
    }
}

