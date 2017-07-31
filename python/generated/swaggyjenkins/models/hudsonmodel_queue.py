# coding: utf-8

"""
    Swaggy Jenkins

    Jenkins API clients generated from Swagger / Open API specification

    OpenAPI spec version: 0.1.0
    Contact: blah@cliffano.com
    Generated by: https://github.com/swagger-api/swagger-codegen.git
"""


from pprint import pformat
from six import iteritems
import re


class HudsonmodelQueue(object):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    """


    """
    Attributes:
      swagger_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    swagger_types = {
        '_class': 'str',
        'items': 'list[HudsonmodelQueueBlockedItem]'
    }

    attribute_map = {
        '_class': '_class',
        'items': 'items'
    }

    def __init__(self, _class=None, items=None):
        """
        HudsonmodelQueue - a model defined in Swagger
        """

        self.__class = None
        self._items = None
        self.discriminator = None

        if _class is not None:
          self._class = _class
        if items is not None:
          self.items = items

    @property
    def _class(self):
        """
        Gets the _class of this HudsonmodelQueue.

        :return: The _class of this HudsonmodelQueue.
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class):
        """
        Sets the _class of this HudsonmodelQueue.

        :param _class: The _class of this HudsonmodelQueue.
        :type: str
        """

        self.__class = _class

    @property
    def items(self):
        """
        Gets the items of this HudsonmodelQueue.

        :return: The items of this HudsonmodelQueue.
        :rtype: list[HudsonmodelQueueBlockedItem]
        """
        return self._items

    @items.setter
    def items(self, items):
        """
        Sets the items of this HudsonmodelQueue.

        :param items: The items of this HudsonmodelQueue.
        :type: list[HudsonmodelQueueBlockedItem]
        """

        self._items = items

    def to_dict(self):
        """
        Returns the model properties as a dict
        """
        result = {}

        for attr, _ in iteritems(self.swagger_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value

        return result

    def to_str(self):
        """
        Returns the string representation of the model
        """
        return pformat(self.to_dict())

    def __repr__(self):
        """
        For `print` and `pprint`
        """
        return self.to_str()

    def __eq__(self, other):
        """
        Returns true if both objects are equal
        """
        if not isinstance(other, HudsonmodelQueue):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """
        Returns true if both objects are not equal
        """
        return not self == other