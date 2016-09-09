// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// rcpp_hello_world
List rcpp_hello_world();
RcppExport SEXP NPCluster_rcpp_hello_world() {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    __result = Rcpp::wrap(rcpp_hello_world());
    return __result;
END_RCPP
}
// createGraph
Rcpp::List createGraph(int size);
RcppExport SEXP NPCluster_createGraph(SEXP sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    __result = Rcpp::wrap(createGraph(size));
    return __result;
END_RCPP
}
// incrementGraph
void incrementGraph(SEXP sexp, const Rcpp::IntegerVector& indices);
RcppExport SEXP NPCluster_incrementGraph(SEXP sexpSEXP, SEXP indicesSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sexp(sexpSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type indices(indicesSEXP);
    incrementGraph(sexp, indices);
    return R_NilValue;
END_RCPP
}
// getGraph
Rcpp::List getGraph(SEXP sexp);
RcppExport SEXP NPCluster_getGraph(SEXP sexpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sexp(sexpSEXP);
    __result = Rcpp::wrap(getGraph(sexp));
    return __result;
END_RCPP
}
// getTaxiDistance
double getTaxiDistance(SEXP sexp1, SEXP sexp2);
RcppExport SEXP NPCluster_getTaxiDistance(SEXP sexp1SEXP, SEXP sexp2SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sexp1(sexp1SEXP);
    Rcpp::traits::input_parameter< SEXP >::type sexp2(sexp2SEXP);
    __result = Rcpp::wrap(getTaxiDistance(sexp1, sexp2));
    return __result;
END_RCPP
}
// createEngine
Rcpp::List createEngine(bool sort, int mode);
RcppExport SEXP NPCluster_createEngine(SEXP sortSEXP, SEXP modeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< bool >::type sort(sortSEXP);
    Rcpp::traits::input_parameter< int >::type mode(modeSEXP);
    __result = Rcpp::wrap(createEngine(sort, mode));
    return __result;
END_RCPP
}
// accessEngine
int accessEngine(SEXP sexp);
RcppExport SEXP NPCluster_accessEngine(SEXP sexpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sexp(sexpSEXP);
    __result = Rcpp::wrap(accessEngine(sexp));
    return __result;
END_RCPP
}
// sampleUniform
int sampleUniform(int length);
RcppExport SEXP NPCluster_sampleUniform(SEXP lengthSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type length(lengthSEXP);
    __result = Rcpp::wrap(sampleUniform(length));
    return __result;
END_RCPP
}
// printEngineTiming
void printEngineTiming(SEXP sexp);
RcppExport SEXP NPCluster_printEngineTiming(SEXP sexpSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sexp(sexpSEXP);
    printEngineTiming(sexp);
    return R_NilValue;
END_RCPP
}
// vectorizedElementFnLogLik
Rcpp::NumericVector vectorizedElementFnLogLik(SEXP sexp, const Rcpp::NumericVector& phi, const double sd, const int num, const double Y, const double Xsd);
RcppExport SEXP NPCluster_vectorizedElementFnLogLik(SEXP sexpSEXP, SEXP phiSEXP, SEXP sdSEXP, SEXP numSEXP, SEXP YSEXP, SEXP XsdSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sexp(sexpSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type phi(phiSEXP);
    Rcpp::traits::input_parameter< const double >::type sd(sdSEXP);
    Rcpp::traits::input_parameter< const int >::type num(numSEXP);
    Rcpp::traits::input_parameter< const double >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const double >::type Xsd(XsdSEXP);
    __result = Rcpp::wrap(vectorizedElementFnLogLik(sexp, phi, sd, num, Y, Xsd));
    return __result;
END_RCPP
}
// computeMarginalLikelihood
Rcpp::List computeMarginalLikelihood(SEXP sexp, const Rcpp::NumericMatrix& X, const Rcpp::NumericVector& phi, const Rcpp::NumericVector& Paux, const double tau, const double tau0, const bool sample, const bool exactBitStream);
RcppExport SEXP NPCluster_computeMarginalLikelihood(SEXP sexpSEXP, SEXP XSEXP, SEXP phiSEXP, SEXP PauxSEXP, SEXP tauSEXP, SEXP tau0SEXP, SEXP sampleSEXP, SEXP exactBitStreamSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sexp(sexpSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type phi(phiSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type Paux(PauxSEXP);
    Rcpp::traits::input_parameter< const double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< const double >::type tau0(tau0SEXP);
    Rcpp::traits::input_parameter< const bool >::type sample(sampleSEXP);
    Rcpp::traits::input_parameter< const bool >::type exactBitStream(exactBitStreamSEXP);
    __result = Rcpp::wrap(computeMarginalLikelihood(sexp, X, phi, Paux, tau, tau0, sample, exactBitStream));
    return __result;
END_RCPP
}
// computeDPAcceptanceRatio
Rcpp::List computeDPAcceptanceRatio(SEXP sexp, const Rcpp::NumericVector& Y, const Rcpp::NumericVector& X, const Rcpp::IntegerVector& I, const Rcpp::IntegerVector& C, const Rcpp::NumericVector& phi, const Rcpp::IntegerVector& newS, const Rcpp::IntegerVector& oldS, const double tau, const double tau0, const int N);
RcppExport SEXP NPCluster_computeDPAcceptanceRatio(SEXP sexpSEXP, SEXP YSEXP, SEXP XSEXP, SEXP ISEXP, SEXP CSEXP, SEXP phiSEXP, SEXP newSSEXP, SEXP oldSSEXP, SEXP tauSEXP, SEXP tau0SEXP, SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sexp(sexpSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type I(ISEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type C(CSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type phi(phiSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type newS(newSSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type oldS(oldSSEXP);
    Rcpp::traits::input_parameter< const double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< const double >::type tau0(tau0SEXP);
    Rcpp::traits::input_parameter< const int >::type N(NSEXP);
    __result = Rcpp::wrap(computeDPAcceptanceRatio(sexp, Y, X, I, C, phi, newS, oldS, tau, tau0, N));
    return __result;
END_RCPP
}
// computeColumnsPmfAndNeighborhoods
Rcpp::List computeColumnsPmfAndNeighborhoods(SEXP sexp, int n0, const Rcpp::IntegerVector& nVec, double epsilon, double epsilon2, int K, int N, const Rcpp::NumericVector& Y, const Rcpp::NumericMatrix& X, const Rcpp::NumericMatrix& A, const Rcpp::IntegerMatrix& S, const Rcpp::IntegerVector& rowSubsetI, const Rcpp::IntegerVector& CmVec, const int n2, const Rcpp::NumericVector& phiV, const double tau, const double tau0, const double tauInt, const int maxNeighborhoodSize, const double cutOff, const bool collectMax, const bool useRanks);
RcppExport SEXP NPCluster_computeColumnsPmfAndNeighborhoods(SEXP sexpSEXP, SEXP n0SEXP, SEXP nVecSEXP, SEXP epsilonSEXP, SEXP epsilon2SEXP, SEXP KSEXP, SEXP NSEXP, SEXP YSEXP, SEXP XSEXP, SEXP ASEXP, SEXP SSEXP, SEXP rowSubsetISEXP, SEXP CmVecSEXP, SEXP n2SEXP, SEXP phiVSEXP, SEXP tauSEXP, SEXP tau0SEXP, SEXP tauIntSEXP, SEXP maxNeighborhoodSizeSEXP, SEXP cutOffSEXP, SEXP collectMaxSEXP, SEXP useRanksSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sexp(sexpSEXP);
    Rcpp::traits::input_parameter< int >::type n0(n0SEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type nVec(nVecSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon2(epsilon2SEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerMatrix& >::type S(SSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type rowSubsetI(rowSubsetISEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type CmVec(CmVecSEXP);
    Rcpp::traits::input_parameter< const int >::type n2(n2SEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type phiV(phiVSEXP);
    Rcpp::traits::input_parameter< const double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< const double >::type tau0(tau0SEXP);
    Rcpp::traits::input_parameter< const double >::type tauInt(tauIntSEXP);
    Rcpp::traits::input_parameter< const int >::type maxNeighborhoodSize(maxNeighborhoodSizeSEXP);
    Rcpp::traits::input_parameter< const double >::type cutOff(cutOffSEXP);
    Rcpp::traits::input_parameter< const bool >::type collectMax(collectMaxSEXP);
    Rcpp::traits::input_parameter< const bool >::type useRanks(useRanksSEXP);
    __result = Rcpp::wrap(computeColumnsPmfAndNeighborhoods(sexp, n0, nVec, epsilon, epsilon2, K, N, Y, X, A, S, rowSubsetI, CmVec, n2, phiV, tau, tau0, tauInt, maxNeighborhoodSize, cutOff, collectMax, useRanks));
    return __result;
END_RCPP
}
// computePmfAndNeighborhoods
Rcpp::List computePmfAndNeighborhoods(SEXP sexp, int n0, const Rcpp::IntegerVector& nVec, double epsilon, double epsilon2, int K, int N, const Rcpp::NumericVector& Y, const Rcpp::NumericVector& Xsd, const Rcpp::IntegerVector& rowSubsetI, const Rcpp::IntegerVector& CmVec, const int n2, const Rcpp::NumericVector& phiV, const double tau, const double tau0, const int maxNeighborhoodSize, const double cutOff, const bool useRank);
RcppExport SEXP NPCluster_computePmfAndNeighborhoods(SEXP sexpSEXP, SEXP n0SEXP, SEXP nVecSEXP, SEXP epsilonSEXP, SEXP epsilon2SEXP, SEXP KSEXP, SEXP NSEXP, SEXP YSEXP, SEXP XsdSEXP, SEXP rowSubsetISEXP, SEXP CmVecSEXP, SEXP n2SEXP, SEXP phiVSEXP, SEXP tauSEXP, SEXP tau0SEXP, SEXP maxNeighborhoodSizeSEXP, SEXP cutOffSEXP, SEXP useRankSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sexp(sexpSEXP);
    Rcpp::traits::input_parameter< int >::type n0(n0SEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type nVec(nVecSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon2(epsilon2SEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type Xsd(XsdSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type rowSubsetI(rowSubsetISEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type CmVec(CmVecSEXP);
    Rcpp::traits::input_parameter< const int >::type n2(n2SEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type phiV(phiVSEXP);
    Rcpp::traits::input_parameter< const double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< const double >::type tau0(tau0SEXP);
    Rcpp::traits::input_parameter< const int >::type maxNeighborhoodSize(maxNeighborhoodSizeSEXP);
    Rcpp::traits::input_parameter< const double >::type cutOff(cutOffSEXP);
    Rcpp::traits::input_parameter< const bool >::type useRank(useRankSEXP);
    __result = Rcpp::wrap(computePmfAndNeighborhoods(sexp, n0, nVec, epsilon, epsilon2, K, N, Y, Xsd, rowSubsetI, CmVec, n2, phiV, tau, tau0, maxNeighborhoodSize, cutOff, useRank));
    return __result;
END_RCPP
}
// computePdpLogLikelihood
Rcpp::List computePdpLogLikelihood(SEXP sexp, const int k, const Rcpp::NumericMatrix& X, const Rcpp::NumericMatrix& A, const Rcpp::IntegerMatrix& S, const int G, const int N, const bool flip, const double tau, const double tau0, const double tauInt, bool colSums);
RcppExport SEXP NPCluster_computePdpLogLikelihood(SEXP sexpSEXP, SEXP kSEXP, SEXP XSEXP, SEXP ASEXP, SEXP SSEXP, SEXP GSEXP, SEXP NSEXP, SEXP flipSEXP, SEXP tauSEXP, SEXP tau0SEXP, SEXP tauIntSEXP, SEXP colSumsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sexp(sexpSEXP);
    Rcpp::traits::input_parameter< const int >::type k(kSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerMatrix& >::type S(SSEXP);
    Rcpp::traits::input_parameter< const int >::type G(GSEXP);
    Rcpp::traits::input_parameter< const int >::type N(NSEXP);
    Rcpp::traits::input_parameter< const bool >::type flip(flipSEXP);
    Rcpp::traits::input_parameter< const double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< const double >::type tau0(tau0SEXP);
    Rcpp::traits::input_parameter< const double >::type tauInt(tauIntSEXP);
    Rcpp::traits::input_parameter< bool >::type colSums(colSumsSEXP);
    __result = Rcpp::wrap(computePdpLogLikelihood(sexp, k, X, A, S, G, N, flip, tau, tau0, tauInt, colSums));
    return __result;
END_RCPP
}
// fastIndexedSetCopy
Rcpp::IntegerVector fastIndexedSetCopy(const Rcpp::IntegerVector inY, const Rcpp::IntegerVector& indices, const Rcpp::IntegerVector& x);
RcppExport SEXP NPCluster_fastIndexedSetCopy(SEXP inYSEXP, SEXP indicesSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector >::type inY(inYSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type indices(indicesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type x(xSEXP);
    __result = Rcpp::wrap(fastIndexedSetCopy(inY, indices, x));
    return __result;
END_RCPP
}
// fastIndexedSetNoCopy
void fastIndexedSetNoCopy(Rcpp::IntegerVector& y, const Rcpp::IntegerVector& indices, const Rcpp::IntegerVector& x);
RcppExport SEXP NPCluster_fastIndexedSetNoCopy(SEXP ySEXP, SEXP indicesSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type indices(indicesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type x(xSEXP);
    fastIndexedSetNoCopy(y, indices, x);
    return R_NilValue;
END_RCPP
}
// fastTabulate
Rcpp::IntegerVector fastTabulate(const Rcpp::IntegerMatrix& mat, const int K, bool includeZero);
RcppExport SEXP NPCluster_fastTabulate(SEXP matSEXP, SEXP KSEXP, SEXP includeZeroSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Rcpp::IntegerMatrix& >::type mat(matSEXP);
    Rcpp::traits::input_parameter< const int >::type K(KSEXP);
    Rcpp::traits::input_parameter< bool >::type includeZero(includeZeroSEXP);
    __result = Rcpp::wrap(fastTabulate(mat, K, includeZero));
    return __result;
END_RCPP
}
// fastTabulateVector
Rcpp::IntegerVector fastTabulateVector(const Rcpp::IntegerVector& vec, const int K, const bool includeZero);
RcppExport SEXP NPCluster_fastTabulateVector(SEXP vecSEXP, SEXP KSEXP, SEXP includeZeroSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type vec(vecSEXP);
    Rcpp::traits::input_parameter< const int >::type K(KSEXP);
    Rcpp::traits::input_parameter< const bool >::type includeZero(includeZeroSEXP);
    __result = Rcpp::wrap(fastTabulateVector(vec, K, includeZero));
    return __result;
END_RCPP
}
// fastTabulateExcludeEmptiedIndices
Rcpp::IntegerVector fastTabulateExcludeEmptiedIndices(const Rcpp::IntegerMatrix& mat, const Rcpp::IntegerVector& empty, const int K, bool includeZero);
RcppExport SEXP NPCluster_fastTabulateExcludeEmptiedIndices(SEXP matSEXP, SEXP emptySEXP, SEXP KSEXP, SEXP includeZeroSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Rcpp::IntegerMatrix& >::type mat(matSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type empty(emptySEXP);
    Rcpp::traits::input_parameter< const int >::type K(KSEXP);
    Rcpp::traits::input_parameter< bool >::type includeZero(includeZeroSEXP);
    __result = Rcpp::wrap(fastTabulateExcludeEmptiedIndices(mat, empty, K, includeZero));
    return __result;
END_RCPP
}
// fastXtX
Rcpp::NumericMatrix fastXtX(const Rcpp::NumericMatrix& rX);
RcppExport SEXP NPCluster_fastXtX(SEXP rXSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type rX(rXSEXP);
    __result = Rcpp::wrap(fastXtX(rX));
    return __result;
END_RCPP
}
// fastSumSafeLog
double fastSumSafeLog(const Rcpp::NumericVector& prob, const Rcpp::IntegerVector& count, const int length);
RcppExport SEXP NPCluster_fastSumSafeLog(SEXP probSEXP, SEXP countSEXP, SEXP lengthSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type prob(probSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type count(countSEXP);
    Rcpp::traits::input_parameter< const int >::type length(lengthSEXP);
    __result = Rcpp::wrap(fastSumSafeLog(prob, count, length));
    return __result;
END_RCPP
}
// swap
void swap(Rcpp::NumericMatrix& mat, int index1, int index2, const bool swapRows);
RcppExport SEXP NPCluster_swap(SEXP matSEXP, SEXP index1SEXP, SEXP index2SEXP, SEXP swapRowsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type mat(matSEXP);
    Rcpp::traits::input_parameter< int >::type index1(index1SEXP);
    Rcpp::traits::input_parameter< int >::type index2(index2SEXP);
    Rcpp::traits::input_parameter< const bool >::type swapRows(swapRowsSEXP);
    swap(mat, index1, index2, swapRows);
    return R_NilValue;
END_RCPP
}
// swapIntegerMatrix
void swapIntegerMatrix(Rcpp::IntegerMatrix& mat, int index1, int index2, const bool swapRows);
RcppExport SEXP NPCluster_swapIntegerMatrix(SEXP matSEXP, SEXP index1SEXP, SEXP index2SEXP, SEXP swapRowsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::IntegerMatrix& >::type mat(matSEXP);
    Rcpp::traits::input_parameter< int >::type index1(index1SEXP);
    Rcpp::traits::input_parameter< int >::type index2(index2SEXP);
    Rcpp::traits::input_parameter< const bool >::type swapRows(swapRowsSEXP);
    swapIntegerMatrix(mat, index1, index2, swapRows);
    return R_NilValue;
END_RCPP
}
