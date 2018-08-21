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
    instance = new SwaggyJenkins.PipelineImpl();
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

  describe('PipelineImpl', function() {
    it('should create an instance of PipelineImpl', function() {
      // uncomment below and update the code to test PipelineImpl
      //var instance = new SwaggyJenkins.PipelineImpl();
      //expect(instance).to.be.a(SwaggyJenkins.PipelineImpl);
    });

    it('should have the property _class (base name: "_class")', function() {
      // uncomment below and update the code to test the property _class
      //var instance = new SwaggyJenkins.PipelineImpl();
      //expect(instance).to.be();
    });

    it('should have the property displayName (base name: "displayName")', function() {
      // uncomment below and update the code to test the property displayName
      //var instance = new SwaggyJenkins.PipelineImpl();
      //expect(instance).to.be();
    });

    it('should have the property estimatedDurationInMillis (base name: "estimatedDurationInMillis")', function() {
      // uncomment below and update the code to test the property estimatedDurationInMillis
      //var instance = new SwaggyJenkins.PipelineImpl();
      //expect(instance).to.be();
    });

    it('should have the property fullName (base name: "fullName")', function() {
      // uncomment below and update the code to test the property fullName
      //var instance = new SwaggyJenkins.PipelineImpl();
      //expect(instance).to.be();
    });

    it('should have the property latestRun (base name: "latestRun")', function() {
      // uncomment below and update the code to test the property latestRun
      //var instance = new SwaggyJenkins.PipelineImpl();
      //expect(instance).to.be();
    });

    it('should have the property name (base name: "name")', function() {
      // uncomment below and update the code to test the property name
      //var instance = new SwaggyJenkins.PipelineImpl();
      //expect(instance).to.be();
    });

    it('should have the property organization (base name: "organization")', function() {
      // uncomment below and update the code to test the property organization
      //var instance = new SwaggyJenkins.PipelineImpl();
      //expect(instance).to.be();
    });

    it('should have the property weatherScore (base name: "weatherScore")', function() {
      // uncomment below and update the code to test the property weatherScore
      //var instance = new SwaggyJenkins.PipelineImpl();
      //expect(instance).to.be();
    });

    it('should have the property links (base name: "_links")', function() {
      // uncomment below and update the code to test the property links
      //var instance = new SwaggyJenkins.PipelineImpl();
      //expect(instance).to.be();
    });

  });

}));
