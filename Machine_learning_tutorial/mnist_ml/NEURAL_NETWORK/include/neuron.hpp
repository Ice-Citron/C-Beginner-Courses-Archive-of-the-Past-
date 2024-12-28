#ifndef __NEURON_HPP
#define __NEURON_HPP

#include <stdio.h>
#include <cmath>
#include <vector>

class Neuron{

    public:

    double output;
    double delta;
    std::vector<double> weights;
    Neuron(int, int);
    void initializeWeights(int);

};

#endif