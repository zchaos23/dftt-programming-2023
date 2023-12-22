/*
课程：程序设计_2023
课程作业：07_04_Bonus
作业题目：07_04_Bonus.cpp 检测图像边缘
创建⼀个交互式应⽤程序，⽤户可以通过滑动条来调整图像的亮度和对⽐度。
提⽰：使⽤ cv::createTrackbar 创建滑动条，根据滑动条的位置调整图像的亮度和对⽐
度，动态显⽰调整结果。
*/

#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main() {
    Mat image = imread("c080.png");

    namedWindow("Adjust Brightness and Contrast", WINDOW_AUTOSIZE);

    int brightness = 50;
    int contrast = 50;

    createTrackbar("Brightness", "Adjust Brightness and Contrast", &brightness, 100);
    createTrackbar("Contrast", "Adjust Brightness and Contrast", &contrast, 100);

    while (true) {
        Mat adjustedImage = Mat::zeros(image.size(), image.type());
        image.convertTo(adjustedImage, -1, contrast / 50.0, brightness - 50);

        imshow("Adjust Brightness and Contrast", adjustedImage);

        char key = waitKey(10);
        if (key == 27)
            break;
    }

    return 0;
}