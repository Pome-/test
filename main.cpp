//
//  main.cpp
//  test
//
//  Created by 강은철 on 2014. 3. 4..
//  Copyright (c) 2014년 강은철. All rights reserved.
//

#include <iostream>
#include <opencv2/opencv.hpp>

int main (int argc, const char * argv[]) {
    cv::Mat img = cv::imread("/Users/K/Pictures/LEAF/A/1.JPG");
    
    cv::namedWindow("Test");
    
    cv::imshow("Test", img);
    
    cv::waitKey(0);
    return 0;
    
    123
    12
    12
    1
}