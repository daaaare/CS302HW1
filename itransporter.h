//pure virtual interface where bus and cargo will inherit from

#ifndef TRANSPORTER_H
#define TRANSPORTER_H

template <typename T>
class Transporter{
    public:
    virtual void load(T item) = 0;
    virtual void unload() = 0;
    virtual void empty() = 0;
    virtual bool isEmpty() = 0;
    virtual int count() = 0;
    virtual void move() = 0;
    virtual ~Transporter() {}
};

#endif