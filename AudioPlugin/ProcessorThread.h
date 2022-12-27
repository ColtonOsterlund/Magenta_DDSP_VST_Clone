#pragma once

#include <juce_audio_processors/juce_audio_processors.h>

class ProcessorThread : public  juce::Thread {
public:
    ProcessorThread(): juce::Thread("Processor Thread"){}

    void run() override {
        this->runInference();
    }

private:

    void runInference() {

       auto start = std::chrono::high_resolution_clock::now();

       

        auto stop = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(stop - start).count();
        //DBG("Inference thread took " + std::to_string(duration) + " millisecond(s)");

    }
};