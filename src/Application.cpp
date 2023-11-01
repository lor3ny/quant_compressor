#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include "QImage.h"

int main(){

    cv::Mat src = cv::imread("/home/lor3n/Dev/quant_compressor/res/test.jpeg", 
                       cv::IMREAD_GRAYSCALE); 
  
    if (src.empty()) { 
        return -1; 
    } 
  
    cv::imshow("src image", src); 
    cv::waitKey(0); 

    QImage quantImage(2, src);

    cv::imshow("quant image", quantImage.GetImage()); 
    cv::waitKey(0); 

    return 0; 
}