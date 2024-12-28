//
//  Chapter_2.cpp
//  OpenCV
//
//  Created by shng2025 on 20/11/2022.
//


#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(){
    
    string path = "Resources/test.png";
    Mat img = imread(path);
    Mat imgGray, imgBlur, imgCanny, imgDilate, imgErosion;
    Mat kernel = getStructuringElement(MORPH_RECT, Size(5, 5));
    
    cvtColor(img, imgGray, COLOR_BGR2GRAY);
    GaussianBlur(img, imgBlur, Size(7, 7), 5, 0);
    Canny(imgBlur, imgCanny, 50, 150);
    dilate(imgCanny, imgDilate, kernel);
    erode(imgDilate, imgErosion, kernel);
    
    imshow("Image", img);
    imshow("Image Gray", imgGray);
    imshow("Image Blur", imgBlur);
    imshow("Image Canny", imgCanny);
    imshow("Image Dilation", imgDilate);
    imshow("Image Erosion", imgErosion);
    waitKey(0);
    
    return 0;
}


