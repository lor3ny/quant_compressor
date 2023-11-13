#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include "Reducer.h"

int main(){

    cv::Mat src = cv::imread("/home/lor3n/Dev/quant_compressor/res/test720.jpg", 
                       cv::IMREAD_ANYCOLOR); 
  
    if (src.empty()) { 
        return -1; 
    } 
  
    cv::imshow("src image", src); 
    cv::waitKey(0); 

    unsigned int red;
    Reducer reductor(red);
    cv::Mat out = reductor.StepCompression(1, src);
    cv::imshow("quant image", out); 
    cv::waitKey(0); 

    return 0; 
}