/*
课程：程序设计_2023
课程作业：07_03
作业题目：07_03.cpp 检测图像边缘
编写?个程序，加载?张图像，执?以下操作：
（1）检测图像边缘（cv::canny）
（2）进?膨胀（cv::dilate）操作
（3）进?侵蚀（cv::erode）操作。
（4）改变图像??，缩放为50%（cv::resize）；
（5）显?原始图像和处理后的图像。
*/

#include<opencv2/opencv.hpp>
using namespace cv;

int main() {
    Mat originalImage = imread("c080.png");

    Mat edges;
    Canny(originalImage, edges, 50, 150);

    Mat dilatedImage;
    dilate(edges, dilatedImage, Mat(), Point(-1, -1), 2);

    Mat erodedImage;
    erode(dilatedImage, erodedImage, Mat(), Point(-1, -1), 2);

    Mat resizedImage;
    resize(originalImage, resizedImage, Size(), 0.5, 0.5);

    imshow("Original Image", originalImage);
    imshow("Edges", edges);
    imshow("Dilated Image", dilatedImage);
    imshow("Eroded Image", erodedImage);
    imshow("Resized Image", resizedImage);

    waitKey(0);
    destroyAllWindows();

    return 0;
}