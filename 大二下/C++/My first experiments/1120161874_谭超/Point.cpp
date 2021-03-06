//#include"stdafx.h"
#include <iostream>
#include<fstream>
#include<string>
#include<cmath>
using namespace std;
class Point {				//定义一个Point类
private:
	double  x;				//该类包含三个成员变量，坐标x,y和半径radius
	double  y;
	double  radius;
public:
	double CalculateDistance(Point a, Point b);//声明一个计算两个点距离的成员函数
	void Judge(Point a, Point b);			//声明一个判断两个圆状态的成员函数
	void SetX(double x);					//三个成员函数分别给x,y,radius赋值
	void SetY(double y);
	void SetR(double r);
};
double Point::CalculateDistance(Point a, Point b)//成员函数的定义
{
	return sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
}
void Point::Judge(Point a, Point b)
{
	double mindistance = abs(a.radius - b.radius);//两个圆内切时的距离
	double maxdistance = a.radius + b.radius;//两个圆外切时的距离
	double distance = CalculateDistance(a, b);//两个点间的距离
	if (distance<mindistance || distance>maxdistance) cout << "Seperation!" << endl;//当点间距离小于内切时的距离或大于外切时的距离时，两个圆相离
	else if (distance==mindistance || distance==maxdistance) cout << "Tangent!" << endl;//当点间距离等于内切时的距离或外切时的距离时，两个圆相切
	else cout << "Intersection!" << endl;//当点间距离大于内切时的距离且小于外切时的距离时，两个圆相交
}
void Point::SetX(double a)
{
	x = a;
}
void Point::SetY(double b)
{
	y = b;
}
void Point::SetR(double c)
{
	radius = c;
}
void main()
{
	Point P;
	Point Q;
	double x1, y1, r1, x2, y2, r2;
	cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;//从外部输入端获取两个点的坐标和半径
	P.SetX(x1);
	P.SetY(y1);
	P.SetR(r1);
	Q.SetX(x2);
	Q.SetY(y2);
	Q.SetR(r2);
	cout<<P.CalculateDistance(P , Q)<<endl;
	P.Judge(P, Q);
	//system("pause");
}
