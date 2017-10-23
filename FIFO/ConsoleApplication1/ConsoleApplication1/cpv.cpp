#include<opencv2\core\core.hpp>	
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

cv::Mat image;
int main()
{
	
	 

//	std::cout << "This image is " << image.rows << " x"
//		<< image.cols << std::endl;
	image = cv::imread("image123.bmp");

	if (image.empty())
	{
		std::cout << "error handler" << std::endl;
	}
	std::cout << "This image is " << image.rows << " x"
		<< image.cols << std::endl;

	cv::namedWindow("My first picture");
	cv::imshow("My first picture", image);
	//cv::waitKey(0);

	cv::Mat result;
	cv::flip(image, result, 1);
	cv::namedWindow("output Image");
	cv::imshow("output Image", result);
	cv::waitKey(0);

	cv::imwrite("output.bmp", result);


	return 0;

	
}