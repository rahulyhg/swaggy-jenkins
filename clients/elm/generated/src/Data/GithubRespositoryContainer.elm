{-
   Swaggy Jenkins
   Jenkins API clients generated from Swagger / Open API specification

   OpenAPI spec version: 1.0.0
   Contact: blah@cliffano.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.GithubRespositoryContainer exposing (GithubRespositoryContainer, githubRespositoryContainerDecoder, githubRespositoryContainerEncoder)

import Data.GithubRespositoryContainerlinks exposing (GithubRespositoryContainerlinks, githubRespositoryContainerlinksDecoder, githubRespositoryContainerlinksEncoder)
import Data.GithubRepositories exposing (GithubRepositories, githubRepositoriesDecoder, githubRepositoriesEncoder)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (decode, optional, required)
import Json.Encode as Encode
import Maybe exposing (map, withDefault)


type alias GithubRespositoryContainer =
    { class : Maybe String
    , links : Maybe GithubRespositoryContainerlinks
    , repositories : Maybe GithubRepositories
    }


githubRespositoryContainerDecoder : Decoder GithubRespositoryContainer
githubRespositoryContainerDecoder =
    decode GithubRespositoryContainer
        |> optional "_class" (Decode.nullable Decode.string) Nothing
        |> optional "_links" (Decode.nullable githubRespositoryContainerlinksDecoder) Nothing
        |> optional "repositories" (Decode.nullable githubRepositoriesDecoder) Nothing



githubRespositoryContainerEncoder : GithubRespositoryContainer -> Encode.Value
githubRespositoryContainerEncoder model =
    Encode.object
        [ ( "_class", withDefault Encode.null (map Encode.string model.class) )
        , ( "_links", withDefault Encode.null (map githubRespositoryContainerlinksEncoder model.links) )
        , ( "repositories", withDefault Encode.null (map githubRepositoriesEncoder model.repositories) )
        ]


