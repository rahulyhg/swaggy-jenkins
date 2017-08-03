/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 *
 */


import ApiClient from '../ApiClient';
import StringParameterValue from './StringParameterValue';





/**
* The StringParameterDefinition model module.
* @module model/StringParameterDefinition
* @version 0.0.2
*/
export default class StringParameterDefinition {
    /**
    * Constructs a new <code>StringParameterDefinition</code>.
    * @alias module:model/StringParameterDefinition
    * @class
    */

    constructor() {
        

        
        

        

        
    }

    /**
    * Constructs a <code>StringParameterDefinition</code> from a plain JavaScript object, optionally creating a new instance.
    * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
    * @param {Object} data The plain JavaScript object bearing properties of interest.
    * @param {module:model/StringParameterDefinition} obj Optional instance to populate.
    * @return {module:model/StringParameterDefinition} The populated <code>StringParameterDefinition</code> instance.
    */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new StringParameterDefinition();

            
            
            

            if (data.hasOwnProperty('_class')) {
                obj['_class'] = ApiClient.convertToType(data['_class'], 'String');
            }
            if (data.hasOwnProperty('defaultParameterValue')) {
                obj['defaultParameterValue'] = StringParameterValue.constructFromObject(data['defaultParameterValue']);
            }
            if (data.hasOwnProperty('description')) {
                obj['description'] = ApiClient.convertToType(data['description'], 'String');
            }
            if (data.hasOwnProperty('name')) {
                obj['name'] = ApiClient.convertToType(data['name'], 'String');
            }
            if (data.hasOwnProperty('type')) {
                obj['type'] = ApiClient.convertToType(data['type'], 'String');
            }
        }
        return obj;
    }

    /**
    * @member {String} _class
    */
    _class = undefined;
    /**
    * @member {module:model/StringParameterValue} defaultParameterValue
    */
    defaultParameterValue = undefined;
    /**
    * @member {String} description
    */
    description = undefined;
    /**
    * @member {String} name
    */
    name = undefined;
    /**
    * @member {String} type
    */
    type = undefined;








}

