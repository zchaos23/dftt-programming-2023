/*
�γ̣��������_2023
�γ���ҵ��07_03
��ҵ��Ŀ��07_03.cpp ���ͼ���Ե
��д?�����򣬼���?��ͼ��ִ?���²�����
��1�����ͼ���Ե��cv::canny��
��2����?���ͣ�cv::dilate������
��3����?��ʴ��cv::erode��������
��4���ı�ͼ��??������Ϊ50%��cv::resize����
��5����?ԭʼͼ��ʹ�����ͼ��
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