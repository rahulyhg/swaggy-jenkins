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
    define(['ApiClient', 'model/PipelineImpllinks'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./PipelineImpllinks'));
  } else {
    // Browser globals (root is window)
    if (!root.SwaggyJenkins) {
      root.SwaggyJenkins = {};
    }
    root.SwaggyJenkins.PipelineImpl = factory(root.SwaggyJenkins.ApiClient, root.SwaggyJenkins.PipelineImpllinks);
  }
}(this, function(ApiClient, PipelineImpllinks) {
  'use strict';




  /**
   * The PipelineImpl model module.
   * @module model/PipelineImpl
   * @version 0.0.2
   */

  /**
   * Constructs a new <code>PipelineImpl</code>.
   * @alias module:model/PipelineImpl
   * @class
   */
  var exports = function() {
    var _this = this;










  };

  /**
   * Constructs a <code>PipelineImpl</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/PipelineImpl} obj Optional instance to populate.
   * @return {module:model/PipelineImpl} The populated <code>PipelineImpl</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('_class')) {
        obj['_class'] = ApiClient.convertToType(data['_class'], 'String');
      }
      if (data.hasOwnProperty('displayName')) {
        obj['displayName'] = ApiClient.convertToType(data['displayName'], 'String');
      }
      if (data.hasOwnProperty('estimatedDurationInMillis')) {
        obj['estimatedDurationInMillis'] = ApiClient.convertToType(data['estimatedDurationInMillis'], 'Number');
      }
      if (data.hasOwnProperty('fullName')) {
        obj['fullName'] = ApiClient.convertToType(data['fullName'], 'String');
      }
      if (data.hasOwnProperty('latestRun')) {
        obj['latestRun'] = ApiClient.convertToType(data['latestRun'], 'String');
      }
      if (data.hasOwnProperty('name')) {
        obj['name'] = ApiClient.convertToType(data['name'], 'String');
      }
      if (data.hasOwnProperty('organization')) {
        obj['organization'] = ApiClient.convertToType(data['organization'], 'String');
      }
      if (data.hasOwnProperty('weatherScore')) {
        obj['weatherScore'] = ApiClient.convertToType(data['weatherScore'], 'Number');
      }
      if (data.hasOwnProperty('_links')) {
        obj['_links'] = PipelineImpllinks.constructFromObject(data['_links']);
      }
    }
    return obj;
  }

  /**
   * @member {String} _class
   */
  exports.prototype['_class'] = undefined;
  /**
   * @member {String} displayName
   */
  exports.prototype['displayName'] = undefined;
  /**
   * @member {Number} estimatedDurationInMillis
   */
  exports.prototype['estimatedDurationInMillis'] = undefined;
  /**
   * @member {String} fullName
   */
  exports.prototype['fullName'] = undefined;
  /**
   * @member {String} latestRun
   */
  exports.prototype['latestRun'] = undefined;
  /**
   * @member {String} name
   */
  exports.prototype['name'] = undefined;
  /**
   * @member {String} organization
   */
  exports.prototype['organization'] = undefined;
  /**
   * @member {Number} weatherScore
   */
  exports.prototype['weatherScore'] = undefined;
  /**
   * @member {module:model/PipelineImpllinks} _links
   */
  exports.prototype['_links'] = undefined;



  return exports;
}));


