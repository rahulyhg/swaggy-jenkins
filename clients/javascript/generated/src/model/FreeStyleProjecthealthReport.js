/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.0.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 *
 * OpenAPI Generator version: 3.2.1-SNAPSHOT
 *
 * Do not edit the class manually.
 *
 */

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD. Register as an anonymous module.
    define(['ApiClient'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'));
  } else {
    // Browser globals (root is window)
    if (!root.SwaggyJenkins) {
      root.SwaggyJenkins = {};
    }
    root.SwaggyJenkins.FreeStyleProjecthealthReport = factory(root.SwaggyJenkins.ApiClient);
  }
}(this, function(ApiClient) {
  'use strict';




  /**
   * The FreeStyleProjecthealthReport model module.
   * @module model/FreeStyleProjecthealthReport
   * @version 0.0.2
   */

  /**
   * Constructs a new <code>FreeStyleProjecthealthReport</code>.
   * @alias module:model/FreeStyleProjecthealthReport
   * @class
   */
  var exports = function() {
    var _this = this;






  };

  /**
   * Constructs a <code>FreeStyleProjecthealthReport</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/FreeStyleProjecthealthReport} obj Optional instance to populate.
   * @return {module:model/FreeStyleProjecthealthReport} The populated <code>FreeStyleProjecthealthReport</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('description')) {
        obj['description'] = ApiClient.convertToType(data['description'], 'String');
      }
      if (data.hasOwnProperty('iconClassName')) {
        obj['iconClassName'] = ApiClient.convertToType(data['iconClassName'], 'String');
      }
      if (data.hasOwnProperty('iconUrl')) {
        obj['iconUrl'] = ApiClient.convertToType(data['iconUrl'], 'String');
      }
      if (data.hasOwnProperty('score')) {
        obj['score'] = ApiClient.convertToType(data['score'], 'Number');
      }
      if (data.hasOwnProperty('_class')) {
        obj['_class'] = ApiClient.convertToType(data['_class'], 'String');
      }
    }
    return obj;
  }

  /**
   * @member {String} description
   */
  exports.prototype['description'] = undefined;
  /**
   * @member {String} iconClassName
   */
  exports.prototype['iconClassName'] = undefined;
  /**
   * @member {String} iconUrl
   */
  exports.prototype['iconUrl'] = undefined;
  /**
   * @member {Number} score
   */
  exports.prototype['score'] = undefined;
  /**
   * @member {String} _class
   */
  exports.prototype['_class'] = undefined;



  return exports;
}));


