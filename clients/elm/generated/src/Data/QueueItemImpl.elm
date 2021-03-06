{-
   Swaggy Jenkins
   Jenkins API clients generated from Swagger / Open API specification

   OpenAPI spec version: 1.0.0
   Contact: blah@cliffano.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.QueueItemImpl exposing (QueueItemImpl, queueItemImplDecoder, queueItemImplEncoder)

import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (decode, optional, required)
import Json.Encode as Encode
import Maybe exposing (map, withDefault)


type alias QueueItemImpl =
    { class : Maybe String
    , expectedBuildNumber : Maybe Int
    , id : Maybe String
    , pipeline : Maybe String
    , queuedTime : Maybe Int
    }


queueItemImplDecoder : Decoder QueueItemImpl
queueItemImplDecoder =
    decode QueueItemImpl
        |> optional "_class" (Decode.nullable Decode.string) Nothing
        |> optional "expectedBuildNumber" (Decode.nullable Decode.int) Nothing
        |> optional "id" (Decode.nullable Decode.string) Nothing
        |> optional "pipeline" (Decode.nullable Decode.string) Nothing
        |> optional "queuedTime" (Decode.nullable Decode.int) Nothing



queueItemImplEncoder : QueueItemImpl -> Encode.Value
queueItemImplEncoder model =
    Encode.object
        [ ( "_class", withDefault Encode.null (map Encode.string model.class) )
        , ( "expectedBuildNumber", withDefault Encode.null (map Encode.int model.expectedBuildNumber) )
        , ( "id", withDefault Encode.null (map Encode.string model.id) )
        , ( "pipeline", withDefault Encode.null (map Encode.string model.pipeline) )
        , ( "queuedTime", withDefault Encode.null (map Encode.int model.queuedTime) )
        ]


