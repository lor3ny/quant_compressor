#include "QImage.h"


QImage::QImage(int compressionLevel, cv::Mat& srcImage){
    CompressImage(compressionLevel, srcImage);
}

QImage::~QImage(){
    //this->image = NULL;
    return;
}


int QImage::MemSize() const{

    return 0;
}

cv::Mat QImage::GetImage() const{

    return this->image;
}

void QImage::CompressImage(int level, cv::Mat& srcImage){

    char startIndex = level/2;
    char step = level+1;


    int rows = srcImage.rows/step;
    int cols = srcImage.cols/step;
    std::cout << rows << std::endl;
    std::cout << cols << std::endl;
    
    this->image = cv::Mat(rows, cols, CV_8UC3);

    int x = level-1;
    int y;
    for(int i = 0; i<rows; i++){
        y = level-1;

        for(int j = 0; j<cols; j++){

            cv::Vec3b& bgrPixel = srcImage.at<cv::Vec3b>(x, y);

            this->image.at<cv::Vec3b>(i,j) = bgrPixel;
            y += step;
        }

        x += step;
    }
}

void QImage::CompressImage(int level){

    char startIndex = level/2;
    char step = level+1;

    cv::Mat previousImage = this->image;

    int rows = this->image.rows/step;
    int cols = this->image.cols/step;
    std::cout << rows << std::endl;
    std::cout << cols << std::endl;
    
    this->image = cv::Mat(rows, cols, CV_8UC3);

    int x = level-1;
    int y;
    for(int i = 0; i<rows; i++){
        y = level-1;

        for(int j = 0; j<cols; j++){

            cv::Vec3b& bgrPixel = previousImage.at<cv::Vec3b>(x, y);

            this->image.at<cv::Vec3b>(i,j) = bgrPixel;
            y += step;
        }

        x += step;
    }
}