//
//  Project_1--Color_Picker.cpp
//  OpenCV
//
//  Created by shng2025 on 22/11/2022.
//

#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

Mat imgHSV, mask;
int hmin = 0, smin = 0, vmin = 0;
int hmax = 179, smax = 255, vmax = 255;

int main(){
    
    VideoCapture cap(0);
    Mat img;
    
    namedWindow("Trackbars", (640, 200));
    createTrackbar("Hue Min", "Trackbars", &hmin, 179);
    createTrackbar("Hue Max", "Trackbars", &hmax, 179);
    createTrackbar("Sat Min", "Trackbars", &smin, 255);
    createTrackbar("Sat Max", "Trackbars", &smax, 255);
    createTrackbar("Val Min", "Trackbars", &vmin, 255);
    createTrackbar("Val Max", "Trackbars", &vmax, 255);
    
    while(1){
        cap.read(img);
        
        cvtColor(img, imgHSV, COLOR_BGR2HSV);
        
        Scalar lower(hmin, smin, vmin);
        Scalar upper(hmax, smax, vmax);
        inRange(imgHSV, lower, upper, mask);
        
        imshow("Image", img);
        //imshow("Image HSV", imgHSV);
        imshow("Image Mask", mask);
        waitKey(1);
        
    }

    
    return 0;
}
