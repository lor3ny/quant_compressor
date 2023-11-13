#include "Reducer.h"


int Reducer::MemSize() const{
    return 0;
}

cv::Mat Reducer::StepCompression(int level, cv::Mat& srcImage){

    char startIndex = level/2;
    char step = level+1;

    int rows = srcImage.rows/step;
    int cols = srcImage.cols/step;
    
    cv::Mat outImage= cv::Mat(rows, cols, CV_8UC3);

    int x = level-1;
    int y;
    for(int i = 0; i<rows; i++){
        y = level-1;

        for(int j = 0; j<cols; j++){

            cv::Vec3b& bgrPixel = srcImage.at<cv::Vec3b>(x, y);

            outImage.at<cv::Vec3b>(i,j) = bgrPixel;
            y += step;
        }

        x += step;
    }

    return outImage;
}