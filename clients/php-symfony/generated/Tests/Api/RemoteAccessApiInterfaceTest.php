<?php
/**
 * RemoteAccessApiInterfaceTest
 * PHP version 5
 *
 * @category Class
 * @package  OpenAPI\Server\Tests\Api
 * @author   openapi-generator contributors
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
 * Please update the test case below to test the endpoint.
 */

namespace OpenAPI\Server\Tests\Api;

use OpenAPI\Server\Configuration;
use OpenAPI\Server\ApiClient;
use OpenAPI\Server\ApiException;
use OpenAPI\Server\ObjectSerializer;
use Symfony\Bundle\FrameworkBundle\Test\WebTestCase;

/**
 * RemoteAccessApiInterfaceTest Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Server\Tests\Api
 * @author   openapi-generator contributors
 * @link     https://github.com/openapitools/openapi-generator
 */
class RemoteAccessApiInterfaceTest extends WebTestCase
{

    /**
     * Setup before running any test cases
     */
    public static function setUpBeforeClass()
    {
    }

    /**
     * Setup before running each test case
     */
    public function setUp()
    {
    }

    /**
     * Clean up after running each test case
     */
    public function tearDown()
    {
    }

    /**
     * Clean up after running all test cases
     */
    public static function tearDownAfterClass()
    {
    }

    /**
     * Test case for getComputer
     *
     * .
     *
     */
    public function testGetComputer()
    {
        $client = static::createClient();

        $path = '/computer/api/json';

        $crawler = $client->request('GET', $path);
    }

    /**
     * Test case for getCrumb
     *
     * .
     *
     */
    public function testGetCrumb()
    {
        $client = static::createClient();

        $path = '/crumbIssuer/api/json';

        $crawler = $client->request('GET', $path);
    }

    /**
     * Test case for getJenkins
     *
     * .
     *
     */
    public function testGetJenkins()
    {
        $client = static::createClient();

        $path = '/api/json';

        $crawler = $client->request('GET', $path);
    }

    /**
     * Test case for getJob
     *
     * .
     *
     */
    public function testGetJob()
    {
        $client = static::createClient();

        $path = '/job/{name}/api/json';
        $pattern = '{name}';
        $data = $this->genTestData('[a-z0-9]+');
        $path = str_replace($pattern, $data, $path);

        $crawler = $client->request('GET', $path);
    }

    /**
     * Test case for getJobConfig
     *
     * .
     *
     */
    public function testGetJobConfig()
    {
        $client = static::createClient();

        $path = '/job/{name}/config.xml';
        $pattern = '{name}';
        $data = $this->genTestData('[a-z0-9]+');
        $path = str_replace($pattern, $data, $path);

        $crawler = $client->request('GET', $path);
    }

    /**
     * Test case for getJobLastBuild
     *
     * .
     *
     */
    public function testGetJobLastBuild()
    {
        $client = static::createClient();

        $path = '/job/{name}/lastBuild/api/json';
        $pattern = '{name}';
        $data = $this->genTestData('[a-z0-9]+');
        $path = str_replace($pattern, $data, $path);

        $crawler = $client->request('GET', $path);
    }

    /**
     * Test case for getJobProgressiveText
     *
     * .
     *
     */
    public function testGetJobProgressiveText()
    {
        $client = static::createClient();

        $path = '/job/{name}/{number}/logText/progressiveText';
        $pattern = '{name}';
        $data = $this->genTestData('[a-z0-9]+');
        $path = str_replace($pattern, $data, $path);
        $pattern = '{number}';
        $data = $this->genTestData('[a-z0-9]+');
        $path = str_replace($pattern, $data, $path);

        $crawler = $client->request('GET', $path);
    }

    /**
     * Test case for getQueue
     *
     * .
     *
     */
    public function testGetQueue()
    {
        $client = static::createClient();

        $path = '/queue/api/json';

        $crawler = $client->request('GET', $path);
    }

    /**
     * Test case for getQueueItem
     *
     * .
     *
     */
    public function testGetQueueItem()
    {
        $client = static::createClient();

        $path = '/queue/item/{number}/api/json';
        $pattern = '{number}';
        $data = $this->genTestData('[a-z0-9]+');
        $path = str_replace($pattern, $data, $path);

        $crawler = $client->request('GET', $path);
    }

