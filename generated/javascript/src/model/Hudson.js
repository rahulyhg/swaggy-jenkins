/**
 * Swaggy Jenkins
 * Jenkins remote access API
 *
 * OpenAPI spec version: 0.0.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 *
 */

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD. Register as an anonymous module.
    define(['ApiClient', 'model/AllView', 'model/FreeStyleProject', 'model/UnlabeledLoadStatistics'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./AllView'), require('./FreeStyleProject'), require('./UnlabeledLoadStatistics'));
  } else {
    // Browser globals (root is window)
    if (!root.SwaggyJenkins) {
      root.SwaggyJenkins = {};
    }
    root.SwaggyJenkins.Hudson = factory(root.SwaggyJenkins.ApiClient, root.SwaggyJenkins.AllView, root.SwaggyJenkins.FreeStyleProject, root.SwaggyJenkins.UnlabeledLoadStatistics);
  }
}(this, function(ApiClient, AllView, FreeStyleProject, UnlabeledLoadStatistics) {
  'use strict';




  /**
   * The Hudson model module.
   * @module model/Hudson
   * @version 0.0.1
   */

  /**
   * Constructs a new <code>Hudson</code>.
   * @alias module:model/Hudson
   * @class
   */
  var exports = function() {
    var _this = this;












  };

  /**
   * Constructs a <code>Hudson</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/Hudson} obj Optional instance to populate.
   * @return {module:model/Hudson} The populated <code>Hudson</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('_class')) {
        obj['_class'] = ApiClient.convertToType(data['_class'], 'String');
      }
      if (data.hasOwnProperty('mode')) {
        obj['mode'] = ApiClient.convertToType(data['mode'], 'String');
      }
      if (data.hasOwnProperty('nodeDescription')) {
        obj['nodeDescription'] = ApiClient.convertToType(data['nodeDescription'], 'String');
      }
      if (data.hasOwnProperty('nodeName')) {
        obj['nodeName'] = ApiClient.convertToType(data['nodeName'], 'String');
      }
      if (data.hasOwnProperty('numExecutors')) {
        obj['numExecutors'] = ApiClient.convertToType(data['numExecutors'], 'Number');
      }
      if (data.hasOwnProperty('description')) {
        obj['description'] = ApiClient.convertToType(data['description'], 'String');
      }
      if (data.hasOwnProperty('jobs')) {
        obj['jobs'] = ApiClient.convertToType(data['jobs'], [FreeStyleProject]);
      }
      if (data.hasOwnProperty('primaryView')) {
        obj['primaryView'] = AllView.constructFromObject(data['primaryView']);
      }
      if (data.hasOwnProperty('slaveAgentPort')) {
        obj['slaveAgentPort'] = ApiClient.convertToType(data['slaveAgentPort'], 'Number');
      }
      if (data.hasOwnProperty('unlabeledLoad')) {
        obj['unlabeledLoad'] = UnlabeledLoadStatistics.constructFromObject(data['unlabeledLoad']);
      }
      if (data.hasOwnProperty('views')) {
        obj['views'] = ApiClient.convertToType(data['views'], [AllView]);
      }
    }
    return obj;
  }

  /**
   * @member {String} _class
   */
  exports.prototype['_class'] = undefined;
  /**
   * @member {String} mode
   */
  exports.prototype['mode'] = undefined;
  /**
   * @member {String} nodeDescription
   */
  exports.prototype['nodeDescription'] = undefined;
  /**
   * @member {String} nodeName
   */
  exports.prototype['nodeName'] = undefined;
  /**
   * @member {Number} numExecutors
   */
  exports.prototype['numExecutors'] = undefined;
  /**
   * @member {String} description
   */
  exports.prototype['description'] = undefined;
  /**
   * @member {Array.<module:model/FreeStyleProject>} jobs
   */
  exports.prototype['jobs'] = undefined;
  /**
   * @member {module:model/AllView} primaryView
   */
  exports.prototype['primaryView'] = undefined;
  /**
   * @member {Number} slaveAgentPort
   */
  exports.prototype['slaveAgentPort'] = undefined;
  /**
   * @member {module:model/UnlabeledLoadStatistics} unlabeledLoad
   */
  exports.prototype['unlabeledLoad'] = undefined;
  /**
   * @member {Array.<module:model/AllView>} views
   */
  exports.prototype['views'] = undefined;



  return exports;
}));

