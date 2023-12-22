/*
课程：程序设计_2023
课程作业：07_01
作业题目：07_01.cpp 图像和视频读取
编写⼀个程序，完成下列操作：
（1）加载并显⽰⼀张图像（cv::imread, cv::Mat, cv::imshow），等待键盘输⼊
（cv::waitkey(n)），输⼊“Esc”退出；
（2）加载⼀个视频（cv::VideoCapture），使⽤while循环读取视频帧，输⼊“Esc”退出；
（3）开启计算机摄像头（cv::VideoCapture）捕获视频，使⽤while循环读取视频帧，输
⼊“Esc”退出。
*/

#include<opencv2/opencv.hpp>
#include<iostream>
using namespace cv;
int main()
{
    Mat img = imread("c080.png");
    imshow("ThisIsUsamiRenko", img);

    int key = waitKey(0);
    
    if (key == 27) {
        destroyAllWindows();
        return 0;
    }

    VideoCapture video("TouhouMutsuigeki.mp4");
    while (true) {
        Mat frame;
        video >> frame;

        if (frame.empty()) {
            break;
        }

        imshow("ThisIsTouhouMutsuigeki", frame);

        key = waitKey(30);
        if (key == 27) {
            destroyAllWindows();
            break;
        }
    }

    VideoCapture camera(0);
    if (!camera.isOpened()) {
        std::cout << "Failed to open camera" << std::endl;
        return -1;
    }

    while (true) {
        Mat frame;
        camera >> frame;

        imshow("Camera", frame);
        key = waitKey(30);

        if (key == 27) {
            destroyAllWindows();
            break;
        }
    }

    return 0;
}