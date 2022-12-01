//
// Created by Dani on 12/1/2022.
//

#include <algorithm>
#include <iostream>
#include "Subject.h"

void Subject::notify() {
    std::cout<<"New modification!"<<std::endl;
    for(IObserver * obs : views)
        obs->update();
}

void Subject::attach(IObserver * obs) {
    views.push_back(obs);
    std::cout<<"Observer with tag: "<<obs->getTag()<<" created!"<<std::endl;
}

void Subject::deattach(IObserver * obs) {
    auto iterator = std::find(views.begin(), views.end(), obs);
    if(iterator != views.end())
        views.erase(iterator);
        std::cout<<"Observer with tag: "<<obs->getTag()<<" erased!"<<std::endl;
}

void Subject::setVal(int f, int s) {
    first = f;
    second = s;
    notify();
}