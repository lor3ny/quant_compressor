#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include "QImage.h"

int main(){

    cv::Mat src = cv::imread("/home/lor3n/Dev/quant_compressor/res/test720.jpg", 
                       cv::IMREAD_ANYCOLOR); 
  
    if (src.empty()) { 
        return -1; 
    } 
  
    cv::imshow("src image", src); 
    cv::waitKey(0); 

    QImage quantImage(1, src);
    cv::imshow("quant image", quantImage.GetImage()); 
    cv::waitKey(0);

    quantImage.CompressImage(2);
    cv::imshow("quant image", quantImage.GetImage()); 
    cv::waitKey(0); 

    quantImage.CompressImage(3);
    cv::imshow("quant image", quantImage.GetImage()); 
    cv::waitKey(0); 

    quantImage.CompressImage(4);
    cv::imshow("quant image", quantImage.GetImage()); 
    cv::waitKey(0); 

    return 0; 
}