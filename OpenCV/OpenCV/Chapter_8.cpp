//
//  Chapter_8.cpp
//  OpenCV
//
//  Created by shng2025 on 20/11/2022.
//

#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/objdetect.hpp>
#include <iostream>

using namespace cv;
using namespace std;


int main(){

    string Path = "Resources/_maaike.m__293758542_767690941239029_2734329883733247795_n copy.jpg";
    Mat img = imread(Path);
    
    CascadeClassifier faceCascade;
    faceCascade.load("Resources/haarcascade_frontalface_default.xml");
    
    if (faceCascade.empty()) {cout << "XML file not loaded." << endl;}
    
    vector<Rect> faces;
    faceCascade.detectMultiScale(img, faces, 1.1, 10);
    
    for (int i = 0; i < faces.size(); i++){
        rectangle(img, faces[i].tl(), faces[i].br(), Scalar(255, 255, 255), 2);
    }
    
    imshow("Image", img);
    waitKey();

    return 0;
}
