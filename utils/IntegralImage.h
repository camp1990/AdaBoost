/*
 * IntegralImage.h
 *
 *  Created on: 21/mar/2016
 *      Author: lorenzocioni
 */

#ifndef UTILS_INTEGRALIMAGE_H_
#define UTILS_INTEGRALIMAGE_H_

#include <opencv2/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;

class IntegralImage {

private:
	Mat integralImg;

public:
	IntegralImage(Mat img);
	Mat computeIntegralImage(Mat img);
	double computeArea(Rect r);
	~IntegralImage();
};



#endif /* UTILS_INTEGRALIMAGE_H_ */
