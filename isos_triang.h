#ifndef ISOS_TRIANG_H
#define ISOS_TRIANG_H

struct IsosTriang{
	private:
		double side;
		double angle;
	public:
		void setSide(double);
		void setAngle(double);
		double getSide();
		double getAngle();
		void changeSize(double);
		double findHeight();
		double findBisec();
		double findBHM();
		double findStem();
};
#endif
