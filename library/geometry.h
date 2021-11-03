#ifndef _GEOMETRY_H
#define _GEOMETRY_H


/****************************************
* Project CMath
*
* EQUATION: area of a regular hexagon
* BRANCH: Geometry
* VARIABLE DESCRIPTION: s: side of hexagon
****************************************/
double area_hexagon(double s);

/****************************************
* Project CMath
*
* EQUATION: area of a regular hexagon
* BRANCH: Geometry
* VARIABLE DESCRIPTION: p: perimeter, a: apothem
****************************************/
double area_hexagon(double p, double a);

/****************************************
* Project CMath
*
* EQUATION: circumference of a circle
* BRANCH: Geometry
* VARIABLE DESCRIPTION: r: radius
****************************************/
double circumference(double r);

/****************************************
* Project CMath
*
* EQUATION: circumference of a circle
* BRANCH: Geometry
* VARIABLE DESCRIPTION: d: diameter
****************************************/
double circumference(double d);

/****************************************
* Project CMath
*
* EQUATION: area of a circle
* BRANCH: Geometry
* VARIABLE DESCRIPTION: r: radius
****************************************/
double area_circle(double r);

/****************************************
* Project CMath
*
* EQUATION: hypotenuse
* BRANCH: Geometry
* VARIABLE DESCRIPTION: a & b are other two sides of triangle
****************************************/
double hypotenuse(double a, double b);

/****************************************
* Project CMath
*
* EQUATION: volume of triangular prism
* BRANCH: Geometry
* VARIABLE DESCRIPTION: base_side & height
****************************************/
double triangular_prism_volume(double base_side, double height);

/****************************************
* Project CMath
*
* EQUATION: lateral surface area
* BRANCH: Geometry
* VARIABLE DESCRIPTION: height & perimeter (sum of three sides)
****************************************/
double triangular_prism_lateral_surface_area(double height, double perimeter);

/****************************************
* Project CMath
*
* EQUATION: surface area of triangular prism
* BRANCH: Geometry
* VARIABLE DESCRIPTION: height & a,b,c are three sides of triangle
****************************************/
double triangular_prism_surface_area(double a, double b, double c, double height);

/****************************************
* Project CMath
*
* EQUATION: volume of cuboid/rectangular prism
* BRANCH: Geometry
* VARIABLE DESCRIPTION: a,b,c are width,height and length
****************************************/
double cuboid_volume(double a, double b, double c);

/****************************************
* Project CMath
*
* EQUATION: surface area of cuboid/rectangular prism
* BRANCH: Geometry
* VARIABLE DESCRIPTION: a,b,c are width,height and length
****************************************/
double cuboid_area(double a, double b, double c);

/****************************************
 * Project CMath
 *
 * Equation: lateral area of a cone (l.a = pi*radius*length)
 * BRANCH: Geometry
 * VARIABLE DESCRIPTION: radius, length
****************************************/
float cone_lateral_area(float radius, float length);

/****************************************
 * Project CMath
 *
 * EQUATION: surface area of a cone(s.a = (2*pi*radius*(radius+height))
 * BRANCH: Geometry
 * VARIABLE DESCRIPTION: radius, length
****************************************/
float cone_surface_area(float radius, float length);

/****************************************
 * Project CMath
 *
 * EQUATION:volume of a cone(v = (1/3)*pi*radius^2*height)
 * BRANCH: geometry
  * VARIABLE DESCRIPTION: radius, length
****************************************/
float cone_volume(float radius, float height);

/****************************************
 * Project CMath
 *
 * Equation:lateral area of a cylinder(l.a= 2*pi*radius*height)
 * BRANCH: Geometry
 * VARIABLE DESCRIPTION: radius, length
****************************************/
float cylinder_lateral_area(float radius, float height);

/****************************************
 * Project CMath
 *
 * EQUATION: surface area of a cylinder(l.a= 2*pi*radius^2 +2*pi*radius*height)
 * BRANCH: Geometry
 * VARIABLE DESCRIPTION: radius, length
****************************************/
float cylinder_surface_area(float radius, float height);

/****************************************
 * Project CMath
 * EQUATION: volume area of a cylinder(v= pi*radius^2*height)
 * BRANCH: Geometry
 * VARIABLE DESCRIPTION: radius, length
****************************************/
float cylinder_volume(float radius, float height);

/****************************************
 * Project CMath
 * EQUATION: lateral area of a pyramid(l.a= (1/2)*length*perimeter)
 * BRANCH: geometry
 *VARIABLE DESCRIPTION: length, perimeter
****************************************/
float pyramid_lateral_area(float length, float perimeter);

/****************************************
 * Project CMath
 *
 * EQUATION: volume of a sphere(v= (4/3)*radius^3)
 * BRANCH: geometry
 * VARIABLE DESCRIPTION: radius
****************************************/
float sphere_volume(float radius);

/****************************************
 * Project CMath
 *
 * EQUATION: surface area of a pyramid(s.a= (1/2)*(length*perimeter)+area_of_base)
 * BRANCH: geometry
 * VARIABLE DESCRIPTION: length, perimeter, area of the base
****************************************/
float pyramid_surface_area(float length, float perimeter,float area_of_base);

/****************************************
 * Project CMath
 *
 * Equation:volume of a pyramid(v= (1/3)*(breadth*height))
 * BRANCH: geometry
 *VARIABLE DESCRIPTION: breadth, height
****************************************/
float pyramid_volume(float breadth, float height);

/****************************************
 * Project CMath
 *
 * Equation:surface area of a sphere(s.a= 4*pi*radius^2)
 * BRANCH: Geometry
 * VARIABLE DESCRIPTION: radius
****************************************/
float sphere_surface_area(float radius);

/****************************************
* Project CMath
*
* EQUATION: area of square
* BRANCH: Geometry
* VARIABLE DESCRIPTION: side of square
****************************************/
double area_square(double side);

/****************************************
 * Project CMath
 *
 * EQUATION: perimeter of rectangle
 * BRANCH: Geometry
 * VARIABLE DESCRIPTION: radius, length
****************************************/
double perimeter_rectangle(double length , double width);

/****************************************
 * Project CMath
 *
 * EQUATION: area of triangle
 * BRANCH: Geometry
 * VARIABLE DESCRIPTION: base and height of triangle
****************************************/
double area_triangle(double base , double height);

/****************************************
 * Project CMath
 *
 * EQUATION: area of rectangle
 * BRANCH: Geometry
 * VARIABLE DESCRIPTION: length and width of rectangle
****************************************/
double area_rectangle (double length , double width);

/****************************************
 * Project CMath
 *
 * EQUATION: area of parallelogram
 * BRANCH: Geometry
 * VARIABLE DESCRIPTION: base and height
****************************************/
double area_parallelogram(double base , double height);

/****************************************
 * Project CMath
 *
 * EQUATION: area of trapeziod
 * BRANCH: Geometry
 * VARIABLE DESCRIPTION: base1, base2 and height
****************************************/
double area_trapeziod(double b1 , double b2 , double height);


#endif //_GEOMETRY_H
