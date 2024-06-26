#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
    std::cout << "Hello OpenCV " << CV_VERSION << std::endl;

    Mat img;
    img = imread("/Users/yoonkyull/Documents/code/git-project/cpproj/1395355.jpg");

    if (img.empty())
    {
        cerr << "Image load failed!" << endl;
        return -1;
    }

    namedWindow("image");
    imshow("image", img);

    waitKey();
    return 0;
}