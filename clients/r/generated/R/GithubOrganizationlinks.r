# Swaggy Jenkins
#
# Jenkins API clients generated from Swagger / Open API specification
#
# OpenAPI spec version: 1.0.0
# Contact: blah@cliffano.com
# Generated by: https://openapi-generator.tech


#' GithubOrganizationlinks Class
#'
#' @field repositories 
#' @field self 
#' @field _class 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
GithubOrganizationlinks <- R6::R6Class(
  'GithubOrganizationlinks',
  public = list(
    `repositories` = NULL,
    `self` = NULL,
    `_class` = NULL,
    initialize = function(`repositories`, `self`, `_class`){
      if (!missing(`repositories`)) {
        stopifnot(R6::is.R6(`repositories`))
        self$`repositories` <- `repositories`
      }
      if (!missing(`self`)) {
        stopifnot(R6::is.R6(`self`))
        self$`self` <- `self`
      }
      if (!missing(`_class`)) {
        stopifnot(is.character(`_class`), length(`_class`) == 1)
        self$`_class` <- `_class`
      }
    },
    toJSON = function() {
      GithubOrganizationlinksObject <- list()
      if (!is.null(self$`repositories`)) {
        GithubOrganizationlinksObject[['repositories']] <- self$`repositories`$toJSON()
      }
      if (!is.null(self$`self`)) {
        GithubOrganizationlinksObject[['self']] <- self$`self`$toJSON()
      }
      if (!is.null(self$`_class`)) {
        GithubOrganizationlinksObject[['_class']] <- self$`_class`
      }

      GithubOrganizationlinksObject
    },
    fromJSON = function(GithubOrganizationlinksJson) {
      GithubOrganizationlinksObject <- jsonlite::fromJSON(GithubOrganizationlinksJson)
      if (!is.null(GithubOrganizationlinksObject$`repositories`)) {
        repositoriesObject <- Link$new()
        repositoriesObject$fromJSON(jsonlite::toJSON(GithubOrganizationlinksObject$repositories, auto_unbox = TRUE))
        self$`repositories` <- repositoriesObject
      }
      if (!is.null(GithubOrganizationlinksObject$`self`)) {
        selfObject <- Link$new()
        selfObject$fromJSON(jsonlite::toJSON(GithubOrganizationlinksObject$self, auto_unbox = TRUE))
        self$`self` <- selfObject
      }
      if (!is.null(GithubOrganizationlinksObject$`_class`)) {
        self$`_class` <- GithubOrganizationlinksObject$`_class`
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "repositories": %s,
           "self": %s,
           "_class": %s
        }',
        self$`repositories`$toJSON(),
        self$`self`$toJSON(),
        self$`_class`
      )
    },
    fromJSONString = function(GithubOrganizationlinksJson) {
      GithubOrganizationlinksObject <- jsonlite::fromJSON(GithubOrganizationlinksJson)
      LinkObject <- Link$new()
      self$`repositories` <- LinkObject$fromJSON(jsonlite::toJSON(GithubOrganizationlinksObject$repositories, auto_unbox = TRUE))
      LinkObject <- Link$new()
      self$`self` <- LinkObject$fromJSON(jsonlite::toJSON(GithubOrganizationlinksObject$self, auto_unbox = TRUE))
      self$`_class` <- GithubOrganizationlinksObject$`_class`
    }
  )
)
