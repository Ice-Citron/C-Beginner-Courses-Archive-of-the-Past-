#ifndef __NETWORK_HPP
#define __NETWORK_HPP

#include "../../include/data.hpp"
#include "neuron.hpp"
#include "layer.hpp"
#include "../../include/common.hpp"

class Network : public common_data{
    
    public:

    std::vector<Layer *> layers;
    double learningRate;
    double testPerformance;
    Network(std::vector<int> spec, int, int, double);
    ~Network();
    std::vector<double> fprop(data *data);
    double activate(std::vector<double>, std::vector<double>); // dot product
    double transfer(double);
    double transferDerivative(double); // used for backprop
    void bprop(data *data);
    void updateWeights(data *data);
    int predict(data *data); // return the index of the maximum value in the output array.
    void train(int); // num iterations
    double test();
    void validate();

};

#endif