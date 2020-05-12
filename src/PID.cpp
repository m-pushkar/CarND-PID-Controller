#include "PID.h"

/**
 * TODO: Complete the PID class. You may add any additional desired functions.
 */

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
    // Initialize errors
    p_error = 0;
    i_error = 0;
    d_error = 0;
}

void PID::UpdateError(double cte) {
    double prev_cte = 0;
    
    prev_cte = p_error;
    p_error = cte;
    i_error += cte;
    d_error = cte - prev_cte;
}

double PID::TotalError() {
    double PID = -p_error * Kp - i_error * Ki - d_error * Kd;
    return PID; 
}
