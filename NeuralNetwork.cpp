#include "NeuralNetwork.hpp"
#include "stdlib.h"
Neuron::Neuron(int *weights,int neighbours){
    this->weight= new int[neighbours];
    for(int i=0;i<neighbours;i++)
        this->weight[i] = *(weights+i);
}

int Neuron::act(int m, int* x){
    int a=0;
    for(int i=0; i<m;i++)
        a+= x[i]*this->weight[i];
    return a;
}

Network::Network(int neuron_count,int **weights){
    this->neurons= (Neuron*) malloc(sizeof(Neuron)*neuron_count);
    this->network_size = neuron_count;
    this->output = new int[neuron_count];
    for(int i=0;i<neuron_count;i++)
        this->neurons[i]=Neuron(weights[i],neuron_count);
    
}

int Network::threshold(int th){
    if(th>=0)
        return 1;
    return 0;
}

void Network::activation(int *patern){
    int j=0;
    for(int i=0;i<this->network_size;i++)
        this->neurons[i].activation=this->neurons[i].act(this->network_size,patern);
        this->output[i]=this->threshold(this->neurons[i].activation);
}


InNeuron::InNeuron(float j){
    this->weight=j;
}

float InNeuron::act(float x){
    return x*this->weight;
}

void OutNeuron::activation(float j){
    int act = 0;
    for(int i=0;i<4;i++){
        this-
    }

}