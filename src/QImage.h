#pragma once

#include <opencv2/opencv.hpp> 
#include <iostream>

class QImage {
    
    private:
        int width;
        int height;

        cv::Mat image;

    public:

        QImage(int compressionLevel, cv::Mat& srcImage);
        ~QImage();


    int MemSize() const;

    cv::Mat GetImage() const;

    void CompressImage(int level, cv::Mat& srcImage);


};
