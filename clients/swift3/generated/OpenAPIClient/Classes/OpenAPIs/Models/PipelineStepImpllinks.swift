//
// PipelineStepImpllinks.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class PipelineStepImpllinks: JSONEncodable {

    public var _self: Link?
    public var actions: Link?
    public var _class: String?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["self"] = self._self?.encodeToJSON()
        nillableDictionary["actions"] = self.actions?.encodeToJSON()
        nillableDictionary["_class"] = self._class

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
