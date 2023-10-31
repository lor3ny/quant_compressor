#include "QImage.h"


QImage::QImage(int srcWidth, int srcHeight, int outResolution){
    
    ratio = srcWidth/srcHeight;

    CompressImage(outResolution);

}

QImage::QImage(int srcWidth, int srcHeight){
    ratio = srcWidth/srcHeight;

    height = -1;
    width = -1;
}


QImage::~QImage(){




    return;
}



inline int QImage::MemSize() const{




    return 0;
}

void QImage::CompressImage(int newResolution){

    height = newResolution;
    width = newResolution * ratio;


    for(int )

}