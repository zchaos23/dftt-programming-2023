/*
课程：程序设计_2023
课程作业：07_02
作业题目：07_02.cpp 基本图像操作
编写⼀个程序，加载⼀张图像，执⾏以下操作：
（1）将图像转换为灰度图（cv::cvtColor）；
（2）将灰度图像⼆值化（cv::threshold）；
（3）将灰度图像进⾏⾼斯模糊处理（cv::GaussianBlur）；
（4）显⽰原始图像和处理后的图像。
*/

#include<opencv2/opencv.hpp>
using namespace cv;

int main() {
    Mat originalImage = imread("c080.png");

    Mat grayImage;
    cvtColor(originalImage, grayImage, COLOR_BGR2GRAY);

    Mat binaryImage;
    threshold(grayImage, binaryImage, 128, 255, THRESH_BINARY);

    Mat blurredImage;
    GaussianBlur(grayImage, blurredImage, Size(5, 5), 0);

    imshow("Original Image", originalImage);
    imshow("Gray Image", grayImage);
    imshow("Binary Image", binaryImage);
    imshow("Blurred Image", blurredImage);

    waitKey(0);
    destroyAllWindows();

    return 0;
}