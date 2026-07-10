#include <iostream>

class A {
    private:
        int a = 1;
        friend class B; // B É CLASSE AMIGA DE A
};

class C : public A {
    private:
        int c = 2;
};

class B {
    public:
        void access(C *c) {
            int x = c->a;
            // int y = c->c;
        }
};