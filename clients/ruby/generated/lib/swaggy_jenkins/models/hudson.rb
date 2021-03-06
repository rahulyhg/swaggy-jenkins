=begin
#Swaggy Jenkins

#Jenkins API clients generated from Swagger / Open API specification

OpenAPI spec version: 1.0.0
Contact: blah@cliffano.com
Generated by: https://openapi-generator.tech
OpenAPI Generator version: 3.2.1-SNAPSHOT

=end

require 'date'

module SwaggyJenkinsClient
  class Hudson
    attr_accessor :_class

    attr_accessor :assigned_labels

    attr_accessor :mode

    attr_accessor :node_description

    attr_accessor :node_name

    attr_accessor :num_executors

    attr_accessor :description

    attr_accessor :jobs

    attr_accessor :primary_view

    attr_accessor :quieting_down

    attr_accessor :slave_agent_port

    attr_accessor :unlabeled_load

    attr_accessor :use_crumbs

    attr_accessor :use_security

    attr_accessor :views

    # Attribute mapping from ruby-style variable name to JSON key.
    def self.attribute_map
      {
        :'_class' => :'_class',
        :'assigned_labels' => :'assignedLabels',
        :'mode' => :'mode',
        :'node_description' => :'nodeDescription',
        :'node_name' => :'nodeName',
        :'num_executors' => :'numExecutors',
        :'description' => :'description',
        :'jobs' => :'jobs',
        :'primary_view' => :'primaryView',
        :'quieting_down' => :'quietingDown',
        :'slave_agent_port' => :'slaveAgentPort',
        :'unlabeled_load' => :'unlabeledLoad',
        :'use_crumbs' => :'useCrumbs',
        :'use_security' => :'useSecurity',
        :'views' => :'views'
      }
    end

    # Attribute type mapping.
    def self.openapi_types
      {
        :'_class' => :'String',
        :'assigned_labels' => :'Array<HudsonassignedLabels>',
        :'mode' => :'String',
        :'node_description' => :'String',
        :'node_name' => :'String',
        :'num_executors' => :'Integer',
        :'description' => :'String',
        :'jobs' => :'Array<FreeStyleProject>',
        :'primary_view' => :'AllView',
        :'quieting_down' => :'BOOLEAN',
        :'slave_agent_port' => :'Integer',
        :'unlabeled_load' => :'UnlabeledLoadStatistics',
        :'use_crumbs' => :'BOOLEAN',
        :'use_security' => :'BOOLEAN',
        :'views' => :'Array<AllView>'
      }
    end

    # Initializes the object
    # @param [Hash] attributes Model attributes in the form of hash
    def initialize(attributes = {})
      return unless attributes.is_a?(Hash)

      # convert string to symbol for hash key
      attributes = attributes.each_with_object({}) { |(k, v), h| h[k.to_sym] = v }

      if attributes.has_key?(:'_class')
        self._class = attributes[:'_class']
      end

      if attributes.has_key?(:'assignedLabels')
        if (value = attributes[:'assignedLabels']).is_a?(Array)
          self.assigned_labels = value
        end
      end

      if attributes.has_key?(:'mode')
        self.mode = attributes[:'mode']
      end

      if attributes.has_key?(:'nodeDescription')
        self.node_description = attributes[:'nodeDescription']
      end

      if attributes.has_key?(:'nodeName')
        self.node_name = attributes[:'nodeName']
      end

      if attributes.has_key?(:'numExecutors')
        self.num_executors = attributes[:'numExecutors']
      end

      if attributes.has_key?(:'description')
        self.description = attributes[:'description']
      end

      if attributes.has_key?(:'jobs')
        if (value = attributes[:'jobs']).is_a?(Array)
          self.jobs = value
        end
      end

      if attributes.has_key?(:'primaryView')
        self.primary_view = attributes[:'primaryView']
      end

      if attributes.has_key?(:'quietingDown')
        self.quieting_down = attributes[:'quietingDown']
      end

      if attributes.has_key?(:'slaveAgentPort')
        self.slave_agent_port = attributes[:'slaveAgentPort']
      end

      if attributes.has_key?(:'unlabeledLoad')
        self.unlabeled_load = attributes[:'unlabeledLoad']
      end

      if attributes.has_key?(:'useCrumbs')
        self.use_crumbs = attributes[:'useCrumbs']
      end

      if attributes.has_key?(:'useSecurity')
        self.use_security = attributes[:'useSecurity']
      end

      if attributes.has_key?(:'views')
        if (value = attributes[:'views']).is_a?(Array)
          self.views = value
        end
      end
    end

    # Show invalid properties with the reasons. Usually used together with valid?
    # @return Array for valid properties with the reasons
    def list_invalid_properties
      invalid_properties = Array.new
      invalid_properties
    end

    # Check to see if the all the properties in the model are valid
    # @return true if the model is valid
    def valid?
      true
    end

    # Checks equality by comparing each attribute.
    # @param [Object] Object to be compared
    def ==(o)
      return true if self.equal?(o)
      self.class == o.class &&
          _class == o._class &&
          assigned_labels == o.assigned_labels &&
          mode == o.mode &&
          node_description == o.node_description &&
          node_name == o.node_name &&
          num_executors == o.num_executors &&
          description == o.description &&
          jobs == o.jobs &&
          primary_view == o.primary_view &&
          quieting_down == o.quieting_down &&
          slave_agent_port == o.slave_agent_port &&
          unlabeled_load == o.unlabeled_load &&
          use_crumbs == o.use_crumbs &&
          use_security == o.use_security &&
          views == o.views
    end

    # @see the `==` method
    # @param [Object] Object to be compared
    def eql?(o)
      self == o
    end

    # Calculates hash code according to all attributes.
    # @return [Fixnum] Hash code
    def hash
      [_class, assigned_labels, mode, node_description, node_name, num_executors, description, jobs, primary_view, quieting_down, slave_agent_port, unlabeled_load, use_crumbs, use_security, views].hash
    end

    # Builds the object from hash
    # @param [Hash] attributes Model attributes in the form of hash
    # @return [Object] Returns the model itself
    def build_from_hash(attributes)
      return nil unless attributes.is_a?(Hash)
      self.class.openapi_types.each_pair do |key, type|
        if type =~ /\AArray<(.*)>/i
          # check to ensure the input is an array given that the the attribute
          # is documented as an array but the input is not
          if attributes[self.class.attribute_map[key]].is_a?(Array)
            self.send("#{key}=", attributes[self.class.attribute_map[key]].map { |v| _deserialize($1, v) })
          end
        elsif !attributes[self.class.attribute_map[key]].nil?
          self.send("#{key}=", _deserialize(type, attributes[self.class.attribute_map[key]]))
        end # or else data not found in attributes(hash), not an issue as the data can be optional
      end

      self
    end

    # Deserializes the data based on type
    # @param string type Data type
    # @param string value Value to be deserialized
    # @return [Object] Deserialized data
    def _deserialize(type, value)
      case type.to_sym
      when :DateTime
        DateTime.parse(value)
      when :Date
        Date.parse(value)
      when :String
        value.to_s
      when :Integer
        value.to_i
      when :Float
        value.to_f
      when :BOOLEAN
        if value.to_s =~ /\A(true|t|yes|y|1)\z/i
          true
        else
          false
        end
      when :Object
        # generic object (usually a Hash), return directly
        value
      when /\AArray<(?<inner_type>.+)>\z/
        inner_type = Regexp.last_match[:inner_type]
        value.map { |v| _deserialize(inner_type, v) }
      when /\AHash<(?<k_type>.+?), (?<v_type>.+)>\z/
        k_type = Regexp.last_match[:k_type]
        v_type = Regexp.last_match[:v_type]
        {}.tap do |hash|
          value.each do |k, v|
            hash[_deserialize(k_type, k)] = _deserialize(v_type, v)
          end
        end
      else # model
        temp_model = SwaggyJenkinsClient.const_get(type).new
        temp_model.build_from_hash(value)
      end
    end

    # Returns the string representation of the object
    # @return [String] String presentation of the object
    def to_s
      to_hash.to_s
    end

    # to_body is an alias to to_hash (backward compatibility)
    # @return [Hash] Returns the object in the form of hash
    def to_body
      to_hash
    end

    # Returns the object in the form of hash
    # @return [Hash] Returns the object in the form of hash
    def to_hash
      hash = {}
      self.class.attribute_map.each_pair do |attr, param|
        value = self.send(attr)
        next if value.nil?
        hash[param] = _to_hash(value)
      end
      hash
    end

    # Outputs non-array value in the form of hash
    # For object, use to_hash. Otherwise, just return the value
    # @param [Object] value Any valid value
    # @return [Hash] Returns the value in the form of hash
    def _to_hash(value)
      if value.is_a?(Array)
        value.compact.map { |v| _to_hash(v) }
      elsif value.is_a?(Hash)
        {}.tap do |hash|
          value.each { |k, v| hash[k] = _to_hash(v) }
        end
      elsif value.respond_to? :to_hash
        value.to_hash
      else
        value
      end
    end
  end
end
