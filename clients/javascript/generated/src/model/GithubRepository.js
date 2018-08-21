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
    define(['ApiClient', 'model/GithubRepositorylinks', 'model/GithubRepositorypermissions'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./GithubRepositorylinks'), require('./GithubRepositorypermissions'));
  } else {
    // Browser globals (root is window)
    if (!root.SwaggyJenkins) {
      root.SwaggyJenkins = {};
    }
    root.SwaggyJenkins.GithubRepository = factory(root.SwaggyJenkins.ApiClient, root.SwaggyJenkins.GithubRepositorylinks, root.SwaggyJenkins.GithubRepositorypermissions);
  }
}(this, function(ApiClient, GithubRepositorylinks, GithubRepositorypermissions) {
  'use strict';




  /**
   * The GithubRepository model module.
   * @module model/GithubRepository
   * @version 0.0.2
   */

  /**
   * Constructs a new <code>GithubRepository</code>.
   * @alias module:model/GithubRepository
   * @class
   */
  var exports = function() {
    var _this = this;









  };

  /**
   * Constructs a <code>GithubRepository</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/GithubRepository} obj Optional instance to populate.
   * @return {module:model/GithubRepository} The populated <code>GithubRepository</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('_class')) {
        obj['_class'] = ApiClient.convertToType(data['_class'], 'String');
      }
      if (data.hasOwnProperty('_links')) {
        obj['_links'] = GithubRepositorylinks.constructFromObject(data['_links']);
      }
      if (data.hasOwnProperty('defaultBranch')) {
        obj['defaultBranch'] = ApiClient.convertToType(data['defaultBranch'], 'String');
      }
      if (data.hasOwnProperty('description')) {
        obj['description'] = ApiClient.convertToType(data['description'], 'String');
      }
      if (data.hasOwnProperty('name')) {
        obj['name'] = ApiClient.convertToType(data['name'], 'String');
      }
      if (data.hasOwnProperty('permissions')) {
        obj['permissions'] = GithubRepositorypermissions.constructFromObject(data['permissions']);
      }
      if (data.hasOwnProperty('private')) {
        obj['private'] = ApiClient.convertToType(data['private'], 'Boolean');
      }
      if (data.hasOwnProperty('fullName')) {
        obj['fullName'] = ApiClient.convertToType(data['fullName'], 'String');
      }
    }
    return obj;
  }

  /**
   * @member {String} _class
   */
  exports.prototype['_class'] = undefined;
  /**
   * @member {module:model/GithubRepositorylinks} _links
   */
  exports.prototype['_links'] = undefined;
  /**
   * @member {String} defaultBranch
   */
  exports.prototype['defaultBranch'] = undefined;
  /**
   * @member {String} description
   */
  exports.prototype['description'] = undefined;
  /**
   * @member {String} name
   */
  exports.prototype['name'] = undefined;
  /**
   * @member {module:model/GithubRepositorypermissions} permissions
   */
  exports.prototype['permissions'] = undefined;
  /**
   * @member {Boolean} private
   */
  exports.prototype['private'] = undefined;
  /**
   * @member {String} fullName
   */
  exports.prototype['fullName'] = undefined;



  return exports;
}));


