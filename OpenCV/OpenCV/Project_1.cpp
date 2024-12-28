//
//  Project_1.cpp
//  OpenCV
//
//  Created by shng2025 on 21/11/2022.
//

#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

vector<vector<int>> myColors {{}, {}, {}};

void findColor(Mat img){
    cvtColor(img, imgHSV, COLOR_BGR2HSV);
    
    Scalar lower(hmin, smin, vmin);
    Scalar upper(hmax, smax, vmax);
    inRange(imgHSV, lower, upper, mask);
}

int main() {

    VideoCapture cap(0);
    Mat img;
    
    while(true){
        cap.read(img);
        
        findColor(img);
        
        imshow("Image", img);
        waitKey(1);
    }
    
    return 0;
}
