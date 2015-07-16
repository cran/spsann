// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// objMSSDCpp
double objMSSDCpp(NumericMatrix x);
RcppExport SEXP spsann_objMSSDCpp(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    __result = Rcpp::wrap(objMSSDCpp(x));
    return __result;
END_RCPP
}
// spJitterCpp
IntegerVector spJitterCpp(NumericMatrix x, NumericMatrix y, double xmax, double xmin, double ymax, double ymin, int idx);
RcppExport SEXP spsann_spJitterCpp(SEXP xSEXP, SEXP ySEXP, SEXP xmaxSEXP, SEXP xminSEXP, SEXP ymaxSEXP, SEXP yminSEXP, SEXP idxSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type xmax(xmaxSEXP);
    Rcpp::traits::input_parameter< double >::type xmin(xminSEXP);
    Rcpp::traits::input_parameter< double >::type ymax(ymaxSEXP);
    Rcpp::traits::input_parameter< double >::type ymin(yminSEXP);
    Rcpp::traits::input_parameter< int >::type idx(idxSEXP);
    __result = Rcpp::wrap(spJitterCpp(x, y, xmax, xmin, ymax, ymin, idx));
    return __result;
END_RCPP
}
// updateMSSDCpp
NumericMatrix updateMSSDCpp(NumericMatrix x1, NumericMatrix x2, NumericMatrix dm, int idx);
RcppExport SEXP spsann_updateMSSDCpp(SEXP x1SEXP, SEXP x2SEXP, SEXP dmSEXP, SEXP idxSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type x1(x1SEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x2(x2SEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type dm(dmSEXP);
    Rcpp::traits::input_parameter< int >::type idx(idxSEXP);
    __result = Rcpp::wrap(updateMSSDCpp(x1, x2, dm, idx));
    return __result;
END_RCPP
}
// updatePPLCpp
NumericMatrix updatePPLCpp(NumericMatrix x, NumericMatrix dm, int idx);
RcppExport SEXP spsann_updatePPLCpp(SEXP xSEXP, SEXP dmSEXP, SEXP idxSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type dm(dmSEXP);
    Rcpp::traits::input_parameter< int >::type idx(idxSEXP);
    __result = Rcpp::wrap(updatePPLCpp(x, dm, idx));
    return __result;
END_RCPP
}
