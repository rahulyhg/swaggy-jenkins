//
// PipelineStepImpllinks.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct PipelineStepImpllinks: Codable {

    public var _self: Link?
    public var actions: Link?
    public var _class: String?

    public init(_self: Link?, actions: Link?, _class: String?) {
        self._self = _self
        self.actions = actions
        self._class = _class
    }

    public enum CodingKeys: String, CodingKey { 
        case _self = "self"
        case actions
        case _class
    }


}

