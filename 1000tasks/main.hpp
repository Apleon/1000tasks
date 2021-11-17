#include <stdio.h>
#include <iostream>
#include <cmath>
#include <math.h>

//task 1
int perimeter_square_count(int side_a) {
    return side_a * 4;
}

//task 2
int square_of_square_cout(int side_a) {
    return pow(side_a, 2);
}
//
//task3.1
int perimeter_of_rectangle_count(int side_a, int side_b) {
    return 2 * (side_a + side_b);
}
//
//task3.2
int square_of_rectangle_count(int side_a, int side_b) {
    return side_a * side_b;
}

//task 3
int perimeter_and_square_of_rectangle(int side_a, int side_b) {
    std::cout << square_of_rectangle_count(side_a, side_b) << std::endl <<  perimeter_of_rectangle_count(side_a, side_b) << std::endl;
    return 0;
}
//
//task 4
int length(double diameter){
    return diameter * M_PI;
}
//
//task 5.1
int cube_volume(int edge_length) {
    return pow(edge_length, 3);
}

//task 5.2
int surface_area(int edge_length) {
    return 6 * pow(edge_length, 2);
}

////task 5
int  cube_volume_and_surface_area (int edge_length) {
    std::cout << cube_volume(edge_length) << std::endl << surface_area(edge_length) << std::endl;
    return 0;
}

//task 6.1
int volume_of_rectangular_parallelepiped(int edge_length_a, int edge_length_b, int edge_length_c) {
    return edge_length_a* edge_length_b * edge_length_c;
}

//task 6.2
int surface_area(int edge_length_a, int edge_length_b, int edge_length_c) {
    if (edge_length_a <= 0 || edge_length_b  <= 0 || edge_length_c <= 0){
        std::cout << "some of length less or equal zero";
        return 1;
    }
    return 2 * (edge_length_a * edge_length_b + edge_length_b * edge_length_c + edge_length_a * edge_length_c);
}

//task 6
int vol_of_rect_parall_and_surf_area(int edge_length_a, int edge_length_b, int edge_length_c) {
    
    std::cout << volume_of_rectangular_parallelepiped(edge_length_a, edge_length_b, edge_length_c) << std::endl << surface_area(edge_length_a, edge_length_b, edge_length_c) << std::endl;
    
    return 0;
}

//task 7.1
int length_of_circle(double radius) {
    return 2 * M_PI * radius;
}
//task 7.2
int square_of_circle(double radius) {
    return M_PI * pow(radius, 2);
}

//task 7
int length_and_square_of_circle (double radius) {
    std::cout << length_of_circle(radius) << std::endl << square_of_circle(radius) << std::endl;
    return 0;
}

//task 8
int average(int num_a, int num_b) {
    return (num_a + num_b) / 2;
}

//task 9
int geometric_mean(int num_a, int num_b) {
    return sqrt(num_a * num_b);
}

//task 10.1
int sum_sq_of_nonzero_numbers(int num_a, int num_b) {
    if (num_a == 0 || num_b == 0) {
        std::cout << "numbers must be != 0";
    }
    return pow(num_a, 2) + pow(num_b, 2);
}

//task 10.2
int diff_sq_of_nonzero_numbers(int num_a, int num_b) {
    if (num_a == 0 || num_b == 0) {
        std::cout << "numbers must be != 0";
    }
    return pow(num_a, 2) - pow(num_b, 2);
}

//task 10.3
int prod_sq_of_nonzero_numbers(int num_a, int num_b) {
    if (num_a == 0 || num_b == 0) {
        std::cout << "numbers must be != 0";
    }
    return pow(num_a, 2) * pow(num_b, 2);
}

//task 10.4
int quot_sq_of_nonzero_numbers(int num_a, int num_b) {
    if (num_a == 0 || num_b == 0) {
        std::cout << "numbers must be != 0";
    }
    return pow(num_a, 2) / pow(num_b, 2);
}

