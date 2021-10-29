class A {
public:
    int x; // accessible to everyone
    int getz() { return z; } ; // accessible to everyone
protected:
    int y; // accessible to all derived classes (A, B, C, D)
private:
    int z; // accessible only to A
};

class B : public A {
public:
    int gety() { return y; };
};

class C : protected A {
public:
    int gety() { return y; };
};

class D : private A {
public:
    int gety() { return y; };
};
 
int main() {
    A a;

    B b;

    C c;

    D d;

    return 0;
}
