#include <stdio.h>
#include <iostream>
#include <cmath>
#include <math.h>
#include <string>

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
void perimeter_and_square_of_rectangle(int side_a, int side_b) {
    std::cout << square_of_rectangle_count(side_a, side_b) << std::endl
    << perimeter_of_rectangle_count(side_a, side_b) << std::endl;
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
void cube_volume_and_surface_area (int edge_length) {
    std::cout << cube_volume(edge_length)
    << std::endl << surface_area(edge_length) << std::endl;
}

//task 6.1
int volume_of_rectangular_parallelepiped(int edge_length_a, int edge_length_b, int edge_length_c) {
    return edge_length_a* edge_length_b * edge_length_c;
}

//task 6.2
int surface_area(int edge_length_a, int edge_length_b, int edge_length_c) {
    if (edge_length_a <= 0){ // add another function
        throw "edge_lenght_a less or equal zero";//review
    }
    if (edge_length_b <= 0){
        throw "edge_lenght_b less or equal zero";
    }
    if (edge_length_c <= 0){
        throw "edge_lenght_c less or equal zero";
    }
    return 2 * (edge_length_a * edge_length_b
                + edge_length_b * edge_length_c
                + edge_length_a * edge_length_c);
}

//task 6
void vol_of_rect_parall_and_surf_area(int edge_length_a, int edge_length_b, int edge_length_c) {
    std::cout << volume_of_rectangular_parallelepiped(edge_length_a, edge_length_b, edge_length_c)
    << std::endl << surface_area(edge_length_a, edge_length_b, edge_length_c) << std::endl;
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
void length_and_square_of_circle (double radius) {
    std::cout << length_of_circle(radius) << std::endl
    << square_of_circle(radius) << std::endl;
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
       throw "numbers must be != 0";
    }
    return pow(num_a, 2) + pow(num_b, 2);
}

//task 10.2
int diff_sq_of_nonzero_numbers(int num_a, int num_b) {
    if (num_a == 0 || num_b == 0) {
        throw "numbers must be != 0";
    }
    return pow(num_a, 2) - pow(num_b, 2);
}

//task 10.3
int prod_sq_of_nonzero_numbers(int num_a, int num_b) {
    if (num_a == 0 || num_b == 0) {
        throw "numbers must be != 0";
    }
    return pow(num_a, 2) * pow(num_b, 2);
}

//task 10.4
int quot_sq_of_nonzero_numbers(int num_a, int num_b) {
    if (num_a == 0 || num_b == 0) {
        throw "numbers must be != 0";
    }
    return pow(num_a, 2) / pow(num_b, 2);
}

//task 10
void sum_diff_prod_quot_of_nonzero_numbers(int num_a, int num_b) {
    std::cout << sum_sq_of_nonzero_numbers(num_a, num_b) << std::endl
    << diff_sq_of_nonzero_numbers(num_a, num_b) << std::endl
    << prod_sq_of_nonzero_numbers(num_a, num_b) << std::endl
    << quot_sq_of_nonzero_numbers(num_a, num_b) << std::endl;
}

//task 11.1
int sum_of_modules_nonzero_numbers(int num_a, int num_b) {
    if (num_a == 0 || num_b == 0) {
        throw "numbers must be != 0";
    }
    return fabs(num_a) + fabs(num_b);
}

//task 11.2
int diff_of_modules_nonzero_numbers(int num_a, int num_b) {
    if (num_a == 0 || num_b == 0) {
        throw "numbers must be != 0";
    }
    return fabs(num_a) - fabs(num_b);
}

//task 11.3
int prod_of_modules_nonzero_numbers(int num_a, int num_b) {
    if (num_a == 0 || num_b == 0) {
        throw "numbers must be != 0";
    }
    return fabs(num_a) * fabs(num_b);
}

//task 11.4
int quot_of_modules_nonzero_numbers(int num_a, int num_b) {
    if (num_a == 0 || num_b == 0) {
        throw "numbers must be != 0";
    }
    return fabs(num_a) / fabs(num_b);
}


//task 11
void sum_diif_prod_quot_of_modules_nonzero_numbers(int num_a, int num_b) {
    std::cout << sum_of_modules_nonzero_numbers(num_a, num_b) << std::endl
    << diff_of_modules_nonzero_numbers(num_a, num_b) << std::endl
    << prod_of_modules_nonzero_numbers(num_a, num_b) << std::endl
    << quot_of_modules_nonzero_numbers(num_a, num_b) << std::endl;
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
void hypotenuse_and_perimeter_of_right_triangle(int cathet_a, int cathet_b, int hypotenuse) {
    std::cout << hypotenuse_of_triangle(cathet_a, cathet_b) << std::endl
    << perimeter_of_right_triangle(cathet_a, cathet_b, hypotenuse)
    << std::endl;
}

//task 13.1
int square_of_circle_1(int radius_1, int radius_2) {
    if (radius_2 > radius_1) {
        throw "radius_1 must be > radius_2";
    }
    return M_PI * pow(radius_1, 2);
}

//task 13.2
int square_of_circle_2(int radius_1, int radius_2) {
    if (radius_2 > radius_1) {
        throw "radius_1 must be > radius_2";
    }
    return M_PI * pow(radius_2, 2);
}

//task 13.3
int square_of_circle_3(int square_of_circle_1, int square_of_circle_2) {
    return square_of_circle_1 - square_of_circle_2;
}

//task 13
void square_of_circles(int radius_1, int radius_2) {
    std::cout << square_of_circle_1(radius_1, radius_2) << std::endl
    << square_of_circle_2(radius_1, radius_2) << std::endl <<
    square_of_circle_3(28, 12) << std::endl;
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
void radius_and_square_of_circle_bounded_by_circle(int lenght_l) {
    std::cout << radius_circ_limited_by_circle(lenght_l) << std::endl
    << square_circ_limited_by_circle(lenght_l) << std::endl;
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
void diameter_and_length_of_circ_limited_by_circle(int square) {
    std::cout << diameter_circ_limited_by_circle(square) << std::endl
    << lenght_circ_limited_by_circle(square) << std::endl;
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
    return segment_ac(point_a,point_b, point_c)
    + segment_bc(point_a,point_b, point_c);
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
    return segment_ac_on_numeric_line(point_a, point_b, point_c)
    * segment_bc_on_numeric_line(point_a, point_b, point_c);
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
void perimetr_and_square_of_rectangle(int coordinate_x1, int coordinate_y1, int coordinate_x2, int coordinate_y2){
    std::cout << perimeter_of_rectangle(coordinate_x1, coordinate_y1, coordinate_x2, coordinate_y2)
    << square_of_point_rectangle(coordinate_x1, coordinate_y1, coordinate_x2, coordinate_y2) << std::endl;
}

//task 20
int point_length(int coordinate_x1, int coordinate_y1, int coordinate_x2,int coordinate_y2) {
    return sqrt(pow(coordinate_x1 - coordinate_x2, 2) + pow(coordinate_y1 - coordinate_y2, 2));
}
//task 21.1
//add points
void sides(int coordinate_x1, int coordinate_y1, int coordinate_x2, int coordinate_y2, int coordinate_x3, int coordinate_y3, int side_a, int  side_b, int side_c){
    side_a = sqrt(pow(coordinate_x1 - coordinate_x2, 2) + pow(coordinate_y1 -coordinate_y2, 2));
    side_b = sqrt(pow(coordinate_x2 - coordinate_x3, 2) + pow(coordinate_y2 - coordinate_y3, 2));
    side_c = sqrt(pow(coordinate_x3 - coordinate_x1, 2) + pow(coordinate_y3 - coordinate_y1, 2));
}
//task 21.2.1
int perimeter_of_triangle(int coordinate_x1, int coordinate_y1, int coordinate_x2, int coordinate_y2, int coordinate_x3, int coordinate_y3, int side_a, int side_b, int side_c){
    return side_a + side_b + side_c;
}
//task 21.2.2
int half_per_of_tringle(int side_a, int side_b, int side_c){
    return side_a + side_b + side_c / 2;
}
//task 21.2.3
int square_of_tringle(int coordinate_x1, int coordinate_y1, int coordinate_x2, int coordinate_y2, int coordinate_x3, int coordinate_y3, int side_a, int side_b, int side_c){
    return sqrt(half_per_of_tringle(side_a, side_b, side_c) * (half_per_of_tringle(side_a, side_b, side_c) - side_a) * (half_per_of_tringle(side_a, side_b, side_c) - side_b) * (half_per_of_tringle(side_a, side_b, side_c) - side_c));
}

//task 21
void perimeter_and_square_of_triangle(int coordinate_x1, int coordinate_y1, int coordinate_x2, int coordinate_y2, int coordinate_x3, int coordinate_y3, int side_a, int side_b, int side_c){
    std::cout << perimeter_of_triangle(coordinate_x1, coordinate_y1, coordinate_x2, coordinate_y2, coordinate_x3, coordinate_y3, side_a, side_b, side_c) << std::endl << square_of_tringle(coordinate_x1, coordinate_y1, coordinate_x2, coordinate_y2, coordinate_x3, coordinate_y3, side_a, side_b, side_c) << std::endl;
}

//task 22
//add points
class Veriables{
    public:
    int veriable_a;
    int veriable_b;
    Veriables (int _ver_a = 0, int _ver_b = 0) {
          veriable_a = _ver_a;
          veriable_b = _ver_b;
    }
    void change_a(int veriable_a, int veriable_b){
        veriable_a = (veriable_a + veriable_b);
        veriable_b = (veriable_a - veriable_b);
        veriable_a = (veriable_a - veriable_b);
    }
};
class User{
private:
    int age;
    std::string name;
    int id;
public:
    User (){
        age = 25;
        name = "Andrew";
        id = 1;
    }
    User (int age_u, std::string name_u, int id_u){
        age = age_u;
        name = name_u;
        id = id_u;
    }
    void enter_data_about_user(){
        std::cin >> age;
        std::cin >> name;
        std::cin >> id;
    }
    void show_information_about_user(){
        std::cout << name << "," << name << "," << id << std::endl;
    }
    
};

// task22
void change_content_in_veriables_1(double veriable_a, double veriable_b){//add links
    veriable_a = (veriable_a + veriable_b);
    veriable_b = (veriable_a - veriable_b);
    veriable_a = (veriable_a - veriable_b);
    std::cout << veriable_a << std::endl<< veriable_b << std::endl;
}


//task 23
void change_content_in_veriables_2(int veriable_a, int veriable_b, int veriable_c){
    veriable_a = (veriable_a + veriable_b + veriable_c);
    veriable_b = (veriable_a - veriable_b - veriable_c);
    veriable_c = (veriable_a - veriable_b - veriable_c);
    veriable_a = (veriable_a - veriable_b - veriable_c);
    std::cout << veriable_a << std::endl << veriable_b << std::endl << veriable_c << std::endl;
}

//task 24
void change_content_in_veriables_3(int veriable_a, int veriable_b, int veriable_c){
    veriable_a = (veriable_a + veriable_b + veriable_c);
    veriable_c = (veriable_a - veriable_b - veriable_c);
    veriable_b = (veriable_a - veriable_b - veriable_c);
    veriable_a = (veriable_a - veriable_b - veriable_c);
    std::cout << veriable_a << std::endl << veriable_b << std::endl << veriable_c << std::endl;
}

//task 25
int function_value_1 (int value_x) {
    return 3 * pow(value_x, 6) - 6 * pow(value_x, 2) - 7;
}

//task 26
int function_value_2 (int value_x) {
    return 4 * pow(value_x - 3, 6) - 7 * pow(value_x - 3, 3) + 2;
}
//
//task 27.1
int squaring_number_a_1(int num_a) {
    return num_a * num_a;
}

//task 27.2
int raising_number_a_to_4th_power_1(int num_a){
    return squaring_number_a_1(num_a) * squaring_number_a_1(num_a);
}

//task 27.3
int raising_number_a_to_8th_power_1(int num_a) {
    return raising_number_a_to_4th_power_1(num_a)
    * raising_number_a_to_4th_power_1(num_a);
}

//task 27
void all_found_powers_of_number_a_1(int num_a) {
    std::cout << squaring_number_a_1(num_a)
    << std::endl << raising_number_a_to_4th_power_1(num_a)
    << std::endl << raising_number_a_to_8th_power_1(num_a) << std::endl;
}

//task 28.1
int squaring_number_a_2(int num_a) {
    return num_a * num_a;
}

int cubing_number_a(int num_a){
    return pow(num_a, 3);
}
//task 28.2
int raising_number_a_to_5th_power(int num_a) {
    return cubing_number_a(num_a) * num_a;
}

//task 28.3
int raising_number_a_to_10th_power(int num_a){
    return raising_number_a_to_5th_power(num_a) * raising_number_a_to_5th_power(num_a);
}

//task 28.4
int raising_number_a_to_15th_power(int num_a) {
    return raising_number_a_to_10th_power(num_a) * raising_number_a_to_5th_power(num_a);
}

//task 28
void all_found_powers_of_number_a_2(int num_a) {
    std::cout << squaring_number_a_2(num_a) << std::endl << cubing_number_a(num_a) << std::endl << raising_number_a_to_5th_power(num_a) << std::endl << raising_number_a_to_10th_power(num_a) << std::endl << raising_number_a_to_15th_power(num_a) << std::endl;
}


//task 29
double determine_value_of_angle_in_radians_1(int angle_a) {
    if (angle_a < 0 || angle_a > 360) {
        throw "angle_a must be > 0 and < 360";
        return 1;
    }
    return (angle_a * M_PI) / 180;
}

//task 30
double determine_value_of_angle_in_radians_2(double angle_a) {
    if (angle_a < 0 || angle_a > 2 * M_PI) {
        throw  "angle_a must be > 0 and < 2PI";
        return 1;
    }
    return (angle_a * 180) / M_PI;
}

//task 31
int convert_farenheit_into_celsius (double temperature) {
    return (temperature - 32) * 5 / 9;
}

//task 32
int convert_celsius_into_farenheit(double temperature) {
    return (temperature * 9 / 5 + 32);
}

//task 33.1
double price_candies_for_kilogram(double candies_kilogram_x, double price_a, double candies_kilogram_y){
    return price_a / candies_kilogram_x;
}
//task 33.2
double price_candies_for_y_kilogram(double candies_kilogram_x, double price_a, double candies_kilogram_y){
    return candies_kilogram_y * price_candies_for_kilogram(candies_kilogram_x, price_a, candies_kilogram_y);
}
void price_candies_for_kilogram_and_y_kilogram(double candies_kilogram_x, double price_a, double candies_kilogram_y){
    std::cout << price_candies_for_kilogram(candies_kilogram_x, price_a, candies_kilogram_y) << std::endl << price_candies_for_y_kilogram(candies_kilogram_x, price_a, candies_kilogram_y) << std::endl;
}

//task 34.1
double price_chocolate_candies(double candies_kilogram_x, double price_a){
    return price_a/candies_kilogram_x;
}
//task 34.2
double price_toffes_candie(double candies_kilogram_y, double price_b){
    return price_b / candies_kilogram_y;
}
//task 34.3
double price_difference(double candies_kilogram_x, double price_a, double candies_kilogram_y, double price_b){
    return price_chocolate_candies(candies_kilogram_x, price_a)
    / price_toffes_candie(candies_kilogram_y, price_b);
}
//task 34
void price_chocolate_and_toffes_candies_price_difference(double candies_kilogram_x, double price_a, double candies_kilogram_y, double price_b){
    std::cout << price_chocolate_candies(candies_kilogram_x, price_a) << std::endl
    << price_toffes_candie(candies_kilogram_y, price_b) << std::endl
    << price_difference(candies_kilogram_x, price_a, candies_kilogram_y, price_b)
    << std::endl;
}

//task 35
int path_covered_by_boat(int speed, int flow_rate, int driving_time_on_lake, int driving_time_on_river){
    if (flow_rate > speed){
        throw "You pass wrong values";
    }
    return speed * driving_time_on_lake + (speed - flow_rate) * driving_time_on_river;
}
//task 36
int distance_between_cars(int speed_car_1, int speed_car_2, int distance, int time){
    return distance + speed_car_1 * time + speed_car_2 * time;
}

//task 37
int distance_between_cars_2(int speed_car_1, int speed_car_2, int distance, int time){
    return abs(distance - (speed_car_1 * time + speed_car_2 * time));
}


int equation(int ratio_a, int ratio_b){
    if (ratio_a == 0){
        throw "You pass wrong values";
        return 1;
    }
    return -ratio_b / ratio_a;
}

//task 39.1
double discriminant(int ratio_a, int ratio_b, int ratio_c){
    return pow(ratio_b, 2) - 4 * ratio_a * ratio_c;
}

//task 39.2
double root_x1(int ratio_a, int ratio_b, int ratio_c){
    return -(ratio_b) + sqrt(discriminant(ratio_a, ratio_b, ratio_c)) / (2 * ratio_a);
}
//task 39.3
double root_x2 (int ratio_a, int ratio_b, int ratio_c){
    return  -(ratio_b) - sqrt(discriminant(ratio_a, ratio_b, ratio_c)) / (2 * ratio_a);
}
//task 39
void roots_of_quadratic_equation(int ratio_a, int ratio_b, int ratio_c){
    if(discriminant(ratio_a, ratio_b, ratio_c) >= 0){
        std::cout << root_x1(ratio_a, ratio_b, ratio_c)
        << std::endl << root_x2(ratio_a, ratio_b, ratio_c) << std::endl;
       }
    
       else{
           throw "The discriminant is less than 0, the roots are insubstantial.";
       }
}

//task40.1
double ratio_d(double ratio_a_1, double ratio_b_1, double ratio_c_1, double ratio_a_2, double ratio_b_2, double ratio_c_2){
    return ratio_a_1 * ratio_b_2 - ratio_a_2 * ratio_b_1;
}
//task40.2
double coordinate_x(double ratio_a_1, double ratio_b_1, double ratio_c_1, double ratio_a_2, double ratio_b_2, double ratio_c_2){
    double temp_1 = (ratio_c_1 * ratio_b_2 - ratio_c_2 * ratio_b_1);
    double temp_2 = ratio_d(ratio_a_1, ratio_b_1, ratio_c_1, ratio_a_2, ratio_b_2, ratio_c_2);
    return temp_1 / temp_2;
}

//task 40.3
double coordinate_y(double ratio_a_1, double ratio_b_1, double ratio_c_1, double ratio_a_2, double ratio_b_2, double ratio_c_2){
    return (ratio_a_1 * ratio_c_2 - ratio_a_2 * ratio_c_1) /
        ratio_d(ratio_a_1, ratio_b_1, ratio_c_1, ratio_a_2, ratio_b_2, ratio_c_2);
}
//task 40
void system_of_linear_equations(double ratio_a_1, double ratio_b_1, double ratio_c_1, double ratio_a_2, double ratio_b_2, double ratio_c_2){
    std::cout << coordinate_x(ratio_a_1, ratio_b_1, ratio_c_1, ratio_a_2, ratio_b_2, ratio_c_2)
        << std::endl
        << coordinate_y(ratio_a_1, ratio_b_1, ratio_c_1, ratio_a_2, ratio_b_2, ratio_c_2) << std::endl;
}
//task41
double number_of_full_meters(double distance_l){
    return distance_l / 100;
}

//task42
double number_of_full_tons(double weight_m){
    return weight_m / 1000;
}

//task 43
double number_of_full_kbit(double size){
    return size / 1024;
}

//task44
double number_of_segments_b_placed_on_segment_a(int segment_a, int segments_b){
    if (segment_a > segments_b){
        return segment_a / segments_b;
    }
    else{
        throw "You pass wrong values";
    }
}

//task45
int length_of_unoccupied_part_of_segment_a(int segment_a, int segments_b){
    if (segment_a > segments_b){
        return segment_a % segments_b;
    }
    else{
        throw "You pass wrong values";
    }
}

//task46.1
int dozens(int two_digit_number){
    return two_digit_number / 10;
}

//task46.2
int units(int two_digit_number){
    return two_digit_number % 10;
}
//task46
void dozens_and_units_of_number(int two_digit_number){
    std::cout << dozens(two_digit_number) << std::endl
    << units(two_digit_number) << std::endl;
}

//task47.1
int sum_of_twodigit_number(int two_digit_number){
    return dozens(two_digit_number) + units(two_digit_number);
}
//task47.2
int multiplication_of_twodigit_number(int two_digit_number){
    return dozens(two_digit_number) * units(two_digit_number);
}
//task47
void sum_and_miltiplication_of_twodigit_number(int two_digit_number){
    std::cout << sum_of_twodigit_number(two_digit_number) << std::endl
    << multiplication_of_twodigit_number(two_digit_number) << std::endl;
}

//task48
int twodigit_number_obtained_by_rearranging_digits(int two_digit_number){
    return (two_digit_number % 10 * 10) + (two_digit_number / 10);
}

//task49
int first_digit_out_of_hundreds(int three_digit_number){
    return three_digit_number / 100;
}

//task50.1
int units_of_number_three_digit_number(int three_digit_number){
    return three_digit_number % 10;
}
//task 50.2
int dozens_of_number_three_digit_number(int three_digit_number){
    return three_digit_number % 100 / 10;
}

//task 50
void units_dozens_of_number_three_digit_number(int three_digit_number){
    std::cout << units_of_number_three_digit_number(three_digit_number) << std::endl
    << dozens_of_number_three_digit_number(three_digit_number) << std::endl;
}

//task 51.1
int first_digit_out_of_three_digit_number_2(int three_digit_number){
    return three_digit_number / 100;
}

//task51.2
int units_of_number_three_digit_number_2(int three_digit_number){
    return three_digit_number % 10;
}
//task 51.3
int dozens_of_number_three_digit_number_2(int three_digit_number){
    return three_digit_number % 100 / 10;
}

//task 51.4
int sum_of_of_numbers_three_digit_number(int three_digit_number){
    return first_digit_out_of_three_digit_number_2(three_digit_number)
    + units_of_number_three_digit_number_2(three_digit_number)
    + dozens_of_number_three_digit_number_2(three_digit_number);
}
//task51.5
int mult_of_of_numbers_three_digit_number(int three_digit_number){
    return first_digit_out_of_three_digit_number_2(three_digit_number)
    * units_of_number_three_digit_number_2(three_digit_number)
    * dozens_of_number_three_digit_number_2(three_digit_number);
}
//task51
void sum_and_multiplication_of_numbers_three_digit_number(int three_digit_number){
    std::cout << sum_of_of_numbers_three_digit_number(three_digit_number)
    << std::endl << mult_of_of_numbers_three_digit_number(three_digit_number)
    << std::endl;
}

//task52
int three_digit_number_from_right_to_left(int three_digit_number){
    return (three_digit_number % 10) * 100
    + (three_digit_number % 100 / 10)
    * 10 + (three_digit_number / 100);
}

//task53
int crossed_out_first_digit_on_left_and_attributed_to_right(int three_digit_number){
    return (three_digit_number % 100 / 10 * 100)
    + (three_digit_number % 10) * 10
    + (three_digit_number / 100);
}

//task 54
int crossed_out_first_digit_on_right_and_attributed_to_right(int three_digit_number){
    return (three_digit_number % 10) * 100
    + (three_digit_number / 100) * 10
    + (three_digit_number % 100 / 10);
}

//task55.1
int number_obtained_by_rearranging_hundreds(int three_digit_number){
    return three_digit_number / 100;
}

//task55.2
int number_obtained_by_rearranging_dozens(int three_digit_number){
    return (three_digit_number / 10) % 10;
}

//task55.3
int number_obtained_by_rearranging_orig_number(int three_digit_number){
    return three_digit_number % 10;
}

//task 55
int num_obtained_by_permuting_digits_of_hundr_and_tens_of_orig_num(int three_digit_number){
    return number_obtained_by_rearranging_dozens(three_digit_number) * 100
    + number_obtained_by_rearranging_hundreds(three_digit_number) * 10
    + number_obtained_by_rearranging_orig_number(three_digit_number);
}

//task 56
int num_obtained_by_permuting_digits_of_tens_and_units_of_orig_num(int theree_digit_number){
    return (theree_digit_number / 100) * 100
    + (theree_digit_number % 10) * 10
    + (theree_digit_number % 100 / 10);
}

//task 57
int number_corresponding_category_of_hundreds(int number){
    if (number <= 999){
        throw "number must be > 999";
    }
    return number % 1000 / 100;
}

//task 58
int number_corresponding_category_of_thousands(int number){
    if (number <= 999){
        throw "number must be > 999";
    }
    return number % 10000/1000;
}

//task 59
int number_of_full_minutes_have_passed_since_beginning_of_day(int seconds){
    return seconds / 60;
}

//task 60
int number_of_full_hours_have_passed_since_beginning_of_day(int seconds){
    return seconds / 60 / 60;
}
    
//task61
int number_of_seconds_have_passed_since_beginning_of_last_minute(int seconds){
    return seconds % 60;
}

//task62
int number_of_seconds_have_passed_since_beginning_of_last_hour(int seconds){
    return seconds % 3600;
}

//task63
int number_of_full_minutes_have_passed_since_beginning_of_last_hour(int seconds){
    return seconds % 3600 / 60;
}

//task64
int determine_number_of_day_of_week(int integer){
    if (integer < 1 || integer > 365){
        throw "number must be > 1 and < 365";
    }
    return integer % 7;
}

//task65
int determine_number_of_day_of_week_starts_from_thursday(int integer){
    if (integer < 1 || integer > 365){
        throw "number must be > 1 and < 365";
    }
    return (integer + 3) % 7;
}

//task66
int determine_number_of_day_of_week_starts_from_tuesday(int integer){
    if (integer < 1 || integer > 365){
        throw "number must be > 1 and < 365";
    }
    return  (integer % 7) + 1;
}

//task67
int determine_number_of_day_of_week_starts_from_saturday(int integer){
    if (integer < 1 || integer > 365){
        throw "number must be > 1 and < 365";
    }
    return ((integer + 4) % 7) + 1;
}

//task68.1
int determine_number_of_day_of_week_per_week(int days_in_year, int days_in_week){
    if (days_in_week < 1.0 || days_in_week > 7.0){
        throw "number must be > 1 and < 7";
    }
    return  days_in_week - 2;
}
//task68.2
int determine_number_of_day_of_week_per_year(int days_in_year, int days_in_week){
    if (days_in_year < 1 || days_in_year > 365){
        throw "number must be > 1 and < 365";
    }
        
    return ((days_in_year
             + determine_number_of_day_of_week_per_week(days_in_year, days_in_week))
            % 7) + 1;
}
//task68
void determine_number_of_day_of_week_conclusion(int days_in_year, int days_in_week){
    std::cout << determine_number_of_day_of_week_per_year(days_in_year, days_in_week) << std::endl;
}

//task 69.1
int max_possible_num_of_squares_on_rectangle(int positive_integer_a, int positive_integer_b, int positive_integer_c){
    return positive_integer_a * positive_integer_b;
}
//task 69.2
int area_of_unoccupied_part_of_rectangle(int positive_integer_c){
    return positive_integer_c * positive_integer_c;
}
//task69
int number_of_squares_placed_on_rectangle(int positive_integer_a, int positive_integer_b, int positive_integer_c){
    return max_possible_num_of_squares_on_rectangle(positive_integer_a, positive_integer_b, positive_integer_c) /
    area_of_unoccupied_part_of_rectangle(positive_integer_c);
}

//task70
int determine_appropriate_century_number(int number_of_certain_year){
    if (number_of_certain_year < 0){
        throw "number must be > 0";
    }
    return (number_of_certain_year / 100) + 1;
}
//task71
int check_positivity(int integer_a){
    if (integer_a > 0) {
            return 0;
        }
        else {
            throw "number must be > 0";
        }
}
//task72
int check_odd(int integer_a){
    if (integer_a % 2) {
            return 0;
        }
        else {
            throw "number must be divisible with the remainder by 2";
        }
}
//task73
int check_even(int integer_a){
    if (integer_a % 2) {
        return 0;
    }
    else {
        throw "number must be divisible with the remainder by 2";
    }
}

//task74
int check_truth_of_statement(int integer_a, int integer_b){
    if (integer_a > 2 && integer_b <= 3) {
     return 0;
     }
     else {
         throw "number must be > 2 and <= 3";
     }
}

//task75
int check_truth_of_statement_2(int integer_a, int integer_b){
    if (integer_a >= 0 && integer_b < -2) {
        return 0;
     }
     else {
         throw "numbers must be >= 0 and < - 2";
     }
}

//task76
int double_inequality_is_true_or_not(int integer_a, int integer_b, int integer_c){
    if (integer_a < integer_b && integer_b < integer_c) {
        return 0;
     }
     else {
         throw "number_a must be < number_b and number_b < number_c";
     }
}
//task77
int number_between_numbers(int integer_a, int integer_b, int integer_c){
    if (integer_b > integer_a && integer_b < integer_c){
     return 0;
     }
    if (integer_b < integer_a && integer_b > integer_c){
        return 0;
     }
     else {
        throw "you pass wrong values";
     }
}

//task78
int all_numbers_are_odd(int integer_a, int integer_b){
    if (integer_a % 2 && integer_b % 2){
        return 0;
    }
    else {
        throw "number_a must be divisible with the remainder by 2 and number_b do the same thing";
    }
}

//task79
int at_least_one_number_odd(int integer_a, int integer_b){
    if (integer_a % 2 || integer_b % 2){
        return 0;
    }
    else {
        throw "at_least_one_number must be divisible with the remainder by 2";
    }
}

//task80
bool exactly_one_number_odd(int integer_a, int integer_b){
    if((integer_a % 2 != 0 && integer_b % 2 == 0) || (integer_a % 2 == 0 && integer_b % 2 != 0)){
        return true;
    }
    return false;
}

//task81
bool numbers_have_same_parity(int integer_a, int integer_b){
    if((integer_a % 2 == 0 && integer_b % 2 == 0) || (integer_a % 2 != 0 && integer_b % 2 != 0)){
        return true;
    }
    return false;
}
//task82
bool numbers_are_positive(int integer_a, int integer_b, int integer_c){
    if (integer_a > 0 && integer_b > 0 && integer_c > 0){
        return true;
    }
    return false;
}
//task83
bool at_least_one_number_positive(int integer_a, int integer_b, int integer_c){
    if (integer_a > 0 || integer_b > 0 || integer_c > 0){
        return true;
    }
    return false;
}
//task84
bool exactly_one_of_numbers_positive(int integer_a, int integer_b, int integer_c){
    if ((integer_a > 0 && integer_b < 0 && integer_c < 0)){
        return true;
    }
    if ((integer_a < 0 && integer_b > 0 && integer_c < 0)){
        return true;
    }
    if ((integer_a < 0 && integer_b < 0 && integer_c > 0)){
        return true;
    }
    return false;
}
//task85
bool exactly_two_of_numbers_positive(int integer_a, int integer_b, int integer_c){
    if ((integer_a > 0 && integer_b > 0 && integer_c < 0)){
        return true;
    }
    if ((integer_a < 0 && integer_b > 0 && integer_c > 0)){
        return true;
    }
    if ((integer_a > 0 && integer_b < 0 && integer_c > 0)){
        return true;
    }
    return false;
}
//task86
bool number_is_even_two_digit(int integer_a){
    if (integer_a % 2 == 0 && integer_a > 9 && integer_a < 100){
        return true;
    }
    return false;
        
}
//task87
bool number_is_odd_three_digit(int three_digit_num){
    if (three_digit_num != 0 && three_digit_num > 99 && three_digit_num < 1000){
        return true;
    }
    return false;
}
//task88
bool among_given_integers_at_least_one_matching_pair(int integer_a, int integer_b, int integer_c){
    if (integer_a == integer_c){
        return true;
    }
    if (integer_b == integer_c){
        return true;
    }
    if (integer_b == integer_a){
        return true;
    }
    return false;
}
//task89
bool among_given_integers_at_least_one_pair_of_mutually_opposite(int integer_a, int integer_b, int integer_c){
    if (integer_a == -integer_c){
        return true;
    }
    if (integer_b == -integer_c){
        return true;
    }
    if (integer_b == -integer_a){
        return true;
    }
    return false;
}
//task90
bool all_digits_of_three_digit_number_are_different(int three_digit_num){
    if (three_digit_num / 100 != three_digit_num % 100 / 10){
        return true;
    }
    if (three_digit_num / 100 != three_digit_num % 10){
        return true;
    }
    if (three_digit_num % 100 / 10 != three_digit_num % 10){
        return true;
    }
    return false;
}
//task91
bool digits_of_three_digit_number_form_increasing_sequence(int three_digit_num){
    if ((three_digit_num / 100 < three_digit_num % 100 / 10)){
        return true;
    }
    if ((three_digit_num % 100 / 10) < (three_digit_num % 10)){
        return true;
    }
    return false;
}
//task92
bool digits_of_three_digit_number_decreasing_sequence(int three_digit_num){
    if ((three_digit_num / 100 < three_digit_num % 100 / 10)){
        return true;
    }
    if ((three_digit_num % 100 / 10) < (three_digit_num % 10)){
        return true;
    }
    if ((three_digit_num / 100 > three_digit_num % 100 / 10)){
        return true;
    }
    if ((three_digit_num % 100 / 10) > (three_digit_num % 10)){
        return true;
    }
    return false;
}
//task93
bool four_digit_palindrome_number(int four_digit_num){
    if ((four_digit_num % 10 == four_digit_num / 1000)){
        return true;
    }
    if ((four_digit_num % 100 / 10 == four_digit_num % 1000 / 100)){
        return true;
    }
    return false;
}
//task94.1
double discriminant_(int ratio_a, int ratio_b, int ratio_c){
    return pow(ratio_b, 2) - 4 * ratio_a * ratio_c;
}
//task94
bool does_quadratic_equation_have_real_roots(int ratio_a, int ratio_b, int ratio_c){
    if (ratio_a == 0){
        throw "ratio_a must be != 0";
    }
    if (discriminant(ratio_a, ratio_b, ratio_c) > 0){
        return true;
    }
    return false;
}
//task95
bool does_point_lies_in_second_coordinate_quarter(int coordinate_x, int coordinate_y){
    if (coordinate_x < 0 && coordinate_y > 0){
        return true;
    }
    return false;
}
//task96
bool does_point_lies_in_fourth_coordinate_quarter(int coordinate_x, int coordinate_y){
    if (coordinate_x > 0 && coordinate_y < 0){
        return true;
    }
    return false;
}
//task97
bool does_point_lies_in_second_or_third_quarter(int coordinate_x, int coordinate_y){
    if (coordinate_x < 0 && coordinate_y > 0){
        return true;
    }
    if (coordinate_x < 0 && coordinate_y < 0){
        return true;
    }
    return false;
}
//task98
bool does_point_lies_in_first_or_third_quarter(int coordinate_x, int coordinate_y){
    if (coordinate_x > 0 && coordinate_y > 0){
        return true;
    }
    if (coordinate_x < 0 && coordinate_y < 0){
        return true;
    }
    return false;
}
//task99
bool does_point_lies_in_rectangle_and_sides_are_parallel_coord_axes(int coordinate_x, int coordinate_y, int coordinate_x_1, int coordinate_y_1, int coordinate_x_2, int coordinate_y_2){
    if (coordinate_x_1 < coordinate_x &&
        coordinate_x < coordinate_x_2 &&
        coordinate_y_2 < coordinate_y &&
        coordinate_y < coordinate_y_1){
        return true;
    }
    return false;
}
//task100
bool does_triangle_equilateral(int integer_a, int integer_b, int integer_c){
    if ((integer_a == integer_b) &&
        (integer_a == integer_c) &&
        (integer_b == integer_c)){
        return true;
    }
    return false;
}
//task101
bool does_triangle_isosceles(int integer_a, int integer_b, int integer_c){
    if (integer_a == integer_b){
        return true;
    }
    if (integer_a == integer_c){
        return true;
    }
    if (integer_b == integer_c){
        return true;
    }
    return false;
}
//task102
bool does_triangle_rectangular(int integer_a, int integer_b, int integer_c){
    if (integer_a * integer_a == (integer_b * integer_b) + (integer_c * integer_c)){
        return true;
    }
    if(integer_b * integer_b == (integer_a * integer_a) + (integer_c * integer_c)){
        return true;
    }
    if (integer_c * integer_c == (integer_a * integer_a) + (integer_b * integer_b)){
        return true;
    }
    return false;
}
//task103
bool does_there_triange(int integer_a, int integer_b, int integer_c){
    if((integer_a + integer_b > integer_c) &&
       (integer_a + integer_c > integer_b) &&
       (integer_b + integer_c > integer_a)){
        return true;
    }
    return false;
}
//task104
bool does_field_white(int coordinate_x, int coordinate_y){
    if((coordinate_x + coordinate_y) % 2 != 0){
        return true;
    }
    return false;
}
//task105
bool fields_have_same_color(int coordinate_x_1, int coordinate_y_1, int coordinate_x_2, int coordinate_y_2){
    if((coordinate_x_1 + coordinate_y_1) % 2 ==
       (coordinate_x_2 + coordinate_y_2) % 2){
        return true;
    }
    return false;
}
//task106
bool does_rook_able_to_move_from_one_field_to_another_in_one_move(int coordinate_x_1, int coordinate_y_1, int coordinate_x_2, int coordinate_y_2){
    if(coordinate_x_1 == coordinate_x_2){
        return true;
    }
    if(coordinate_y_1 == coordinate_y_2){
        return true;
    }
    return false;
}
//task107
bool does_king_able_to_move_from_one_field_to_another_in_one_move(int coordinate_x_1, int coordinate_y_1, int coordinate_x_2, int coordinate_y_2){
    if(abs(coordinate_x_1 - coordinate_x_2) <= 1 &&
       abs(coordinate_y_1 - coordinate_y_2) <= 1){
        return true;
    }
    return false;
    
}
//task108
bool does_elephant_able_to_move_from_one_field_to_another_in_one_move(int coordinate_x_1, int coordinate_y_1, int coordinate_x_2, int coordinate_y_2){
    if(abs(coordinate_x_1 - coordinate_x_2) ==
       abs(coordinate_y_1 - coordinate_y_2)){
        return true;
    }
    return false;
}
//taks109
bool does_queen_able_to_move_from_one_field_to_another_in_one_move(int coordinate_x_1, int coordinate_y_1, int coordinate_x_2, int coordinate_y_2){
    if(coordinate_x_1 == coordinate_x_2){
        return true;
    }
    if(coordinate_y_1 == coordinate_y_2){
        return true;
    }
    if(coordinate_x_1 - coordinate_y_1 == coordinate_x_2 - coordinate_y_2){
        return true;
    }
    if(coordinate_x_1 + coordinate_y_2 == coordinate_x_2 + coordinate_y_2){
        return true;
    }
    return false;
}
//task110
bool does_hourse_able_to_move_from_one_field_to_another_in_one_move(int coordinate_x_1, int coordinate_y_1, int coordinate_x_2, int coordinate_y_2){
    if(abs(coordinate_x_1 - coordinate_x_2) == 1 && abs(coordinate_y_1 - coordinate_y_2) == 2){
        return true;
    }
    if(abs(coordinate_x_1 - coordinate_x_2) == 2 && abs(coordinate_y_1 - coordinate_y_2) == 1){
        return true;
    }
    return false;
}



























