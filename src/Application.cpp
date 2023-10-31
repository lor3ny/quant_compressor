#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include "QImage.h"

int main(){

    cv::Mat image = cv::imread("/home/lor3n/Dev/quant_compressor/res/test.jpeg", 
                       cv::IMREAD_GRAYSCALE); 
  
    if (image.empty()) { 
        return -1; 
    } 
  
    cv::imshow("src image", image); 
    cv::waitKey(0); 

    QImage quantImage(3, image);

    cv::imshow("quant image", quantImage.GetImage()); 
    cv::waitKey(0); 

    return 0; 
}