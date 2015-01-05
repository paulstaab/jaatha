// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// parseMsPositions
NumericVector parseMsPositions(const std::string line);
RcppExport SEXP jaatha_parseMsPositions(SEXP lineSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const std::string >::type line(lineSEXP );
        NumericVector __result = parseMsPositions(line);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// parseMsOutput
List parseMsOutput(const List file_names, const NumericVector sample_size, const int loci_number);
RcppExport SEXP jaatha_parseMsOutput(SEXP file_namesSEXP, SEXP sample_sizeSEXP, SEXP loci_numberSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const List >::type file_names(file_namesSEXP );
        Rcpp::traits::input_parameter< const NumericVector >::type sample_size(sample_sizeSEXP );
        Rcpp::traits::input_parameter< const int >::type loci_number(loci_numberSEXP );
        List __result = parseMsOutput(file_names, sample_size, loci_number);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// parseSeqgenOutput
List parseSeqgenOutput(const List file_names, const int sample_size, const int sequence_length, const int loci_number, const int outgroup_size = 1, const NumericVector trio_opts = NumericVector(0));
RcppExport SEXP jaatha_parseSeqgenOutput(SEXP file_namesSEXP, SEXP sample_sizeSEXP, SEXP sequence_lengthSEXP, SEXP loci_numberSEXP, SEXP outgroup_sizeSEXP, SEXP trio_optsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const List >::type file_names(file_namesSEXP );
        Rcpp::traits::input_parameter< const int >::type sample_size(sample_sizeSEXP );
        Rcpp::traits::input_parameter< const int >::type sequence_length(sequence_lengthSEXP );
        Rcpp::traits::input_parameter< const int >::type loci_number(loci_numberSEXP );
        Rcpp::traits::input_parameter< const int >::type outgroup_size(outgroup_sizeSEXP );
        Rcpp::traits::input_parameter< const NumericVector >::type trio_opts(trio_optsSEXP );
        List __result = parseSeqgenOutput(file_names, sample_size, sequence_length, loci_number, outgroup_size, trio_opts);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// parseTrees
CharacterVector parseTrees(const std::string in_file, const NumericVector trio_opts, Function tempfile);
RcppExport SEXP jaatha_parseTrees(SEXP in_fileSEXP, SEXP trio_optsSEXP, SEXP tempfileSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const std::string >::type in_file(in_fileSEXP );
        Rcpp::traits::input_parameter< const NumericVector >::type trio_opts(trio_optsSEXP );
        Rcpp::traits::input_parameter< Function >::type tempfile(tempfileSEXP );
        CharacterVector __result = parseTrees(in_file, trio_opts, tempfile);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// calcPercentFpcViolation
NumericMatrix calcPercentFpcViolation(const List seg_sites_list, const NumericMatrix locus_length);
RcppExport SEXP jaatha_calcPercentFpcViolation(SEXP seg_sites_listSEXP, SEXP locus_lengthSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const List >::type seg_sites_list(seg_sites_listSEXP );
        Rcpp::traits::input_parameter< const NumericMatrix >::type locus_length(locus_lengthSEXP );
        NumericMatrix __result = calcPercentFpcViolation(seg_sites_list, locus_length);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// calcJsfs
NumericMatrix calcJsfs(const List seg_sites, const NumericVector sample_size);
RcppExport SEXP jaatha_calcJsfs(SEXP seg_sitesSEXP, SEXP sample_sizeSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const List >::type seg_sites(seg_sitesSEXP );
        Rcpp::traits::input_parameter< const NumericVector >::type sample_size(sample_sizeSEXP );
        NumericMatrix __result = calcJsfs(seg_sites, sample_size);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// classifyPolym
NumericVector classifyPolym(const NumericMatrix seg_sites, const NumericVector sample_size);
RcppExport SEXP jaatha_classifyPolym(SEXP seg_sitesSEXP, SEXP sample_sizeSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const NumericMatrix >::type seg_sites(seg_sitesSEXP );
        Rcpp::traits::input_parameter< const NumericVector >::type sample_size(sample_sizeSEXP );
        NumericVector __result = classifyPolym(seg_sites, sample_size);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
