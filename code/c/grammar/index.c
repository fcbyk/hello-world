#include "index.h"

void grammar(){

    test("var",var(1) == 5 && var(2) == 8);
    test("type",type(42) && type(22));
}
