#include <iostream>

using namespace std;

class Father {
public:
    Father();
    Father(int u, int v);
    virtual void display(void);
protected:
    int x;
private:
    int y;
};

class Son : public Father {
public:
    Son(int u, int v);
    void display(void);
private:
    int z;
};

Father::Father() {
    this->x = 101;
    this->y = 101;
}

Father::Father(int u, int v) {
    this->x = u;
    this->y = v;
}

Son::Son(int u, int v) {
    this->x = u;
    this->z = v;
}

void Father::display(void) {
    cout << "x=" << x << ", y=" << y << endl;
}

void Son::display(void) {
    cout << "x=" << x << ", z=" << z << endl;
}

int main(void) {
    Father f(10, 10);
    Son s(20, 20);

    cout << "Father: ";
    f.display();

    cout << "Son: ";
    s.display();

    return 0;
}

