#include <iostream>
#include "Add.h"
#include "Multiply.h"
#include "Modulo.h"

int main() {
    Subject sbj;

    Add a(&sbj);
    {
        Multiply m(&sbj);
    }
    Modulo md(&sbj);
    sbj.setVal(9, 4);

    sbj.setVal(12 , 5);

    return 0;
}
