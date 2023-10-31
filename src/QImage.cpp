#include "QImage.h"


QImage::QImage(int compressionLevel, cv::Mat srcImage){

    CompressImage(compressionLevel, srcImage);
}

QImage::~QImage(){

    return;
}


int QImage::MemSize() const{

    return 0;
}

cv::Mat QImage::GetImage() const{

    return image;
}

void QImage::CompressImage(int level, cv::Mat srcImage){

    char startIndex = level/2;
    char step = level+1;

    image = cv::Mat(srcImage.cols/startIndex, srcImage.rows/startIndex, CV_8UC3);

    for(int i = startIndex; i<srcImage.cols; i+=step){
        for(int j = startIndex; j<srcImage.rows; j+=step){

            image.at<uchar>(i,j) = (0,255,0);
        }
    }
}