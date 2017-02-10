#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
void print_matrix_cpp(S4 obj) {
  Rcout << "Type:   "<< as<CharacterVector>(obj.slot("class")) << "\n";

  Rcout << "Dim:   " << as<NumericVector>(obj.slot("Dim")) << "\n";

  Rcout << "length of i:   " << (as<NumericVector>(obj.slot("i"))).size() <<"\n";
  Rcout << "value of i:   "  << as<NumericVector>(obj.slot("i")) << "\n";

  Rcout << "length of p:   " << (as<NumericVector>(obj.slot("p"))).size() <<"\n";
  Rcout << "value of p:   "  << as<NumericVector>(obj.slot("p")) << "\n";

  Rcout << "length of x:   " << (as<NumericVector>(obj.slot("x"))).size() <<"\n";
  Rcout << "value of x:   "  << as<NumericVector>(obj.slot("x")) << "\n";
}

//Proposal Test Solution For Gsoc Project
//Student name :Anant Gowadiya
//Project :Sparse matrix automatic conversion in RcppArmadillo
