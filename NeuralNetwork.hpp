
class InNeuron{
    protected:
        float weight,activation;
        friend class OutNeuron;
    public:
        InNeuron(float j);
        float act(float x);
};

class OutNeuron{
    protected:
        int output;
        float activation_res;
        friend class network;
    public:
        OutNeuron(){};
        void activation(float x[4],InNeuron *neuron);
        int out_value(float j);

};
/*
class Network{
    public:
        InNeuron* input_neurons;
        OutNeuron output_neuron;
        Network(float,float,float,float);
};*/

class Neuron{
    protected:
        int activation;
        friend class Network;

    public:
        int *weight;
        Neuron(int *j,int neighbours);
        int act(int m, int* x);

};

class Network{
    public:
        Neuron *neurons;
        int *output, network_size;
        int threshold(int th);
        void activation(int *patern);
        Network(int neuron_count,int **weights);
};