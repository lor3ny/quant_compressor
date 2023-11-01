#include "QImage.h"


QImage::QImage(int compressionLevel, cv::Mat& srcImage){

    CompressImage(compressionLevel, srcImage);
}

QImage::~QImage(){

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


    int rows = srcImage.rows/level;
    int cols = srcImage.cols/level;
    std::cout << rows << std::endl;
    std::cout << cols << std::endl;
    
    this->image = cv::Mat(rows, cols, CV_8UC3, cv::Scalar(0,255,0));


    int x = 0;
    for(int i = 0; i<this->image.rows; ++i){
        int y = 0;
        for(int j = 0; j<this->image.cols; ++j){


            this->image.at<cv::Vec3b>(i,j) = cv::Vec3b(0,0,srcImage.at<uchar>(x,y));
        

            y = y+step;
            if(y>srcImage.rows)
                y = y-step;
        }
        x= x+step;
        if(x>srcImage.rows)
                x = x-step;
    }
}