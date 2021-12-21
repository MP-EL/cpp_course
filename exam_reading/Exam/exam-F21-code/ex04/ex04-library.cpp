#include "ex04-library.h"
#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>


SensorBuffer::SensorBuffer(int defaultValue) {
    this->defaultValue = defaultValue;
}

void SensorBuffer::write(int v) {
    this->data.push_back(v);
}

unsigned int SensorBuffer::writeCount(){
    return this->data.size();
}

int SensorBuffer::read() {
    if (this->data.size() == 0) {
        return 0;
    }

    int ret = this->data.back();
    // this->data.erase(this->data.begin());

    return ret;
}

int SensorBuffer::readAvg(){
    if (this->data.size() == 0) {
        return 0;
    }
    double avg = 0;
    if(defaultValue > this->data.size()){
        
        for(auto i = 0; i < this->data.size(); i++){
            avg += this->data[i];
        }
        return ceil(avg / this->data.size());
    }
    else{
        std::vector<int> a;
        a = this->data;
        std::reverse(a.begin(), a.end());
        for(auto i = 0; i < defaultValue; i++){
            avg += a[i];
        }
        return ceil(avg / defaultValue);
    }
    
}

// Do not modify
Buffer::~Buffer() {
    // Empty destructor
}
