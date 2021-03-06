# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

rcpp_hello_world <- function() {
    .Call('NPCluster_rcpp_hello_world', PACKAGE = 'NPCluster')
}

.createGraph <- function(size) {
    .Call('NPCluster_createGraph', PACKAGE = 'NPCluster', size)
}

.incrementGraph <- function(sexp, indices) {
    invisible(.Call('NPCluster_incrementGraph', PACKAGE = 'NPCluster', sexp, indices))
}

.getGraph <- function(sexp) {
    .Call('NPCluster_getGraph', PACKAGE = 'NPCluster', sexp)
}

.getTaxiDistance <- function(sexp1, sexp2) {
    .Call('NPCluster_getTaxiDistance', PACKAGE = 'NPCluster', sexp1, sexp2)
}

.createEngine <- function(sort, mode) {
    .Call('NPCluster_createEngine', PACKAGE = 'NPCluster', sort, mode)
}

.accessEngine <- function(sexp) {
    .Call('NPCluster_accessEngine', PACKAGE = 'NPCluster', sexp)
}

.sampleUniform <- function(length) {
    .Call('NPCluster_sampleUniform', PACKAGE = 'NPCluster', length)
}

.printEngineTiming <- function(sexp) {
    invisible(.Call('NPCluster_printEngineTiming', PACKAGE = 'NPCluster', sexp))
}

.vectorizedElementFnLogLik <- function(sexp, phi, sd, num, Y, Xsd) {
    .Call('NPCluster_vectorizedElementFnLogLik', PACKAGE = 'NPCluster', sexp, phi, sd, num, Y, Xsd)
}

.computeMarginalLikelihood <- function(sexp, X, phi, Paux, tau, tau0, sample, exactBitStream) {
    .Call('NPCluster_computeMarginalLikelihood', PACKAGE = 'NPCluster', sexp, X, phi, Paux, tau, tau0, sample, exactBitStream)
}

.computeDPAcceptanceRatio <- function(sexp, Y, X, I, C, phi, newS, oldS, tau, tau0, N) {
    .Call('NPCluster_computeDPAcceptanceRatio', PACKAGE = 'NPCluster', sexp, Y, X, I, C, phi, newS, oldS, tau, tau0, N)
}

.computeColumnPmfAndNeighborhoods <- function(sexp, n0, nVec, epsilon, epsilon2, K, N, Y, X, A, S, rowSubsetI, CmVec, n2, phiV, tau, tau0, tauInt, maxNeighborhoodSize, cutOff, collectMax, useRanks) {
    .Call('NPCluster_computeColumnsPmfAndNeighborhoods', PACKAGE = 'NPCluster', sexp, n0, nVec, epsilon, epsilon2, K, N, Y, X, A, S, rowSubsetI, CmVec, n2, phiV, tau, tau0, tauInt, maxNeighborhoodSize, cutOff, collectMax, useRanks)
}

.computePmfAndNeighborhoods <- function(sexp, n0, nVec, epsilon, epsilon2, K, N, Y, Xsd, rowSubsetI, CmVec, n2, phiV, tau, tau0, maxNeighborhoodSize, cutOff, useRank) {
    .Call('NPCluster_computePmfAndNeighborhoods', PACKAGE = 'NPCluster', sexp, n0, nVec, epsilon, epsilon2, K, N, Y, Xsd, rowSubsetI, CmVec, n2, phiV, tau, tau0, maxNeighborhoodSize, cutOff, useRank)
}

.computePdpLogLikelihood <- function(sexp, k, X, A, S, G, N, flip, tau, tau0, tauInt, colSums) {
    .Call('NPCluster_computePdpLogLikelihood', PACKAGE = 'NPCluster', sexp, k, X, A, S, G, N, flip, tau, tau0, tauInt, colSums)
}

.fastIndexedSetCopy <- function(inY, indices, x) {
    .Call('NPCluster_fastIndexedSetCopy', PACKAGE = 'NPCluster', inY, indices, x)
}

.fastIndexedSetNoCopy <- function(y, indices, x) {
    invisible(.Call('NPCluster_fastIndexedSetNoCopy', PACKAGE = 'NPCluster', y, indices, x))
}

.fastTabulate <- function(mat, K, includeZero = FALSE) {
    .Call('NPCluster_fastTabulate', PACKAGE = 'NPCluster', mat, K, includeZero)
}

.fastTabulateVector <- function(vec, K, includeZero) {
    .Call('NPCluster_fastTabulateVector', PACKAGE = 'NPCluster', vec, K, includeZero)
}

.fastTabulateExcludeEmptiedIndices <- function(mat, empty, K, includeZero = FALSE) {
    .Call('NPCluster_fastTabulateExcludeEmptiedIndices', PACKAGE = 'NPCluster', mat, empty, K, includeZero)
}

.fastXtX <- function(rX) {
    .Call('NPCluster_fastXtX', PACKAGE = 'NPCluster', rX)
}

.fastSumSafeLog <- function(prob, count, length) {
    .Call('NPCluster_fastSumSafeLog', PACKAGE = 'NPCluster', prob, count, length)
}

.swap <- function(mat, index1, index2, swapRows) {
    invisible(.Call('NPCluster_swap', PACKAGE = 'NPCluster', mat, index1, index2, swapRows))
}

.swapIntegerMatrix <- function(mat, index1, index2, swapRows) {
    invisible(.Call('NPCluster_swapIntegerMatrix', PACKAGE = 'NPCluster', mat, index1, index2, swapRows))
}