//task 10
int sum_diff_prod_quot_of_nonzero_numbers(int num_a, int num_b) {
    std::cout << sum_sq_of_nonzero_numbers(num_a, num_b) << std::endl << diff_sq_of_nonzero_numbers(num_a, num_b) << std::endl << prod_sq_of_nonzero_numbers(num_a, num_b) << std::endl << quot_sq_of_nonzero_numbers(num_a, num_b) << std::endl;
    return 0;
}

//task 11.1
int sum_of_modules_nonzero_numbers(int num_a, int num_b) {
    if (num_a == 0 || num_b == 0) {
        std::cout << "numbers must be != 0";
    }
    return fabs(num_a) + fabs(num_b);
}

//task 11.2
int diff_of_modules_nonzero_numbers(int num_a, int num_b) {
    if (num_a == 0 || num_b == 0) {
        std::cout << "numbers must be != 0";
    }
    return fabs(num_a) - fabs(num_b);
}

//task 11.3
int prod_of_modules_nonzero_numbers(int num_a, int num_b) {
    if (num_a == 0 || num_b == 0) {
        std::cout << "numbers must be != 0";
    }
    return fabs(num_a) * fabs(num_b);
}

//task 11.4
int quot_of_modules_nonzero_numbers(int num_a, int num_b) {
    if (num_a == 0 || num_b == 0) {
        std::cout << "numbers must be != 0";
    }
    return fabs(num_a) / fabs(num_b);
}


//task 11
int sum_diif_prod_quot_of_modules_nonzero_numbers(int num_a, int num_b) {
    std::cout << sum_of_modules_nonzero_numbers(num_a, num_b) << std::endl << diff_of_modules_nonzero_numbers(num_a, num_b) << std::endl << prod_of_modules_nonzero_numbers(num_a, num_b) << std::endl << quot_of_modules_nonzero_numbers(num_a, num_b) << std::endl;
    return 0;
}

//task 12.1
int hypotenuse_of_triangle(int cathet_a, int cathet_b) {
    return sqrt(pow(cathet_a, 2) + pow(cathet_b, 2));
}

//task 12.2
int perimeter_of_right_triangle(int cathet_a, int cathet_b, int hypotenuse) {
    return cathet_a + cathet_b + hypotenuse;
}

//task 12
int hypotenuse_and_perimeter_of_right_triangle(int cathet_a, int cathet_b, int hypotenuse) {
    std::cout << hypotenuse_of_triangle(cathet_a, cathet_b) << std::endl << perimeter_of_right_triangle(cathet_a, cathet_b, hypotenuse) << std::endl;
    return 0;
}

//task 13.1
int square_of_circle_1(int radius_1, int radius_2) {
    if (radius_2 > radius_1) {
        std::cout << "radius_1 must be > radius_2";
    }
    return M_PI * pow(radius_1, 2);
}

//task 13.2
int square_of_circle_2(int radius_1, int radius_2) {
    if (radius_2 > radius_1) {
        std::cout << "radius_1 must be > radius_2";
    }
    return M_PI * pow(radius_2, 2);
}

//task 13.3
int square_of_circle_3(int square_of_circle_1, int square_of_circle_2) {
    return square_of_circle_1 - square_of_circle_2;
}

//task 13
int square_of_circles(int radius_1, int radius_2) {
    std::cout << square_of_circle_1(radius_1, radius_2) << std::endl << square_of_circle_2(radius_1, radius_2) << std::endl <<
    square_of_circle_3(28, 12) << std::endl;
    return 0;
}

//task 14.1
int radius_circ_limited_by_circle(int length_l) {
    return length_l / (2 * M_PI);
}

//task 14.2
int square_circ_limited_by_circle(int lenght_l) {
    return M_PI * pow(radius_circ_limited_by_circle(lenght_l), 2);
}

//task 14
int radius_and_square_of_circle_bounded_by_circle(int lenght_l) {
    std::cout << radius_circ_limited_by_circle(lenght_l) << std::endl << square_circ_limited_by_circle(lenght_l) << std::endl;
    return 0;
}

//task 15.1
int diameter_circ_limited_by_circle(int square) {
    return sqrt(square / M_PI * 4);
}

