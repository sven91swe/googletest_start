#include "ExampleClass.hpp"


ExampleClass::ExampleClass(){
    this->x = 0;
}

ExampleClass::~ExampleClass(){}


int ExampleClass::setNewAndReturnLast(int n){
    int temp = this->x;
    this->x = n;
    return temp;
}