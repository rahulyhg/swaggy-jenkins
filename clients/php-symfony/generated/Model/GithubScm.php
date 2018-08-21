<?php
/**
 * GithubScm
 *
 * PHP version 5
 *
 * @category Class
 * @package  OpenAPI\Server\Model
 * @author   OpenAPI Generator team
 * @link     https://github.com/openapitools/openapi-generator
 */

/**
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.0.0
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 *
 */

/**
 * NOTE: This class is auto generated by the openapi generator program.
 * https://github.com/openapitools/openapi-generator
 * Do not edit the class manually.
 */

namespace OpenAPI\Server\Model;

use Symfony\Component\Validator\Constraints as Assert;
use JMS\Serializer\Annotation\Type;
use JMS\Serializer\Annotation\SerializedName;

/**
 * Class representing the GithubScm model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class GithubScm 
{
        /**
     * @var string|null
     * @SerializedName("_class")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $class;

    /**
     * @var OpenAPI\Server\Model\GithubScmlinks|null
     * @SerializedName("_links")
     * @Assert\Type("OpenAPI\Server\Model\GithubScmlinks")
     * @Type("OpenAPI\Server\Model\GithubScmlinks")
     */
    protected $links;

    /**
     * @var string|null
     * @SerializedName("credentialId")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $credentialId;

    /**
     * @var string|null
     * @SerializedName("id")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $id;

    /**
     * @var string|null
     * @SerializedName("uri")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $uri;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->class = isset($data['class']) ? $data['class'] : null;
        $this->links = isset($data['links']) ? $data['links'] : null;
        $this->credentialId = isset($data['credentialId']) ? $data['credentialId'] : null;
        $this->id = isset($data['id']) ? $data['id'] : null;
        $this->uri = isset($data['uri']) ? $data['uri'] : null;
    }

    /**
     * Gets class.
     *
     * @return string|null
     */
    public function getClass()
    {
        return $this->class;
    }

    /**
     * Sets class.
     *
     * @param string|null $class
     *
     * @return $this
     */
    public function setClass($class = null)
    {
        $this->class = $class;

        return $this;
    }

    /**
     * Gets links.
     *
     * @return OpenAPI\Server\Model\GithubScmlinks|null
     */
    public function getLinks()
    {
        return $this->links;
    }

    /**
     * Sets links.
     *
     * @param OpenAPI\Server\Model\GithubScmlinks|null $links
     *
     * @return $this
     */
    public function setLinks(GithubScmlinks $links = null)
    {
        $this->links = $links;

        return $this;
    }

    /**
     * Gets credentialId.
     *
     * @return string|null
     */
    public function getCredentialId()
    {
        return $this->credentialId;
    }

    /**
     * Sets credentialId.
     *
     * @param string|null $credentialId
     *
     * @return $this
     */
    public function setCredentialId($credentialId = null)
    {
        $this->credentialId = $credentialId;

        return $this;
    }

    /**
     * Gets id.
     *
     * @return string|null
     */
    public function getId()
    {
        return $this->id;
    }

    /**
     * Sets id.
     *
     * @param string|null $id
     *
     * @return $this
     */
    public function setId($id = null)
    {
        $this->id = $id;

        return $this;
    }

    /**
     * Gets uri.
     *
     * @return string|null
     */
    public function getUri()
    {
        return $this->uri;
    }

    /**
     * Sets uri.
     *
     * @param string|null $uri
     *
     * @return $this
     */
    public function setUri($uri = null)
    {
        $this->uri = $uri;

        return $this;
    }
}

