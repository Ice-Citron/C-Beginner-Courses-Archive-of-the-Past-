//
//  Chapter_7.cpp
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

Mat imgGray, imgBlur, imgCanny, imgDilate, imgErosion;

void getContours(Mat imgDilate, Mat img){
   
    vector<vector<Point>> contours;
    vector<Vec4i> hierarchy;
    
    findContours(imgDilate, contours, hierarchy, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);
    //drawContours(img, contours, -1, Scalar(255, 0, 255), 2);
        
    vector<vector<Point>> conPoly(contours.size());
    vector<Rect> boundRect(contours.size());
    string objectType;
    
    for (int i = 0; i < contours.size(); i++){
        
        int area = contourArea(contours[i]);
        if (area > 1000){
            
            float peri = arcLength(contours[i], true);
            approxPolyDP(contours[i], conPoly[i], 0.02 * peri, true);
            drawContours(img, conPoly, i, Scalar(255, 0, 255), 2);
            cout << conPoly[i].size() << endl;
            boundRect[i] = boundingRect(conPoly[i]);
            
            int objCor = (int)conPoly[i].size();
            
            if (objCor == 3) {objectType = "Tri";}
            if (objCor == 4) {
                float aspRatio = (float)boundRect[i].width / (float)boundRect[i].height;
                cout << aspRatio << endl;
                if (aspRatio > 0.95 && aspRatio < 1.05){
                    objectType = "Square";
                }
                else{
                    objectType = "Rect";
                }
            }
            if (objCor > 4) {objectType = "Circle";}
            
            rectangle(img, boundRect[i].tl(), boundRect[i].br(), Scalar(0, 255, 0), 5);
            putText(img, objectType, {boundRect[i].x, boundRect[i].y - 5}, FONT_HERSHEY_PLAIN,
                    1, Scalar(0, 69, 255), 2);
            
        }
        
    }
    
}

int main(){
    
    string Path = "Resources/shapes.png";
    Mat img = imread(Path);
    
    //Pre-processing nodes
    cvtColor(img, imgGray, COLOR_BGR2GRAY);
    GaussianBlur(imgGray, imgBlur, Size(3, 3), 3, 0);
    Canny(imgBlur, imgCanny, 25, 75);
    Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3));
    dilate(imgCanny, imgDilate, kernel);
    
    getContours(imgDilate, img);
    
    imshow("Image", img);
    /*imshow("Image Gray", imgGray);
    imshow("Image Blur", imgBlur);
    imshow("Image Canny", imgCanny);
    imshow("Image Dilate", imgDilate);*/
    waitKey(0);
    
    return 0;
}
