#ifndef EX04_LIBRARY_H_
#define EX04_LIBRARY_H_

class Buffer {
public:
    virtual void write(int v) = 0;
    virtual int read() = 0;
    virtual unsigned int writeCount() = 0;
    virtual int readAvg() = 0;
    virtual ~Buffer();
};

#include <set>
#include <vector>
using namespace std;

class SensorBuffer: public Buffer {
private:
    vector<int> data;
    int defaultValue = 0;
public:
    SensorBuffer(int defaultValue);
    void write(int v);
    int read();
    unsigned int writeCount();
    int readAvg();
};

#endif /* EX04_LIBRARY_H_ */
