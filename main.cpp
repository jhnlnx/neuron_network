#include "NeuralNetwork.hpp"
#include <iostream>

int main(int argc, char** argv){
    int pattern[]={1,0,1,0};
    int w[4][4]={ {0,-3,3,-3},
                {-3,0,-3,3},
                {3,-3,0,-3},
                {-3,3,-3,0}};
    Network network=Network(4,w);
    network.activation(pattern);
    for(int i=0;i<4;i++)
        std::cout<<network.output[i]<<", ";
}