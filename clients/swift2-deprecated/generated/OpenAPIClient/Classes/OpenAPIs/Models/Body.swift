//
// Body.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class Body: JSONEncodable {
    public var favorite: Bool?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["favorite"] = self.favorite
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
