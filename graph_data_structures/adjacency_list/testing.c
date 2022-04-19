#include <stddef.h>
#include "../../tier_1/tier_1.h"

int main(){

doubly_t* my_list = create_list_dbl_dbl();

destroy_list_dbl_dbl(my_list);

return 0;
}