//task 15.2
int lenght_circ_limited_by_circle(int square) {
    return M_PI * diameter_circ_limited_by_circle(square);
}

// task 15
int diameter_and_length_of_circ_limited_by_circle(int square) {
    std::cout << diameter_circ_limited_by_circle(square) << std::endl << lenght_circ_limited_by_circle(square) << std::endl;
    return 0;
}

//task 16
int distance_between_points(int coordinate_x1, int coordinate_x2) {
    return abs(coordinate_x2 - coordinate_x1);
}

//task 17.1
int segment_ac(int point_a, int point_b, int point_c) {
    return point_a * point_c;
}
//task 17.2
int segment_bc(int point_a, int point_b, int point_c){
    return point_b * point_c;
}
//task 17
int sum_segments_ac_and_bc(int point_a, int point_b, int point_c){
    return segment_ac(point_a,point_b, point_c) + segment_bc(point_a,point_b, point_c);
}
    
//task 18.1
int segment_ac_on_numeric_line(int point_a, int point_b, int point_c){
    return abs(point_a - point_c);
}
//task 18.2
int segment_bc_on_numeric_line(int point_a, int point_b, int point_c){
    return abs(point_b - point_c);
}
//task 18.3
int product_of_segments_ac_and_bc(int point_a, int point_b, int point_c){
    return segment_ac_on_numeric_line(point_a, point_b, point_c) * segment_bc_on_numeric_line(point_a, point_b, point_c);
}

//task 19.1

int perimeter_of_rectangle(int coordinate_x1, int coordinate_y1, int coordinate_x2,int coordinate_y2) {
    return 2 * abs(coordinate_x1-coordinate_x2)+abs(coordinate_y1 - coordinate_y2);
}

//task 19.2
int square_of_point_rectangle(int coordinate_x1, int coordinate_y1, int coordinate_x2,int coordinate_y2) {
    return abs(coordinate_x1 - coordinate_x2) * abs(coordinate_y1 - coordinate_y2);
}


//task 19
int perimetr_and_square_of_rectangle(int coordinate_x1, int coordinate_y1, int coordinate_x2,int coordinate_y2) {
    std::cout << perimeter_of_rectangle(coordinate_x1, coordinate_y1, coordinate_x2, coordinate_y2) << square_of_point_rectangle(coordinate_x1, coordinate_y1, coordinate_x2, coordinate_y2);
    return 0;
}

//task 20
int pointLength(int coordinate_x1, int coordinate_y1, int coordinate_x2,int coordinate_y2) {
    return sqrt(pow(coordinate_x1 - coordinate_x2, 2) + pow(coordinate_y1 - coordinate_y2, 2));
}
//task 21.1
int sides(int coordinate_x1, int coordinate_y1, int coordinate_x2, int coordinate_y2, int coordinate_x3, int coordinate_y3, int side_a, int  side_b, int side_c){
    side_a = sqrt(pow(coordinate_x1 - coordinate_x2, 2) + pow(coordinate_y1 -coordinate_y2, 2));
    side_b = sqrt(pow(coordinate_x2 - coordinate_x3, 2) + pow(coordinate_y2 - coordinate_y3, 2));
    side_c= sqrt(pow(coordinate_x3 - coordinate_x1, 2) + pow(coordinate_y3 - coordinate_y1, 2));
    return 0;
}
//task 21.2
int perimeter_of_triangle(int coordinate_x1, int coordinate_y1, int coordinate_x2, int coordinate_y2, int coordinate_x3, int coordinate_y3, int side_a, int side_b, int side_c){
    return side_a + side_b + side_c / 2;
}

////task 21.3
//int square_of_point_triangle(int x1, int y1, int x2, int y2, int x3, int y3) {
//    if (x1 > x2 && y1 > y2 && x1 > x3 && y1 > y3) {
//        std::cout << "x2 and y2 and x3 and y3 must be > x1 and y1";
//    }
//    double a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
//    double b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
//    double c = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
//    double half_perimeter = (a + b + c) / 2;
//    return sqrt(half_perimeter * (half_perimeter - a) * (half_perimeter - b) * (half_perimeter - c));
//}
//
////task 21
//int pointTriangle(int x1, int y1, int x2, int y2, int x3, int y3) {
//    std::cout << perimeter_of_point_triangle(x1, y1, x2, y2, x3, y3) << square_of_point_triangle(x1, y1, x2, y2, x3, y3);
//    return 0;
//}

