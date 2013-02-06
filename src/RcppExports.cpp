// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// convolve_2d
NumericMatrix convolve_2d(NumericMatrix sample, NumericMatrix kernel);
RcppExport SEXP bigvis_convolve_2d(SEXP sampleSEXP, SEXP kernelSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericMatrix sample = Rcpp::as<NumericMatrix >(sampleSEXP);
    NumericMatrix kernel = Rcpp::as<NumericMatrix >(kernelSEXP);
    NumericMatrix __result = convolve_2d(sample, kernel);
    return Rcpp::wrap(__result);
END_RCPP
}
// frange
NumericVector frange(const NumericVector& x, const bool na_rm = true);
RcppExport SEXP bigvis_frange(SEXP xSEXP, SEXP na_rmSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    bool na_rm = Rcpp::as<bool >(na_rmSEXP);
    NumericVector __result = frange(x, na_rm);
    return Rcpp::wrap(__result);
END_RCPP
}
// group_fixed
IntegerVector group_fixed(const NumericVector& x, double width, double origin = 0);
RcppExport SEXP bigvis_group_fixed(SEXP xSEXP, SEXP widthSEXP, SEXP originSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    double width = Rcpp::as<double >(widthSEXP);
    double origin = Rcpp::as<double >(originSEXP);
    IntegerVector __result = group_fixed(x, width, origin);
    return Rcpp::wrap(__result);
END_RCPP
}
// group_breaks
IntegerVector group_breaks(const NumericVector& x, const NumericVector& breaks);
RcppExport SEXP bigvis_group_breaks(SEXP xSEXP, SEXP breaksSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    NumericVector breaks = Rcpp::as<NumericVector >(breaksSEXP);
    IntegerVector __result = group_breaks(x, breaks);
    return Rcpp::wrap(__result);
END_RCPP
}
// group_integer
IntegerVector group_integer(const NumericVector& x, double origin = 0);
RcppExport SEXP bigvis_group_integer(SEXP xSEXP, SEXP originSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    double origin = Rcpp::as<double >(originSEXP);
    IntegerVector __result = group_integer(x, origin);
    return Rcpp::wrap(__result);
END_RCPP
}
// group_rect
IntegerVector group_rect(const NumericVector& x, const NumericVector& y, double x_width, double y_width, double x_origin, double y_origin);
RcppExport SEXP bigvis_group_rect(SEXP xSEXP, SEXP ySEXP, SEXP x_widthSEXP, SEXP y_widthSEXP, SEXP x_originSEXP, SEXP y_originSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    NumericVector y = Rcpp::as<NumericVector >(ySEXP);
    double x_width = Rcpp::as<double >(x_widthSEXP);
    double y_width = Rcpp::as<double >(y_widthSEXP);
    double x_origin = Rcpp::as<double >(x_originSEXP);
    double y_origin = Rcpp::as<double >(y_originSEXP);
    IntegerVector __result = group_rect(x, y, x_width, y_width, x_origin, y_origin);
    return Rcpp::wrap(__result);
END_RCPP
}
// group_hex
IntegerVector group_hex(const NumericVector& x, const NumericVector& y, double x_width, double y_width, double x_origin, double y_origin, double x_max);
RcppExport SEXP bigvis_group_hex(SEXP xSEXP, SEXP ySEXP, SEXP x_widthSEXP, SEXP y_widthSEXP, SEXP x_originSEXP, SEXP y_originSEXP, SEXP x_maxSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    NumericVector y = Rcpp::as<NumericVector >(ySEXP);
    double x_width = Rcpp::as<double >(x_widthSEXP);
    double y_width = Rcpp::as<double >(y_widthSEXP);
    double x_origin = Rcpp::as<double >(x_originSEXP);
    double y_origin = Rcpp::as<double >(y_originSEXP);
    double x_max = Rcpp::as<double >(x_maxSEXP);
    IntegerVector __result = group_hex(x, y, x_width, y_width, x_origin, y_origin, x_max);
    return Rcpp::wrap(__result);
END_RCPP
}
// smooth_1d_normal
NumericVector smooth_1d_normal(const NumericVector& x, const NumericVector& z, const NumericVector& x_out, const double sd, bool standardise = true);
RcppExport SEXP bigvis_smooth_1d_normal(SEXP xSEXP, SEXP zSEXP, SEXP x_outSEXP, SEXP sdSEXP, SEXP standardiseSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    NumericVector z = Rcpp::as<NumericVector >(zSEXP);
    NumericVector x_out = Rcpp::as<NumericVector >(x_outSEXP);
    double sd = Rcpp::as<double >(sdSEXP);
    bool standardise = Rcpp::as<bool >(standardiseSEXP);
    NumericVector __result = smooth_1d_normal(x, z, x_out, sd, standardise);
    return Rcpp::wrap(__result);
END_RCPP
}
// summarise_count_2dfixed2
NumericVector summarise_count_2dfixed2(const NumericVector& x, const NumericVector& y, const NumericVector& z, const NumericVector& weight, double x_width, double y_width, double x_origin, double y_origin);
RcppExport SEXP bigvis_summarise_count_2dfixed2(SEXP xSEXP, SEXP ySEXP, SEXP zSEXP, SEXP weightSEXP, SEXP x_widthSEXP, SEXP y_widthSEXP, SEXP x_originSEXP, SEXP y_originSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    NumericVector y = Rcpp::as<NumericVector >(ySEXP);
    NumericVector z = Rcpp::as<NumericVector >(zSEXP);
    NumericVector weight = Rcpp::as<NumericVector >(weightSEXP);
    double x_width = Rcpp::as<double >(x_widthSEXP);
    double y_width = Rcpp::as<double >(y_widthSEXP);
    double x_origin = Rcpp::as<double >(x_originSEXP);
    double y_origin = Rcpp::as<double >(y_originSEXP);
    NumericVector __result = summarise_count_2dfixed2(x, y, z, weight, x_width, y_width, x_origin, y_origin);
    return Rcpp::wrap(__result);
END_RCPP
}
// summarise_count_breaks
NumericVector summarise_count_breaks(const NumericVector& x, const NumericVector& z, const NumericVector& weight, NumericVector& breaks);
RcppExport SEXP bigvis_summarise_count_breaks(SEXP xSEXP, SEXP zSEXP, SEXP weightSEXP, SEXP breaksSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    NumericVector z = Rcpp::as<NumericVector >(zSEXP);
    NumericVector weight = Rcpp::as<NumericVector >(weightSEXP);
    NumericVector breaks = Rcpp::as<NumericVector >(breaksSEXP);
    NumericVector __result = summarise_count_breaks(x, z, weight, breaks);
    return Rcpp::wrap(__result);
END_RCPP
}
// summarise_count_fixed
NumericVector summarise_count_fixed(const NumericVector& x, const NumericVector& z, const NumericVector& weight, double width, double origin);
RcppExport SEXP bigvis_summarise_count_fixed(SEXP xSEXP, SEXP zSEXP, SEXP weightSEXP, SEXP widthSEXP, SEXP originSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    NumericVector z = Rcpp::as<NumericVector >(zSEXP);
    NumericVector weight = Rcpp::as<NumericVector >(weightSEXP);
    double width = Rcpp::as<double >(widthSEXP);
    double origin = Rcpp::as<double >(originSEXP);
    NumericVector __result = summarise_count_fixed(x, z, weight, width, origin);
    return Rcpp::wrap(__result);
END_RCPP
}
// summarise_count_2dfixed
NumericVector summarise_count_2dfixed(const NumericVector& x, const NumericVector& y, const NumericVector& z, const NumericVector& weight, double x_width, double y_width, double x_origin, double y_origin);
RcppExport SEXP bigvis_summarise_count_2dfixed(SEXP xSEXP, SEXP ySEXP, SEXP zSEXP, SEXP weightSEXP, SEXP x_widthSEXP, SEXP y_widthSEXP, SEXP x_originSEXP, SEXP y_originSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    NumericVector y = Rcpp::as<NumericVector >(ySEXP);
    NumericVector z = Rcpp::as<NumericVector >(zSEXP);
    NumericVector weight = Rcpp::as<NumericVector >(weightSEXP);
    double x_width = Rcpp::as<double >(x_widthSEXP);
    double y_width = Rcpp::as<double >(y_widthSEXP);
    double x_origin = Rcpp::as<double >(x_originSEXP);
    double y_origin = Rcpp::as<double >(y_originSEXP);
    NumericVector __result = summarise_count_2dfixed(x, y, z, weight, x_width, y_width, x_origin, y_origin);
    return Rcpp::wrap(__result);
END_RCPP
}
// summarise_sum_breaks
NumericVector summarise_sum_breaks(const NumericVector& x, const NumericVector& z, const NumericVector& weight, NumericVector& breaks);
RcppExport SEXP bigvis_summarise_sum_breaks(SEXP xSEXP, SEXP zSEXP, SEXP weightSEXP, SEXP breaksSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    NumericVector z = Rcpp::as<NumericVector >(zSEXP);
    NumericVector weight = Rcpp::as<NumericVector >(weightSEXP);
    NumericVector breaks = Rcpp::as<NumericVector >(breaksSEXP);
    NumericVector __result = summarise_sum_breaks(x, z, weight, breaks);
    return Rcpp::wrap(__result);
END_RCPP
}
// summarise_sum_fixed
NumericVector summarise_sum_fixed(const NumericVector& x, const NumericVector& z, const NumericVector& weight, double width, double origin);
RcppExport SEXP bigvis_summarise_sum_fixed(SEXP xSEXP, SEXP zSEXP, SEXP weightSEXP, SEXP widthSEXP, SEXP originSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    NumericVector z = Rcpp::as<NumericVector >(zSEXP);
    NumericVector weight = Rcpp::as<NumericVector >(weightSEXP);
    double width = Rcpp::as<double >(widthSEXP);
    double origin = Rcpp::as<double >(originSEXP);
    NumericVector __result = summarise_sum_fixed(x, z, weight, width, origin);
    return Rcpp::wrap(__result);
END_RCPP
}
// summarise_sum_2dfixed
NumericVector summarise_sum_2dfixed(const NumericVector& x, const NumericVector& y, const NumericVector& z, const NumericVector& weight, double x_width, double y_width, double x_origin, double y_origin);
RcppExport SEXP bigvis_summarise_sum_2dfixed(SEXP xSEXP, SEXP ySEXP, SEXP zSEXP, SEXP weightSEXP, SEXP x_widthSEXP, SEXP y_widthSEXP, SEXP x_originSEXP, SEXP y_originSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    NumericVector y = Rcpp::as<NumericVector >(ySEXP);
    NumericVector z = Rcpp::as<NumericVector >(zSEXP);
    NumericVector weight = Rcpp::as<NumericVector >(weightSEXP);
    double x_width = Rcpp::as<double >(x_widthSEXP);
    double y_width = Rcpp::as<double >(y_widthSEXP);
    double x_origin = Rcpp::as<double >(x_originSEXP);
    double y_origin = Rcpp::as<double >(y_originSEXP);
    NumericVector __result = summarise_sum_2dfixed(x, y, z, weight, x_width, y_width, x_origin, y_origin);
    return Rcpp::wrap(__result);
END_RCPP
}
// summarise_mean_breaks
NumericVector summarise_mean_breaks(const NumericVector& x, const NumericVector& z, const NumericVector& weight, NumericVector& breaks);
RcppExport SEXP bigvis_summarise_mean_breaks(SEXP xSEXP, SEXP zSEXP, SEXP weightSEXP, SEXP breaksSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    NumericVector z = Rcpp::as<NumericVector >(zSEXP);
    NumericVector weight = Rcpp::as<NumericVector >(weightSEXP);
    NumericVector breaks = Rcpp::as<NumericVector >(breaksSEXP);
    NumericVector __result = summarise_mean_breaks(x, z, weight, breaks);
    return Rcpp::wrap(__result);
END_RCPP
}
// summarise_mean_fixed
NumericVector summarise_mean_fixed(const NumericVector& x, const NumericVector& z, const NumericVector& weight, double width, double origin);
RcppExport SEXP bigvis_summarise_mean_fixed(SEXP xSEXP, SEXP zSEXP, SEXP weightSEXP, SEXP widthSEXP, SEXP originSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    NumericVector z = Rcpp::as<NumericVector >(zSEXP);
    NumericVector weight = Rcpp::as<NumericVector >(weightSEXP);
    double width = Rcpp::as<double >(widthSEXP);
    double origin = Rcpp::as<double >(originSEXP);
    NumericVector __result = summarise_mean_fixed(x, z, weight, width, origin);
    return Rcpp::wrap(__result);
END_RCPP
}
// summarise_mean_2dfixed
NumericVector summarise_mean_2dfixed(const NumericVector& x, const NumericVector& y, const NumericVector& z, const NumericVector& weight, double x_width, double y_width, double x_origin, double y_origin);
RcppExport SEXP bigvis_summarise_mean_2dfixed(SEXP xSEXP, SEXP ySEXP, SEXP zSEXP, SEXP weightSEXP, SEXP x_widthSEXP, SEXP y_widthSEXP, SEXP x_originSEXP, SEXP y_originSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    NumericVector y = Rcpp::as<NumericVector >(ySEXP);
    NumericVector z = Rcpp::as<NumericVector >(zSEXP);
    NumericVector weight = Rcpp::as<NumericVector >(weightSEXP);
    double x_width = Rcpp::as<double >(x_widthSEXP);
    double y_width = Rcpp::as<double >(y_widthSEXP);
    double x_origin = Rcpp::as<double >(x_originSEXP);
    double y_origin = Rcpp::as<double >(y_originSEXP);
    NumericVector __result = summarise_mean_2dfixed(x, y, z, weight, x_width, y_width, x_origin, y_origin);
    return Rcpp::wrap(__result);
END_RCPP
}
// summarise_sd_breaks
NumericVector summarise_sd_breaks(const NumericVector& x, const NumericVector& z, const NumericVector& weight, NumericVector& breaks);
RcppExport SEXP bigvis_summarise_sd_breaks(SEXP xSEXP, SEXP zSEXP, SEXP weightSEXP, SEXP breaksSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    NumericVector z = Rcpp::as<NumericVector >(zSEXP);
    NumericVector weight = Rcpp::as<NumericVector >(weightSEXP);
    NumericVector breaks = Rcpp::as<NumericVector >(breaksSEXP);
    NumericVector __result = summarise_sd_breaks(x, z, weight, breaks);
    return Rcpp::wrap(__result);
END_RCPP
}
// summarise_sd_fixed
NumericVector summarise_sd_fixed(const NumericVector& x, const NumericVector& z, const NumericVector& weight, double width, double origin);
RcppExport SEXP bigvis_summarise_sd_fixed(SEXP xSEXP, SEXP zSEXP, SEXP weightSEXP, SEXP widthSEXP, SEXP originSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    NumericVector z = Rcpp::as<NumericVector >(zSEXP);
    NumericVector weight = Rcpp::as<NumericVector >(weightSEXP);
    double width = Rcpp::as<double >(widthSEXP);
    double origin = Rcpp::as<double >(originSEXP);
    NumericVector __result = summarise_sd_fixed(x, z, weight, width, origin);
    return Rcpp::wrap(__result);
END_RCPP
}
// summarise_sd_2dfixed
NumericVector summarise_sd_2dfixed(const NumericVector& x, const NumericVector& y, const NumericVector& z, const NumericVector& weight, double x_width, double y_width, double x_origin, double y_origin);
RcppExport SEXP bigvis_summarise_sd_2dfixed(SEXP xSEXP, SEXP ySEXP, SEXP zSEXP, SEXP weightSEXP, SEXP x_widthSEXP, SEXP y_widthSEXP, SEXP x_originSEXP, SEXP y_originSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    NumericVector y = Rcpp::as<NumericVector >(ySEXP);
    NumericVector z = Rcpp::as<NumericVector >(zSEXP);
    NumericVector weight = Rcpp::as<NumericVector >(weightSEXP);
    double x_width = Rcpp::as<double >(x_widthSEXP);
    double y_width = Rcpp::as<double >(y_widthSEXP);
    double x_origin = Rcpp::as<double >(x_originSEXP);
    double y_origin = Rcpp::as<double >(y_originSEXP);
    NumericVector __result = summarise_sd_2dfixed(x, y, z, weight, x_width, y_width, x_origin, y_origin);
    return Rcpp::wrap(__result);
END_RCPP
}
// summarise_median_breaks
NumericVector summarise_median_breaks(const NumericVector& x, const NumericVector& z, const NumericVector& weight, NumericVector& breaks);
RcppExport SEXP bigvis_summarise_median_breaks(SEXP xSEXP, SEXP zSEXP, SEXP weightSEXP, SEXP breaksSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    NumericVector z = Rcpp::as<NumericVector >(zSEXP);
    NumericVector weight = Rcpp::as<NumericVector >(weightSEXP);
    NumericVector breaks = Rcpp::as<NumericVector >(breaksSEXP);
    NumericVector __result = summarise_median_breaks(x, z, weight, breaks);
    return Rcpp::wrap(__result);
END_RCPP
}
// summarise_median_fixed
NumericVector summarise_median_fixed(const NumericVector& x, const NumericVector& z, const NumericVector& weight, double width, double origin);
RcppExport SEXP bigvis_summarise_median_fixed(SEXP xSEXP, SEXP zSEXP, SEXP weightSEXP, SEXP widthSEXP, SEXP originSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    NumericVector z = Rcpp::as<NumericVector >(zSEXP);
    NumericVector weight = Rcpp::as<NumericVector >(weightSEXP);
    double width = Rcpp::as<double >(widthSEXP);
    double origin = Rcpp::as<double >(originSEXP);
    NumericVector __result = summarise_median_fixed(x, z, weight, width, origin);
    return Rcpp::wrap(__result);
END_RCPP
}
// summarise_median_2dfixed
NumericVector summarise_median_2dfixed(const NumericVector& x, const NumericVector& y, const NumericVector& z, const NumericVector& weight, double x_width, double y_width, double x_origin, double y_origin);
RcppExport SEXP bigvis_summarise_median_2dfixed(SEXP xSEXP, SEXP ySEXP, SEXP zSEXP, SEXP weightSEXP, SEXP x_widthSEXP, SEXP y_widthSEXP, SEXP x_originSEXP, SEXP y_originSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    NumericVector y = Rcpp::as<NumericVector >(ySEXP);
    NumericVector z = Rcpp::as<NumericVector >(zSEXP);
    NumericVector weight = Rcpp::as<NumericVector >(weightSEXP);
    double x_width = Rcpp::as<double >(x_widthSEXP);
    double y_width = Rcpp::as<double >(y_widthSEXP);
    double x_origin = Rcpp::as<double >(x_originSEXP);
    double y_origin = Rcpp::as<double >(y_originSEXP);
    NumericVector __result = summarise_median_2dfixed(x, y, z, weight, x_width, y_width, x_origin, y_origin);
    return Rcpp::wrap(__result);
END_RCPP
}
// compute_moments
NumericVector compute_moments(const NumericVector& x);
RcppExport SEXP bigvis_compute_moments(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    NumericVector __result = compute_moments(x);
    return Rcpp::wrap(__result);
END_RCPP
}
// compute_sum
NumericVector compute_sum(const NumericVector& x);
RcppExport SEXP bigvis_compute_sum(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    NumericVector __result = compute_sum(x);
    return Rcpp::wrap(__result);
END_RCPP
}
// compute_median
NumericVector compute_median(const NumericVector& x);
RcppExport SEXP bigvis_compute_median(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    NumericVector __result = compute_median(x);
    return Rcpp::wrap(__result);
END_RCPP
}
