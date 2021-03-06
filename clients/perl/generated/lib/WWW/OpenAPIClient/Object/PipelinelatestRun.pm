=begin comment

Swaggy Jenkins

Jenkins API clients generated from Swagger / Open API specification

OpenAPI spec version: 1.0.0
Contact: blah@cliffano.com
Generated by: https://openapi-generator.tech

=end comment

=cut

#
# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# Do not edit the class manually.
# Ref: https://openapi-generator.tech
#
package WWW::OpenAPIClient::Object::PipelinelatestRun;

require 5.6.0;
use strict;
use warnings;
use utf8;
use JSON qw(decode_json);
use Data::Dumper;
use Module::Runtime qw(use_module);
use Log::Any qw($log);
use Date::Parse;
use DateTime;

use WWW::OpenAPIClient::Object::PipelinelatestRunartifacts;

use base ("Class::Accessor", "Class::Data::Inheritable");


#
#
#
# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech). Do not edit the class manually.
# REF: https://openapi-generator.tech
#

=begin comment

Swaggy Jenkins

Jenkins API clients generated from Swagger / Open API specification

OpenAPI spec version: 1.0.0
Contact: blah@cliffano.com
Generated by: https://openapi-generator.tech

=end comment

=cut

#
# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# Do not edit the class manually.
# Ref: https://openapi-generator.tech
#
__PACKAGE__->mk_classdata('attribute_map' => {});
__PACKAGE__->mk_classdata('openapi_types' => {});
__PACKAGE__->mk_classdata('method_documentation' => {}); 
__PACKAGE__->mk_classdata('class_documentation' => {});

# new object
sub new { 
    my ($class, %args) = @_; 

	my $self = bless {}, $class;
	
	foreach my $attribute (keys %{$class->attribute_map}) {
		my $args_key = $class->attribute_map->{$attribute};
		$self->$attribute( $args{ $args_key } );
	}
	
	return $self;
}  

# return perl hash
sub to_hash {
    return decode_json(JSON->new->convert_blessed->encode( shift ));
}

# used by JSON for serialization
sub TO_JSON { 
    my $self = shift;
    my $_data = {};
    foreach my $_key (keys %{$self->attribute_map}) {
        if (defined $self->{$_key}) {
            $_data->{$self->attribute_map->{$_key}} = $self->{$_key};
        }
    }
    return $_data;
}

# from Perl hashref
sub from_hash {
    my ($self, $hash) = @_;

    # loop through attributes and use openapi_types to deserialize the data
    while ( my ($_key, $_type) = each %{$self->openapi_types} ) {
    	my $_json_attribute = $self->attribute_map->{$_key}; 
        if ($_type =~ /^array\[/i) { # array
            my $_subclass = substr($_type, 6, -1);
            my @_array = ();
            foreach my $_element (@{$hash->{$_json_attribute}}) {
                push @_array, $self->_deserialize($_subclass, $_element);
            }
            $self->{$_key} = \@_array;
        } elsif (exists $hash->{$_json_attribute}) { #hash(model), primitive, datetime
            $self->{$_key} = $self->_deserialize($_type, $hash->{$_json_attribute});
        } else {
        	$log->debugf("Warning: %s (%s) does not exist in input hash\n", $_key, $_json_attribute);
        }
    }
  
    return $self;
}

# deserialize non-array data
sub _deserialize {
    my ($self, $type, $data) = @_;
    $log->debugf("deserializing %s with %s",Dumper($data), $type);
        
    if ($type eq 'DateTime') {
        return DateTime->from_epoch(epoch => str2time($data));
    } elsif ( grep( /^$type$/, ('int', 'double', 'string', 'boolean'))) {
        return $data;
    } else { # hash(model)
        my $_instance = eval "WWW::OpenAPIClient::Object::$type->new()";
        return $_instance->from_hash($data);
    }
}



__PACKAGE__->class_documentation({description => '',
                                  class => 'PipelinelatestRun',
                                  required => [], # TODO
}                                 );

__PACKAGE__->method_documentation({
    'artifacts' => {
    	datatype => 'ARRAY[PipelinelatestRunartifacts]',
    	base_name => 'artifacts',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'duration_in_millis' => {
    	datatype => 'int',
    	base_name => 'durationInMillis',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'estimated_duration_in_millis' => {
    	datatype => 'int',
    	base_name => 'estimatedDurationInMillis',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'en_queue_time' => {
    	datatype => 'string',
    	base_name => 'enQueueTime',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'end_time' => {
    	datatype => 'string',
    	base_name => 'endTime',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'id' => {
    	datatype => 'string',
    	base_name => 'id',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'organization' => {
    	datatype => 'string',
    	base_name => 'organization',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'pipeline' => {
    	datatype => 'string',
    	base_name => 'pipeline',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'result' => {
    	datatype => 'string',
    	base_name => 'result',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'run_summary' => {
    	datatype => 'string',
    	base_name => 'runSummary',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'start_time' => {
    	datatype => 'string',
    	base_name => 'startTime',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'state' => {
    	datatype => 'string',
    	base_name => 'state',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'type' => {
    	datatype => 'string',
    	base_name => 'type',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'commit_id' => {
    	datatype => 'string',
    	base_name => 'commitId',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    '_class' => {
    	datatype => 'string',
    	base_name => '_class',
    	description => '',
    	format => '',
    	read_only => '',
    		},
});

__PACKAGE__->openapi_types( {
    'artifacts' => 'ARRAY[PipelinelatestRunartifacts]',
    'duration_in_millis' => 'int',
    'estimated_duration_in_millis' => 'int',
    'en_queue_time' => 'string',
    'end_time' => 'string',
    'id' => 'string',
    'organization' => 'string',
    'pipeline' => 'string',
    'result' => 'string',
    'run_summary' => 'string',
    'start_time' => 'string',
    'state' => 'string',
    'type' => 'string',
    'commit_id' => 'string',
    '_class' => 'string'
} );

__PACKAGE__->attribute_map( {
    'artifacts' => 'artifacts',
    'duration_in_millis' => 'durationInMillis',
    'estimated_duration_in_millis' => 'estimatedDurationInMillis',
    'en_queue_time' => 'enQueueTime',
    'end_time' => 'endTime',
    'id' => 'id',
    'organization' => 'organization',
    'pipeline' => 'pipeline',
    'result' => 'result',
    'run_summary' => 'runSummary',
    'start_time' => 'startTime',
    'state' => 'state',
    'type' => 'type',
    'commit_id' => 'commitId',
    '_class' => '_class'
} );

__PACKAGE__->mk_accessors(keys %{__PACKAGE__->attribute_map});


1;