    /**
     * Test case for getView
     *
     * .
     *
     */
    public function testGetView()
    {
        $client = static::createClient();

        $path = '/view/{name}/api/json';
        $pattern = '{name}';
        $data = $this->genTestData('[a-z0-9]+');
        $path = str_replace($pattern, $data, $path);

        $crawler = $client->request('GET', $path);
    }

    /**
     * Test case for getViewConfig
     *
     * .
     *
     */
    public function testGetViewConfig()
    {
        $client = static::createClient();

        $path = '/view/{name}/config.xml';
        $pattern = '{name}';
        $data = $this->genTestData('[a-z0-9]+');
        $path = str_replace($pattern, $data, $path);

        $crawler = $client->request('GET', $path);
    }

    /**
     * Test case for headJenkins
     *
     * .
     *
     */
    public function testHeadJenkins()
    {
        $client = static::createClient();

        $path = '/api/json';

        $crawler = $client->request('HEAD', $path);
    }

    /**
     * Test case for postCreateItem
     *
     * .
     *
     */
    public function testPostCreateItem()
    {
        $client = static::createClient();

        $path = '/createItem';

        $crawler = $client->request('POST', $path);
    }

    /**
     * Test case for postCreateView
     *
     * .
     *
     */
    public function testPostCreateView()
    {
        $client = static::createClient();

        $path = '/createView';

        $crawler = $client->request('POST', $path);
    }

    /**
     * Test case for postJobBuild
     *
     * .
     *
     */
    public function testPostJobBuild()
    {
        $client = static::createClient();

        $path = '/job/{name}/build';
        $pattern = '{name}';
        $data = $this->genTestData('[a-z0-9]+');
        $path = str_replace($pattern, $data, $path);

        $crawler = $client->request('POST', $path);
    }

    /**
     * Test case for postJobConfig
     *
     * .
     *
     */
    public function testPostJobConfig()
    {
        $client = static::createClient();

        $path = '/job/{name}/config.xml';
        $pattern = '{name}';
        $data = $this->genTestData('[a-z0-9]+');
        $path = str_replace($pattern, $data, $path);

        $crawler = $client->request('POST', $path);
    }

    /**
     * Test case for postJobDelete
     *
     * .
     *
     */
    public function testPostJobDelete()
    {
        $client = static::createClient();

        $path = '/job/{name}/doDelete';
        $pattern = '{name}';
        $data = $this->genTestData('[a-z0-9]+');
        $path = str_replace($pattern, $data, $path);

        $crawler = $client->request('POST', $path);
    }

    /**
     * Test case for postJobDisable
     *
     * .
     *
     */
    public function testPostJobDisable()
    {
        $client = static::createClient();

        $path = '/job/{name}/disable';
        $pattern = '{name}';
        $data = $this->genTestData('[a-z0-9]+');
        $path = str_replace($pattern, $data, $path);

        $crawler = $client->request('POST', $path);
    }

    /**
     * Test case for postJobEnable
     *
     * .
     *
     */
    public function testPostJobEnable()
    {
        $client = static::createClient();

        $path = '/job/{name}/enable';
        $pattern = '{name}';
        $data = $this->genTestData('[a-z0-9]+');
        $path = str_replace($pattern, $data, $path);

        $crawler = $client->request('POST', $path);
    }

    /**
     * Test case for postJobLastBuildStop
     *
     * .
     *
     */
    public function testPostJobLastBuildStop()
    {
        $client = static::createClient();

        $path = '/job/{name}/lastBuild/stop';
        $pattern = '{name}';
        $data = $this->genTestData('[a-z0-9]+');
        $path = str_replace($pattern, $data, $path);

        $crawler = $client->request('POST', $path);
    }

    /**
     * Test case for postViewConfig
     *
     * .
     *
     */
    public function testPostViewConfig()
    {
        $client = static::createClient();

        $path = '/view/{name}/config.xml';
        $pattern = '{name}';
        $data = $this->genTestData('[a-z0-9]+');
        $path = str_replace($pattern, $data, $path);

        $crawler = $client->request('POST', $path);
    }

    protected function genTestData($regexp)
    {
        $grammar  = new \Hoa\File\Read('hoa://Library/Regex/Grammar.pp');
        $compiler = \Hoa\Compiler\Llk\Llk::load($grammar);
        $ast      = $compiler->parse($regexp);
        $generator = new \Hoa\Regex\Visitor\Isotropic(new \Hoa\Math\Sampler\Random());

        return $generator->visit($ast); 
    }
}
