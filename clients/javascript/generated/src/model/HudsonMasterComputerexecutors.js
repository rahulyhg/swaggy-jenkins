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
    define(['ApiClient', 'model/FreeStyleBuild'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./FreeStyleBuild'));
  } else {
    // Browser globals (root is window)
    if (!root.SwaggyJenkins) {
      root.SwaggyJenkins = {};
    }
    root.SwaggyJenkins.HudsonMasterComputerexecutors = factory(root.SwaggyJenkins.ApiClient, root.SwaggyJenkins.FreeStyleBuild);
  }
}(this, function(ApiClient, FreeStyleBuild) {
  'use strict';




  /**
   * The HudsonMasterComputerexecutors model module.
   * @module model/HudsonMasterComputerexecutors
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>HudsonMasterComputerexecutors</code>.
   * @alias module:model/HudsonMasterComputerexecutors
   * @class
   */
  var exports = function() {
    var _this = this;







  };

  /**
   * Constructs a <code>HudsonMasterComputerexecutors</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/HudsonMasterComputerexecutors} obj Optional instance to populate.
   * @return {module:model/HudsonMasterComputerexecutors} The populated <code>HudsonMasterComputerexecutors</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('currentExecutable')) {
        obj['currentExecutable'] = FreeStyleBuild.constructFromObject(data['currentExecutable']);
      }
      if (data.hasOwnProperty('idle')) {
        obj['idle'] = ApiClient.convertToType(data['idle'], 'Boolean');
      }
      if (data.hasOwnProperty('likelyStuck')) {
        obj['likelyStuck'] = ApiClient.convertToType(data['likelyStuck'], 'Boolean');
      }
      if (data.hasOwnProperty('number')) {
        obj['number'] = ApiClient.convertToType(data['number'], 'Number');
      }
      if (data.hasOwnProperty('progress')) {
        obj['progress'] = ApiClient.convertToType(data['progress'], 'Number');
      }
      if (data.hasOwnProperty('_class')) {
        obj['_class'] = ApiClient.convertToType(data['_class'], 'String');
      }
    }
    return obj;
  }

  /**
   * @member {module:model/FreeStyleBuild} currentExecutable
   */
  exports.prototype['currentExecutable'] = undefined;
  /**
   * @member {Boolean} idle
   */
  exports.prototype['idle'] = undefined;
  /**
   * @member {Boolean} likelyStuck
   */
  exports.prototype['likelyStuck'] = undefined;
  /**
   * @member {Number} number
   */
  exports.prototype['number'] = undefined;
  /**
   * @member {Number} progress
   */
  exports.prototype['progress'] = undefined;
  /**
   * @member {String} _class
   */
  exports.prototype['_class'] = undefined;



  return exports;
}));


