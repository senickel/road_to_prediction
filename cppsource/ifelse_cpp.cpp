#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
Rcpp::NumericVector ifelse_cpp(const Rcpp::NumericVector & v1,
                       const double & c1,
                       const int & oper,
                       const double & alt1,
                       const Rcpp::NumericVector & alt2) {
  
  Rcpp::NumericVector result_vector(v1.size());
  
  
  if (oper == 0) {
    for(int i = 0; i < v1.size();i++) {
      if (v1[i] == c1) {
        result_vector[i] = alt1;
      } else {
        result_vector[i] = alt2[i];
      }
    }
  } else if (oper == 1) {
    for(int i = 0; i < v1.size();i++) {
      if (v1[i] < c1) {
        result_vector[i] = alt1;
      } else {
        result_vector[i] = alt2[i];
      }
    }
  } else if (oper == 2) {
    for(int i = 0; i < v1.size();i++) {
      if (v1[i] > c1) {
        result_vector[i] = alt1;
      } else {
        result_vector[i] = alt2[i];
      }
    }
  }
  return result_vector;
  
}