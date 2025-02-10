#include "index.h"

void test(char name[],int assert){
    if(assert) printf("%s -> success\n",name);
    else printf("%s -> fail\n",name);
}