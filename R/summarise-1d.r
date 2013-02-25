#' Efficient binned 1d summaries.
#'
#' @param x a group object created by \code{\link{grouped}}
#' @param y a numeric vector to summary for each group. Optional for some
#'   summary statistics.
#' @param summary the summary statistic to use. Currently must be one of
#'   count, sum, mean, median or sd. If \code{NULL}, defaults to mean if
#'   y is present, count if not.
#' @param weight a vector of weights.  Not currently supported by all summary
#'   functions.
#' @export
#' @examples
#' x <- runif(1e5)
#' gx <- grouped(x, 0.1)
#' summarise_1d(gx)
summarise_1d <- function(x, z = NULL, summary = NULL, w = NULL) {
  stopifnot(is.grouped(x))

  if (is.null(summary)) {
    summary <- if (is.null(z)) "count" else "mean"
    message("Summarising with ", summary)
  }
  stopifnot(summary %in% names(summaries))

  # C++ code can deal with NULL inputs more efficiently than R code
  z <- z %||% numeric()
  w <- w %||% numeric()

  # Check lengths consistent
  n <- x$size()
  stopifnot(length(z) == 0 || length(z) == n)
  stopifnot(length(w) == 0 || length(w) == n)

  f <- match.fun(paste("summarise", summary, sep = "_"))
  out <- f(x, z, w)

  data.frame(x = out[[2]], out[[1]])
}
