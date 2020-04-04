#ifndef EXAMPLE_CLASS_HPP
#define EXAMPLE_CLASS_HPP

class ExampleClass{
    public:

    ExampleClass();
    virtual ~ExampleClass();

    int setNewAndReturnLast(int n);

    private:
    int x;
};

#endif //EXAMPLE_CLASS_HPP