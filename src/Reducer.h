#pragma once

#include <opencv2/opencv.hpp> 
#include <iostream>

class Reducer {
    
    private:
        unsigned int ID;

    public:
        Reducer(unsigned int IDvalue) : ID(IDvalue) {}
        ~Reducer() {}

        int MemSize() const;
        cv::Mat StepCompression(int level, cv::Mat& srcImage);

};
