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
    // AMD.
    define(['expect.js', '../../src/index'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    factory(require('expect.js'), require('../../src/index'));
  } else {
    // Browser globals (root is window)
    factory(root.expect, root.SwaggyJenkins);
  }
}(this, function(expect, SwaggyJenkins) {
  'use strict';

  var instance;

  beforeEach(function() {
    instance = new SwaggyJenkins.HudsonMasterComputerexecutors();
  });

  var getProperty = function(object, getter, property) {
    // Use getter method if present; otherwise, get the property directly.
    if (typeof object[getter] === 'function')
      return object[getter]();
    else
      return object[property];
  }

  var setProperty = function(object, setter, property, value) {
    // Use setter method if present; otherwise, set the property directly.
    if (typeof object[setter] === 'function')
      object[setter](value);
    else
      object[property] = value;
  }

  describe('HudsonMasterComputerexecutors', function() {
    it('should create an instance of HudsonMasterComputerexecutors', function() {
      // uncomment below and update the code to test HudsonMasterComputerexecutors
      //var instance = new SwaggyJenkins.HudsonMasterComputerexecutors();
      //expect(instance).to.be.a(SwaggyJenkins.HudsonMasterComputerexecutors);
    });

    it('should have the property currentExecutable (base name: "currentExecutable")', function() {
      // uncomment below and update the code to test the property currentExecutable
      //var instance = new SwaggyJenkins.HudsonMasterComputerexecutors();
      //expect(instance).to.be();
    });

    it('should have the property idle (base name: "idle")', function() {
      // uncomment below and update the code to test the property idle
      //var instance = new SwaggyJenkins.HudsonMasterComputerexecutors();
      //expect(instance).to.be();
    });

    it('should have the property likelyStuck (base name: "likelyStuck")', function() {
      // uncomment below and update the code to test the property likelyStuck
      //var instance = new SwaggyJenkins.HudsonMasterComputerexecutors();
      //expect(instance).to.be();
    });

    it('should have the property _number (base name: "number")', function() {
      // uncomment below and update the code to test the property _number
      //var instance = new SwaggyJenkins.HudsonMasterComputerexecutors();
      //expect(instance).to.be();
    });

    it('should have the property progress (base name: "progress")', function() {
      // uncomment below and update the code to test the property progress
      //var instance = new SwaggyJenkins.HudsonMasterComputerexecutors();
      //expect(instance).to.be();
    });

    it('should have the property _class (base name: "_class")', function() {
      // uncomment below and update the code to test the property _class
      //var instance = new SwaggyJenkins.HudsonMasterComputerexecutors();
      //expect(instance).to.be();
    });

  });

}));