//
////task 22
//int swipe(int A, int B) {
//    int t = A;
//    A = B;
//    B = t;
//    std::cout << "A = ", A, "B = ", B;
//    return A, B;
//}
//
////task 23
//int swipe2(int A, int B, int C) {
//    int t = C;
//    C = B;
//    B = A;
//    A = t;
//    std::cout << "A = ", A, "B = ", B, "C = ", C;
//    return A, B, C;
//}
//
////task 24
//int swipe3(int A, int B, int C) {
//    int t = B;
//    C = A;
//    B = C;
//    A = t;
//    std::cout << "A = ", A, "B = ", B, "C = ", C;
//    return A, B, C;
//}
//
////task 25
//int whatFunction1(int x) {
//    int y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
//    return 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
//}
//
////task 26
//int whatFunktion2(int x) {
//    int y = 4 * pow(x - 3, 6) - 7 * pow(x - 3, 3) + 2;
//    return 4 * pow(x - 3, 6) - 7 * pow(x - 3, 3) + 2;
//}
//
////task 27.1
//int degree_of_a_in_2(int a) {
//    int a_in_2 = a * a;
//    return a_in_2;
//}
//
////task 27.2
//int degree_of_a_in_4(int a) {
//    int a_int_4 = degree_of_a_in_2(a) * degree_of_a_in_2(a);
//    return a_int_4;
//}
//
////task 27.3
//int degree_of_a_in_8(int a) {
//    int a_in_8 = degree_of_a_in_4(a) * degree_of_a_in_4(a);
//    return a_in_8;
//}
//
////task 27
//int degreeOfA(int A) {
//    std::cout << degree_of_a_in_2(a) << degree_of_a_in_4(a) << degree_of_a_in_8(a);
//    return 0;
//}
//
////task 28.1
//int degree_of_a_in_3(int a) {
//    int a_in_3 = degree_of_a_in_2(a) * a;
//    return a_in_3;
//}
//
////task 28.2
//int degree_of_a_in_5(int a) {
//    int a_in_5 = degree_of_a_in_3(a) * degree_of_a_in_2(a);
//    return a_in_5;
//}
//
////task 28.3
//int degree_of_a_in_10(int a) {
//    int a_in_10 = degree_of_a_in_5(a) * degree_of_a_in_5(a);
//    return a_in_10;
//}
//
////task 28.4
//int degree_of_a_in_15(int a) {
//    int a_in_15 = degree_of_a_in_5(a) * degree_of_a_in_10(a);
//    return a_in_15;
//}
//
////task 28
//int degreeOfA2(int A) {
//    std::cout << degree_of_a_in_2(a) << degree_of_a_in_3(a) << degree_of_a_in_5(a) << degree_of_a_in_10(a) << degree_of_a_in_15(a);
//    return 0;
//}
//
////task 29
//int degreesToRadians(double a) {
//    double p = 3.14;
//    if (a < 0 || a > 360) {
//        std::cout << "a must be > 0 and < 360";
//    }
//    double rad = ((a * 180) / p) / a;
//    return rad;
//}
//
////task 30
//int radiansToDegrees(double a) {
//    double p = 3.14;
//    if (a < 0 || a > 2 * p) {
//        std::cout << "a must be > 0 and < 2 pi";
//    }
//    double rad = (a * 180) / p;
//    double aRad = rad * a;
//    return aRad;
//}
//
////task 31
//int fahrenheit_to_celsius_converter(double t) {
//    return (t - 32) * 5 / 9;
//}
//
////task 32
//int celsius_to_fahrenheit_converter(double t) {
//    return (t + 32) / 5 / 9;
//}
//
////task 33
//int candies_count(int a, int y, int x) {
//    return 0;
//}

