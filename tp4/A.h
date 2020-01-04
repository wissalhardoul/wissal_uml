#ifndef A_h
#define A_h

#include "intager.h"
#include "integer.h"
#include "string.h"

class c;
class B;

class A {

 public:

    virtual void perimatre();

    virtual void aise();

 public:
    intager R;
    integer centre;
    string cle;

 public:

    /**
     * @element-type c
     */
    c *A_C;

    B *A_B;
};

#endif // A_h
