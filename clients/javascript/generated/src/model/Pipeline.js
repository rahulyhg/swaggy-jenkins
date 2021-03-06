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
    define(['ApiClient', 'model/PipelinelatestRun'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./PipelinelatestRun'));
  } else {
    // Browser globals (root is window)
    if (!root.SwaggyJenkins) {
      root.SwaggyJenkins = {};
    }
    root.SwaggyJenkins.Pipeline = factory(root.SwaggyJenkins.ApiClient, root.SwaggyJenkins.PipelinelatestRun);
  }
}(this, function(ApiClient, PipelinelatestRun) {
  'use strict';




  /**
   * The Pipeline model module.
   * @module model/Pipeline
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>Pipeline</code>.
   * @alias module:model/Pipeline
   * @class
   */
  var exports = function() {
    var _this = this;









  };

  /**
   * Constructs a <code>Pipeline</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/Pipeline} obj Optional instance to populate.
   * @return {module:model/Pipeline} The populated <code>Pipeline</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('_class')) {
        obj['_class'] = ApiClient.convertToType(data['_class'], 'String');
      }
      if (data.hasOwnProperty('organization')) {
        obj['organization'] = ApiClient.convertToType(data['organization'], 'String');
      }
      if (data.hasOwnProperty('name')) {
        obj['name'] = ApiClient.convertToType(data['name'], 'String');
      }
      if (data.hasOwnProperty('displayName')) {
        obj['displayName'] = ApiClient.convertToType(data['displayName'], 'String');
      }
      if (data.hasOwnProperty('fullName')) {
        obj['fullName'] = ApiClient.convertToType(data['fullName'], 'String');
      }
      if (data.hasOwnProperty('weatherScore')) {
        obj['weatherScore'] = ApiClient.convertToType(data['weatherScore'], 'Number');
      }
      if (data.hasOwnProperty('estimatedDurationInMillis')) {
        obj['estimatedDurationInMillis'] = ApiClient.convertToType(data['estimatedDurationInMillis'], 'Number');
      }
      if (data.hasOwnProperty('latestRun')) {
        obj['latestRun'] = PipelinelatestRun.constructFromObject(data['latestRun']);
      }
    }
    return obj;
  }

  /**
   * @member {String} _class
   */
  exports.prototype['_class'] = undefined;
  /**
   * @member {String} organization
   */
  exports.prototype['organization'] = undefined;
  /**
   * @member {String} name
   */
  exports.prototype['name'] = undefined;
  /**
   * @member {String} displayName
   */
  exports.prototype['displayName'] = undefined;
  /**
   * @member {String} fullName
   */
  exports.prototype['fullName'] = undefined;
  /**
   * @member {Number} weatherScore
   */
  exports.prototype['weatherScore'] = undefined;
  /**
   * @member {Number} estimatedDurationInMillis
   */
  exports.prototype['estimatedDurationInMillis'] = undefined;
  /**
   * @member {module:model/PipelinelatestRun} latestRun
   */
  exports.prototype['latestRun'] = undefined;



  return exports;
}));


