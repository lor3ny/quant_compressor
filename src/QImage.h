#pragma once

#include <opencv2/opencv.hpp> 
#include <iostream>

class QImage {
    
    private:
        float ratio;

        int width;
        int height;

        cv::Mat image;

    public:

        QImage(int srcWidth, int srcHeight, int outResolution);
        QImage(int srcWidth, int srcHeight);
        ~QImage();


    inline int MemSize() const;


    void CompressImage(int newResolution);

};
