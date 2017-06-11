// kf.h
// Kalman filter implementation
// Liam Hodgson
// June 10 2017

class KalmanFilter {
private:


public:
	void predict();
	
	void update();

	void initModel(Eigen::Matrix A, Eigen::Matrix B);
};