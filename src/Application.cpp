#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include "QImage.h"

int main(){

    cv::Mat image = cv::imread("/home/lor3n/Dev/opencv-test/res/test.jpeg", 
                       cv::IMREAD_GRAYSCALE); 
  
    if (image.empty()) { 
        return -1; 
    } 
  
    cv::imshow("Window Name", image); 

    cv::waitKey(0); 
    return 0; 
}