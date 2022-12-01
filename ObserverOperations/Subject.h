//
// Created by Dani on 12/1/2022.
//

#ifndef OBSERVEROPERATIONS_SUBJECT_H
#define OBSERVEROPERATIONS_SUBJECT_H


#include <vector>

class IObserver;
static int OBS_COUNTER = 0;


class Subject {
    std::vector <IObserver*> views;
    void notify();

    int first, second;

public:
    void attach(IObserver *);
    void deattach(IObserver *);

    void setVal(int, int);

    inline int getFirst() const {return first;};
    inline int getSecond() const {return second;};

};


class IObserver{
protected:
    Subject* model;
    int tag;

public:
    IObserver(Subject *mod){
        model = mod;
        tag = OBS_COUNTER + 1;
        OBS_COUNTER++;
        model->attach(this);

    }

    int getTag(){
        return tag;
    }

    virtual ~IObserver(){
        model->deattach(this);
        tag -= 1;
    }

    virtual void update() = 0;

};


#endif //OBSERVEROPERATIONS_SUBJECT_H
